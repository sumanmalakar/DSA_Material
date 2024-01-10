import java.util.*;

public class Q_4_All_vowels {
  static int count_vowels(String str){
    String brand_New_String = str.toLowerCase();

    int i=0, count = 0;
    while(i<brand_New_String.length()){
      char ch = brand_New_String.charAt(i);
      if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        count++;
      }
      i++;
    }
    return count;
  }
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.println("Enter the statement ");
    String st = sc.nextLine();
 

    sc.close();

    System.out.println("The Number of vowels = " +count_vowels(st));
  }
}
