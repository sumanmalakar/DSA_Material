import java.util.*;
import java.util.Scanner;

public class First {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the speed -> ");
        int speed = sc.nextInt();
        sc.close();
        
        if(speed<70){
            System.out.println("OK");
        }else if(speed>70){
            int speed2 = speed - 70;
            int p = speed2/5;
            if(p<12){
                System.out.println("Overall points = "+p);
            }else{
                System.out.println("License suspended");
            }
        }
    }
}