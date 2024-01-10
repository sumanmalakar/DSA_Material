

import java.util.*;
import java.util.Scanner;

public class Test2 {
  public static void main(String[] args) {
   int name = 19;
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter your age ");
    int s1 = sc.nextInt();

    if(name == s1){

      System.out.println("both name are equal");
    } else {
      System.out.println("Both the name are not equal to each other");
    }

    // String n = s1.toUpperCase();
    // n = s1.substring(1, 3);
    // n = s1.substring(2);
    // System.out.println(n);
  }
}