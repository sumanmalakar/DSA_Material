import java.util.*;

class Insurace{
 int age, premium, max_amout;
 String health, location, sex;

 void input(){
   Scanner sc = new Scanner(System.in);

   System.out.println("Enter your age ..");
   this.age = sc.nextInt();
   System.out.println("Enter Your health - e for excellent, p for poor ");
   this.health = sc.next();
   System.out.println("Enter your location");
   this.location = sc.next();
   System.out.println("Enter your sex");
   this.sex = sc.next();

 }

 void show(){

  if((health.equals("e")) && (age>=25) && (age<=35) && (location.equals("city")) && (sex.equals("male"))){
   premium = 4;
   max_amout = 2;
    System.out.println("This person is insured \n The payable preminum is Rs. "+ premium + " per thousand and max policy amount is Rs. "+ max_amout + " Lakhs");
  } 
  else if ((health.equals("e")) && (age >= 25) && (age <= 35) && (location.equals("city")) && (sex.equals("female"))) {
    premium = 3;
    max_amout = 1;
    System.out.println("This person is insured \n The payable preminum is Rs. " + premium
        + " per thousand and max policy amount is Rs. " + max_amout + " Lakhs");
  }
  else if ((health.equals("p")) && (age >= 25) && (age <= 35) && (location.equals("village")) && (sex.equals("male"))) {
    premium = 6;
    max_amout = 10;
    System.out.println("This person is insured \n The payable preminum is Rs. " + premium
        + " per thousand and max policy amount is Rs. " + max_amout + " Thousand!");
  }else{
    System.out.println("This person is not insured ");
  }
 }


}

public class Q_4_Insurance_premium {
  public static void main(String[] args) {
    Insurace n = new Insurace();
    n.input();
    n.show();
    // System.out.println("Hello Google!");
  }
}