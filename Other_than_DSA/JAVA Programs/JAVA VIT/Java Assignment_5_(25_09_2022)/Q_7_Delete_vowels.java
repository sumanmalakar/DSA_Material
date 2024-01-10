import java.util.*;

public class Q_7_Delete_vowels {
  static void delete_Vowels() {
    Scanner sc = new Scanner(System.in);
   String brand_New_String = "";
    System.out.println("Enter the Statement...");
    String str = sc.nextLine();

    int i=0; 
    while(i<str.length()){
      char ch = str.charAt(i);
      if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
        brand_New_String = brand_New_String + ch;
      }
      i++;
    }

    System.out.println(brand_New_String);

  }

  public static void main(String[] args) {
delete_Vowels();

  }
}