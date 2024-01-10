package Distance;
import java.util.*;
public class Bus_fair {
  String travlerName;
  String source;
  String destination;
  int Distance;

  public void input(){  
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter TravlerName, Source, Destination, Distace...");
    travlerName = sc.next();
    source = sc.next();
    destination = sc.next();
    Distance = sc.nextInt();
  }

  public int calculate_ticketPrice(){
    int price = 0;
    if(Distance<100){
      price = 50;
     return price;
    }else if(Distance>=100 && Distance<500){
      price = 1000;
      return price;

    }else if(Distance>=500){
      price = 2000;
    }

    return price;
  }

  public void display(){
    System.out.println("Travler Name - "+travlerName);
    System.out.println("Source - "+ source);
    System.out.println("Distination - "+destination);
    System.out.println("Distace - "+ Distance);
    System.out.println("Ticket price - "+calculate_ticketPrice());
  }
  
}
 class Main{
  public static void main(String [] a){ 
    Bus_fair b = new Bus_fair();
    b.input();
    b.display();
  }
}