import java.util.*;

public class Fourth {

  public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the number ");
    int number_of_day_late = sc.nextInt();

  delay(number_of_day_late);
  }

public static void delay(int n){
  if(n<=5){
    System.out.println("you have to pay 0.50rs Fine");
  }else if(n>=6 && n<10){
    System.out.println("you have to pay one rupee (1rs) Fine");

  }else if(n>=10 && n<30){
    System.out.println("you have to pay one rupee (5rs) Fine");

  }else{
    System.out.println("Don't come here again! ");
    System.out.println("your membership will be cancelled.");

  }
}

}
