//problem link
//https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1

import java.util.*;

public class Stack_delete_mid_element {
  // Function to delete middle element of a stack.
  public static void deleteMid(Stack<Integer> s, int sizeOfStack) {

    System.out.println("Before delete ");
    System.out.println(s);
    Stack<Integer> temp = new Stack<Integer>();
    int n = s.size();
    int mid = n / 2;

    for (int i = 0; i < mid; i++) {
      int t = s.peek();
      temp.push(t);
      s.pop();
    }
    s.pop();

    while (temp.size() != 0) {
      s.push(temp.peek());
      temp.pop();
    }

    System.out.println("After delete ");
    System.out.println(s);
  }

  public static void main(String [] args){
Stack<Integer> st = new Stack<>();
st.push(20);
st.push(30);
st.push(40);
st.push(50);
st.push(60);

deleteMid(st, st.size());

  }
}
