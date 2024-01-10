import java.util.Scanner;

public class Q_2_Change_Case {
 static void changeCase(String str){
   String brandNew;

  System.out.println("Given String = "+str);
  char ch = str.charAt(0);
  if(ch>='a' && ch<='z'){
   brandNew =  str.toUpperCase();
  }
  else{
    brandNew =  str.toLowerCase();
  }

  System.out.println("Updated String = "+brandNew);
 }

 public static void main(String [] s){
   Scanner sc  = new Scanner(System.in);
   System.out.println("Enter any String ");
   String name = sc.nextLine();

   changeCase(name);
 }
}
