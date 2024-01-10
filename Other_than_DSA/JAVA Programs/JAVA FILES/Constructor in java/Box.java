public class Box
{
private int l,b,h;
public Box()
{
    l=10; b=3; h=4;

}
public Box(int L, int B, int H)
{l=L; b=B; h=H;}

public static void main(String []args)
{Box b1=new Box();
Box b2=new Box(12,23,56);}
}