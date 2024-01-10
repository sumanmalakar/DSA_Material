import java.util.*;

class S{
  public
  String Name;
  String RollNo;
  int DSA;
  int Java;
  int Maths;
  int OperatingSystem;
  int sum;

  public void getUserInput() {

    Scanner sc = new Scanner(System.in);
    System.out.println("Enter Your Name:");
    Name = sc.next();
    System.out.println("Enter ROll NO:");
    RollNo = sc.next();
    System.out.println("Enter your DSA Marks: ");
    DSA = sc.nextInt();
    System.out.println("Enter your Java Marks: ");
    Java = sc.nextInt();
    System.out.println("Enter your Maths Marks: ");
    Maths = sc.nextInt();
    System.out.println("Enter your Operating System Marks: ");
    OperatingSystem = sc.nextInt();

  }

  public void showUserOutput() {

    System.out.println("Total No.of Subjects are 4:");
    sum = (DSA + Java + Maths + OperatingSystem);
    float sum1 = (sum / 400) * 100;
    System.out.println("The Percentage you have got is:" + sum1);
    System.out.println("Your Name is :" + this.Name);
    System.out.println("Your Roll NO is:" + this.RollNo);
  }
}

public class Student2{
  public static void main(String[] args) {
    S d = new S();
    d.getUserInput();
    d.showUserOutput();
  }

}