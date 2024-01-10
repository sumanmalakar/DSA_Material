
public class Rectangle {

  int l,b;

  Rectangle(int l, int b){
    this.l = l;
    this.b = b;
  }

  public int result(){
    return l*b;
  }
 

  public static void main(String[] args) {
     Rectangle r;
     r =  new Rectangle(5, 6);
     System.out.println(r.result());
  }
}
