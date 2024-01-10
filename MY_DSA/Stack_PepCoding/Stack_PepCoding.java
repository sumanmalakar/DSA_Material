// package Stack_PepCoding;
import java.util.*;

public class Stack_PepCoding{
  public static void main(String [] a){
    
    // Importing java
//Stack<Integer> st = new Stack<Integer>();
  Stack<Integer> st = new Stack<>();

  // Insert element to stack
  st.push(10);
  System.out.println(st+" "+" peek -> "+st.peek()+" size -> "+st.size());

  System.out.println(st + " " + " peek -> " + st.peek() + " size -> " +st.size());
  st.push(30);

  System.out.println(st + " " + " peek -> " + st.peek() + " size -> " + st.size());

  st.push(40);
  System.out.println(st + " " + " peek -> " + st.peek() + " size -> " + st.size());

  // peak() and size()
  System.out.println(st + " " + " peek -> " + st.peek() + " size -> " + st.size());

 // Remove element from stack
 st.pop();
 System.out.println(st + " " + " peek -> " + st.peek() + " size -> " + st.size());

 st.pop();
 System.out.println(st + " " + " peek -> " + st.peek() + " size -> " + st.size());
 st.pop();
//  System.out.println(st + " -> " + " peek " + st.peek() + " size " + st.size());

  } 
}