class EKClass{
  int a;

  EKClass(int v){
    a = v;
  }

  int geta(){
    return a;
  }

  public int returnone(){
    return 1;
  }


}

public class This_Super_Keyword {
  public static void main(String [] args){
    EKClass a = new EKClass(5);
    System.out.println(a.geta());

  }
}
