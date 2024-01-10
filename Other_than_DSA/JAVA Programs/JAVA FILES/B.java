class A
{
public void methodA()
{

System.out.println("j");
}}
class B extends A
{
public void methodB()
{ System.out.println("ram");
}
public static void main(String[]args)
{
B obj=new B();
obj.methodA();
obj.methodB();
}
}