import java.util.*;

class deposite_Amount {
  String customer_Name;
  long Account_Number;
  double balance;
  Scanner sc = new Scanner(System.in);

  void input() {
    System.out.println("Enter your Name ");
    customer_Name = sc.nextLine();
    Random rd = new Random(); // creating Random object
    Account_Number = Math.abs(rd.nextInt());
    System.out.println("Enter your balance");
    balance = sc.nextDouble();
    // sc.close();
  }

  double Calculate_iterest(double rate) {
    double iterest;
    iterest = balance + (balance * rate) / 100;
    return iterest;

  }

  void show() {
    System.out.println("Name = " + customer_Name);
    System.out.println("Account_Number = " + Account_Number);
    System.out.println("Balance = " + balance);
    System.out.print("Your balace with interest = " + Calculate_iterest(4));

  }

}

// The formula
// used is A= P(1+r/n) ^ nt, where 'A' represents final amount procured, 'P' represents principal, 'r' represents annual interest rate, 'n' represents the number of times that interest has been compounded, 't' represents the tenure.

class RD extends deposite_Amount {
  double r, n, t;

  void rd_interest(){
    System.out.println("\n Enter annual interest rate = ");
    r = sc.nextDouble();
    System.out.println("Enter number of times that interest has been compounded = ");
    n = sc.nextDouble();
    System.out.println("Enter represents the tenure");
    t = sc.nextDouble();
    sc.close();
  System.out.println("Rd interest = " + ((balance * (1 + r / n))^( n * t)));
     
  }



}

class Account {
  public static void main(String[] args) {
    RD a = new RD();
    // deposite_Amount a = new deposite_Amount();
    a.input();
    a.show();
    a.rd_interest();
    // a.input2();
  }
}