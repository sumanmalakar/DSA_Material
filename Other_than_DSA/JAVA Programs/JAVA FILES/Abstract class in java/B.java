abstract class A
{
int a;
public void show()
{

System.out.println("Suman");
}
abstract void set(int z);
}
class B extends A
{
public void set (int x)
{a=x;}
public static void main(String []args)
{
B obj=new B();
obj.set(109);
obj.show();
}
}