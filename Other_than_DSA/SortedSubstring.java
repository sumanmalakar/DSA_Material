import java.util.Scanner;

class SortedSubstring {

   

    public static String CaseChange(String s) {
        String s1 = "";
        for (int i = 0; i < s.length(); i++) {
            char a = s.charAt(i);
            if (a == Character.toLowerCase(a))
                s1 += Character.toUpperCase(a);
            else
                s1 += Character.toLowerCase(a);
        }
        return s1;
    }

    public static boolean HasDigit(String s) {
        boolean bool = false;
        for (int i = 0; i < s.length(); i++) {
            if (Character.isDigit(s.charAt(i))) {
                bool = true;
            }
        }
        return bool;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a String");
        String input = sc.next(); // suman
             
        
        if (HasDigit(input))
            System.out.println("Digit is present");
        else{
           System.out.println(CaseChange(input));
            System.out.println("Digit is not present");
        }
    }
}