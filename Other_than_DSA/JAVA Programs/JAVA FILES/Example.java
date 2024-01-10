class Box
{
private int length,breath,height;
public void setDimension(int l, int b, int h)
{length=l;breath=b;height=h;}
public void showDimension()
{
	
System.out.println( " L " = +length);	
System.out.println( " B " = +breath);
System.out.println( " H " = +height);

}
}
class Example
{
public static void main()

{ Box smallBox = new Box();
smallBox.setDimension(12,10,5);
smallBox.showDimension();
smallBox = newBox();
smallBox.showDimension();


}}