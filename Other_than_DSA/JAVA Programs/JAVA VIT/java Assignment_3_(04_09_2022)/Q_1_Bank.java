import java.util.*;

class Customer_Details {

  Scanner sc = new Scanner(System.in);
  long[] Account_Number = { 1003807660, 100387456, 1003805698, 1003874568 };
  String[] Account_Name = { "Glady", "Mukul", "Suman", "Saurabh" };
  int[] Account_Balance = { 98, 1587, 2000, 95 };
  long getinput;

  void getAccountInfo() {

    for (int i = 0; i < Account_Balance.length; i++) {
      if (Account_Balance[i] <= 100) {
        System.out.println(Account_Name[i] + "  Your Account Balance is less than 100");
        System.out.println("Your Exact Amount is " + Account_Balance[i]);
      }

    }

  }

 void withDrawalRequest() {
    System.out.println("Do you Want to withdraw money");
    System.out.println("You Cannot Withdraw if the amout is below 100");
    // System.out.println("Type YES or NO");
    System.out.println("Enter your Account Number:");
    getinput = sc.nextLong();
    for (int i = 0; i < Account_Number.length; i++) {
      if (Account_Number[i] == getinput && Account_Balance[i] <= 100) {
        System.out.println("Your Account Balance is below 100. So you cannot withdraw the balance");
      } else if (Account_Number[i] == getinput) {

        System.out.println("Enter the amount to be withdrawn: ");
        getinput = sc.nextLong();
        long sub = Account_Balance[i] - getinput;
        System.out.println("Remaining Balance is:" + sub);
      }else{
        System.out.println("Invalid Account Number...");
        break;
      }

    }

  }
  }

  public class Q_1_Bank {
    public static void main(String[] args) {
      Customer_Details C = new Customer_Details();
      C.getAccountInfo();
      C.withDrawalRequest();

    }
  }


