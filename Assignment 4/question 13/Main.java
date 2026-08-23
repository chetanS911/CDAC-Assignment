import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int[] numbers = new int[5];
        System.out.println("Enter 5 integers:");

        for (int i = 0; i < 5; i++) {
            numbers[i] = sc.nextInt();
        }
        System.out.print("Enter the number to search: ");
        int search = sc.nextInt();
        boolean found = false;

        for (int number : numbers) {
            if (number == search) {
                found = true;
                break;
            }
        }
        if (found) {
            System.out.println("Found");
        } else {
            System.out.println("Not Found");
        }
        sc.close();
    }
}