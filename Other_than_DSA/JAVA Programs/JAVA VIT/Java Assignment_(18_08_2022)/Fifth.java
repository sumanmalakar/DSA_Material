import java.util.*;

public class Fifth {

  public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the number ");
    int number = sc.nextInt();
    sc.close();

    fizz_buzz(number);
    
  }

  public static int fizz_buzz(int n) {
    if (n % 3 == 0) {
      System.out.println("FIzz");
      return 0;
    } 
    if(n%5 == 0){
      System.out.println("BUzz");
      return 0;
    }
    if(n%3==0 && n%5 ==0){
      System.out.println("FizzBuzz");
      return 0;
    }
    return n;
  }
}
