public class Method {
static void tailJoke(){
  System.out.println("I invented a new word!");
}

  static int logic(int x, int y){

    // Method call using object creation
  // int logic(int x, int y) {
    int z;
    if(x>y){
      z = x+y;
    }else{
      z = (x+y) + 5;
    }

    return z;
  }

  public static void main(String [] args){
    Method m = new Method();
    tailJoke();
    System.out.println(logic(5,10));
    // System.out.println(m.logic(5, 10));
  }

}
