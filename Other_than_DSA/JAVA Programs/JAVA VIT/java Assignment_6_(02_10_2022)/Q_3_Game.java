import java.util.*;

public class Q_3_Game {
  public static void main(String [] args) {
     Scanner sc=new Scanner(System.in);
     Random rand=new Random();
     char ch="ABCDEFGHIJKLMNOPQRSTUVWXYZ".toCharArray()[rand.nextInt("ABCDEFGHIJKLMNOPQRSTUVWXYZ".toCharArray().length)];
     int flag=0;
     int count=0;
     while(flag!=1){
       System.out.println("Enter a letter in Capital Letter from A-Z");
       char input=sc.next().charAt(0);
       if(ch==input){
 System.out.println("You have guessed the character "+(count+1)+"th time");
 flag=1;
       }else{ 
         count++;
         flag=0;
  }
}
    }}     

        
