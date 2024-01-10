public class associativity_of_operator {
public static void main(String [] args){

  // Precendence & Associativity
  int a = 6*5 - 34/2;
  /*
   left to right associativity
  = 30 - 34/2
  = 30 - 17
  = 13

  */
  System.out.println(a);

  int b = 60/5 - 34*2;
  
  /* 
    = 12 - 34*2
    = 12 - 68
    = -56
  */ 
  System.out.println(b);

}
}
