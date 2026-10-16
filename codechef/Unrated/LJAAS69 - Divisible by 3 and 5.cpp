import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int num;
        Scanner scanner = new Scanner(System.in);
        num = scanner.nextInt();
        if (num%3==0&&num%5==0){
            System.out.println("Divisible by both 3 and 5");
        }else{
            System.out.println("Not divisible by both 3 and 5");
        }
        num = scanner.nextInt();
         if (num%3==0&&num%5==0){
            System.out.println("Divisible by both 3 and 5");
        }else{
            System.out.println("Not divisible by both 3 and 5");
        }
    }
}