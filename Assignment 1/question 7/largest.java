public class largest{
    public static void main(String[] args){
        int a = 20;
        int b = 10;
        int c = 25;

        if(a>b && a>c){
            System.out.println(a);
        }else if (b>a && b>c){
            System.out.println(b);
        }else{
            System.out.println(c);
        }
    }
}