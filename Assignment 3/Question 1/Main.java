import java.util.Scanner;

public class Main{

    static int sumOfTwoNumbers(int a, int b){
        return a + b;
    }

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter first number: ");
        int n1 = sc.nextInt();

        System.out.print("Enter second number: ");
        int n2 = sc.nextInt();

        int sum = sumOfTwoNumbers(n1, n2);

        System.out.println("The sum of " + n1 + " and " + n2 + " is " + sum);

        sc.close();
    }
}