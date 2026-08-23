public class gradesystem {
        public static void main(String[] args){

            int Maths = 80;
            int Science = 85;
            int History = 90;

            int average = (Maths + Science + History) / 3;

            System.out.println("Average: " + average);

            if(average >= 90) {
                System.out.println("Grade A");
            } else if(average >= 70){
                System.out.println("Grade B");
            } else if(average >= 50){
                System.out.println("Grade c");
            } else if(average >= 30){
                System.out.println("Grade d");
            } else {
                System.out.println("Fail");
            }
        }
}