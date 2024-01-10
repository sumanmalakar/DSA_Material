import java.util.*;

public class Q_4_Student {
  int Registration_Number;
  String Sname;
  float mathsf;
  float engf;
  float sciencef;
  float total;

void input(){
  Scanner sc = new Scanner(System.in);

  System.out.println("Enter your registration_no");
  Registration_Number = sc.nextInt();
  System.out.println("Enter your Sname");
 Sname = sc.next();
 System.out.println("Enter maths, eng, science marks");
 mathsf = sc.nextFloat();
 engf = sc.nextFloat();
 sciencef = sc.nextFloat();

}

void total(){
  double  total = mathsf + engf + sciencef;

  System.out.println("Your total marks = "+ total);
}
  public static void main(String[] args) {
     Q_4_Student s = new Q_4_Student();
     s.input();
     s.total();
  }
}
