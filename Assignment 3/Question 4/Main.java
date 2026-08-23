import java.util.Scanner;
public class Main {

    static void askForPositiveNumber() {

        Scanner sc = new Scanner(System.in);
        int number;

        do {
            System.out.print("Enter a positive number: ");
            number = sc.nextInt();
        } while (number <= 0);
        System.out.println("You entered a positive number: " + number);

        sc.close();
    }
    public static void main(String[] args) {

        askForPositiveNumber();
    }
}