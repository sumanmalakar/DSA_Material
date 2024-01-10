class A {
    public void f1(int x)
    {  
        System.out.println("Suman malakar");
      }
}
class B extends A
{
public void f1(int x, int y)
{   
System.out.println("SUMAN Malakar");
 }

}
public class Example
{
    public static void main(String []args){
   B obj=new B();
   obj.f1(5); 
   obj.f1(2,5);
    }
}