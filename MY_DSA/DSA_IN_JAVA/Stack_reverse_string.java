// problem link
// https://practice.geeksforgeeks.org/problems/reverse-a-string-using-stack/0

import java.util.*;

public class Stack_reverse_string{

  public static String reverse(String S) {
    Stack<Character> st = new Stack<>();

    for (int i = 0; i < S.length(); i++) {
      char ch = S.charAt(i);
      st.push(ch);
    }

    String str = "";
    while (st.size() != 0) {
      char c = st.peek();
      str = str + c;
      st.pop();
    }

    return str;
  }
  public static void main(String [] args){
    String str = "SUMAN";
    System.out.println(reverse(str));
  }
}