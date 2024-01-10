import java.util.*;

 class Fourth {

    void delay(int n) {
     if (n <= 5) {
       System.out.println("you have to pay 0.50rs Fine");
     } else if (n >= 6 && n < 10) {
       System.out.println("you have to pay one rupee (1rs) Fine");
 
     } else if (n >= 10 && n < 30) {
       System.out.println("you have to pay one rupee (5rs) Fine");
 
     } else {
       System.out.println("Don't come here again! ");
       System.out.println("your membership will be cancelled.");
 
     }
   }

}

public class Q_3_library{
  public static void main(String[] args) {
    Fourth f = new Fourth();
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the date (number of delay date) ");
    int n= sc.nextInt();
    f.delay(n);
    sc.close();
  }
}