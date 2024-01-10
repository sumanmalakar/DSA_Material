package Stack_PepCoding;
import java.util.*;

public class Duplicate_Bracket {
  public static void main(String [] args){
    String str = "(a+b)+((a+b))";

 Stack<Character>st = new Stack<>();

 for(int i=0; i<str.length(); i++){
   char ch = str.charAt(i);
   if(ch==')'){
     if(st.peek()=='('){
       System.out.println("true");
     }else{
       while(st.peek()!=')'){
         st.pop();
       }
       st.pop();
     }

   }else{
     st.push(ch);
   }
 }

System.out.println("false");
    
  }
}
