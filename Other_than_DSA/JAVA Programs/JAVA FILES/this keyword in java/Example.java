class Box
{
    private int l,b,h;
    public void setDimension(int l, int b, int h)
    
  {this.l=l; this.b=b; this.h=h;}

    

}
public class Example
{
    public static void main(String []args){
    Box b1=new Box();
    b1.setDimension(10,12,23);
    System.out.println("Suman");
    
}}