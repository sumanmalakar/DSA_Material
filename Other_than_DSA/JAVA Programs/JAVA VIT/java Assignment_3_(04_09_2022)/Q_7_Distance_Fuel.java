import java.util.*;

class D_f {
  int Flight_number;
  String Destination;
  float Distancef, Fuelf;

  int CALFUEL(Float d) {
    this.Distancef = d;
    if (Distancef <= 1000) {
      return 500;
    } else if (Distancef >= 1000 && Distancef <= 2000) {
      return 1100;
    }
    return 2200;
  }

  void SHOWINFO() {
    System.out.println("Your Flight Number is :- " + Flight_number);
    System.out.println("Your Destination is :- " + Destination + "\nDistace is :- " + Distancef);

  }

  void FEEDINFO() {

    Scanner sc = new Scanner(System.in);

    System.out.println("Enter Flight Number");
    this.Flight_number = sc.nextInt();

    System.out.println("Enter Destination ");
    this.Destination = sc.next();

    System.out.println("Enter the Distance ");
    this.Distancef = sc.nextFloat();

    System.out.println();

    // calling SHOWINFO Function
    SHOWINFO();

    // calling CALFUEL Function
    System.out.println("Total Fuel required :- " + CALFUEL(Distancef));

  }

}

public class Q_7_Distance_Fuel {

  public static void main(String[] args) {
    D_f d = new D_f();
    d.FEEDINFO();

  }
}