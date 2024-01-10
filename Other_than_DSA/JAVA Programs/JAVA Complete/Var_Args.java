public class Var_Args {

  static int sum(int ...arr){
    int result = 0;
    for(int element : arr){
      result += element;
    }

    return result;
  }
  public static void main(String [] args){
    int call = sum(5,6,8);
    System.out.println(call);
  }
}
