import java.util.*;

class Third {

  int h;

  void initial() {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the worked hours of employeers");
    this.h = sc.nextInt();

    if (h > 40) {
      int extraPay = (h - 40) * 12;
      System.out.println("The overall extraPay = " + (extraPay) * 10);
    } else {
      System.out.println("Employee not work overtime ");
    }
  }

}

public class Q_6_pay {
  public static void main(String[] args) {
    Third a = new Third();
    a.initial();

  }
}
