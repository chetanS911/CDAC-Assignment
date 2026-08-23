import java.util.Scanner;

public class Main{

    static void checkAgeCategory(int age){

        if(age < 18){
            System.out.println("You are a minor");
        }else if(age < 60){
            System.out.println("You are an adult");
        } else{
            System.out.println("You are a senior citizen");
        }
    }

    public static void main(String[] arg){

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter your age: ");
        int age = sc.nextInt();

        checkAgeCategory(age);

        sc.close();
    }
}