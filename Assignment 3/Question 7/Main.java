import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int choice;

        do {
            System.out.println("\n----- MENU -----");
            System.out.println("1. Grade Evaluation System");
            System.out.println("2. Leap Year Check");
            System.out.println("3. Day of the Week");
            System.out.println("4. Identify Default Values of Variables");
            System.out.println("5. Exit");

            System.out.print("Enter your choice: ");
            choice = sc.nextInt();

            switch (choice) {

                case 1:
                    System.out.print("Enter marks of subject 1: ");
                    int m1 = sc.nextInt();

                    System.out.print("Enter marks of subject 2: ");
                    int m2 = sc.nextInt();

                    System.out.print("Enter marks of subject 3: ");
                    int m3 = sc.nextInt();

                    int average = (m1 + m2 + m3) / 3;

                    if (average >= 90) {
                        System.out.println("Grade A");
                    } else if (average >= 70) {
                        System.out.println("Grade B");
                    } else if (average >= 50) {
                        System.out.println("Grade C");
                    } else if (average >= 30) {
                        System.out.println("Grade D");
                    } else {
                        System.out.println("Fail");
                    }
                    break;

                case 2:
                    System.out.print("Enter year: ");
                    int year = sc.nextInt();

                    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
                        System.out.println(year + " is a leap year.");
                    } else {
                        System.out.println(year + " is not a leap year.");
                    }
                    break;

                case 3:
                    System.out.print("Enter day number (1-7): ");
                    int day = sc.nextInt();

                    switch (day) {
                        case 1:
                            System.out.println("Monday");
                            break;
                        case 2:
                            System.out.println("Tuesday");
                            break;
                        case 3:
                            System.out.println("Wednesday");
                            break;
                        case 4:
                            System.out.println("Thursday");
                            break;
                        case 5:
                            System.out.println("Friday");
                            break;
                        case 6:
                            System.out.println("Saturday");
                            break;
                        case 7:
                            System.out.println("Sunday");
                            break;
                        default:
                            System.out.println("Invalid day number.");
                    }
                    break;

                case 4:
                    System.out.println("Default values of instance variables:");

                    System.out.println("byte: 0");
                    System.out.println("short: 0");
                    System.out.println("int: 0");
                    System.out.println("long: 0");
                    System.out.println("float: 0.0");
                    System.out.println("double: 0.0");
                    System.out.println("char: \\u0000");
                    System.out.println("boolean: false");
                    break;

                case 5:
                    System.out.println("Exiting program...");
                    break;

                default:
                    System.out.println("Invalid choice. Please enter 1-5.");
            }
        } while (choice != 5);
        sc.close();
    }
}