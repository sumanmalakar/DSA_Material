import java.util.*;

class Q_1_Palindrome {

 static boolean isPalindrom(String str){
   int s = 0;
   int e = str.length() - 1;

   while (s <= e) {
     if (str.charAt(s) != str.charAt(e)) {
          return false;
     }

     s++;
     e--;

    }

    return true;

   }


  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
 
    System.out.println("Enter any string ");
     String name= sc.nextLine();

     if(isPalindrom(name)){
       System.out.println("String is Palindrome ");
     }else{
       System.out.println("String is not Palindrome ");
     }

   


  }

}