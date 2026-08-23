import java.util.Scanner;

public class Main{

    public static void  main (String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number: ");
        int n = sc.nextInt();

        int factorial = 1;

        for(int i=1; i<=n; i++){
            factorial = factorial * i;
           

    }

    System.out.print("factorial of " + n + " is " + factorial);

        sc.close();
    }
}