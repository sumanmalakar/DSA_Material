abstract class Shape{
  abstract float area(Float x, Float y);
  abstract float square(Float x);
}

class Rect extends Shape{
  float area(Float x, Float y){
    return x*y;
  }

  float square(Float x){
    return x*x;
  }
}

public class Abstract2 {
public static void main(String [] args){
  Shape obj;
  obj = new Rect();

  System.out.println("Area is = "+obj.area(10f, 20f));
  System.out.println("Square is = "+obj.square(5f));


}

  

}
