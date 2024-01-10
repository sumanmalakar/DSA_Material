import java.util.*;

public class Third {
   public static void main(String[] args) {
     Scanner sc = new Scanner(System.in);
     System.out.println("Enter the worked hours of employeers");
     int h = sc.nextInt();

     if(h>40){
       int extraPay = (h-40)*12;
       System.out.println("The overall extraPay = "+(extraPay)*10);
     }else{
       System.out.println("Employee not work overtime ");
     }
   }
}
