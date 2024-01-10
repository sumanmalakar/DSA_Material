public class Demo
{
private int length;
public Demo()
{
    System.out.println("Suman Malakar");
}
public void setlength(int l)
{ length=l;} 
public void getlength()
{
    return(length);
}
public static void main(String []args){
Demo obj=new Demo();
obj.setlength(13);
System.out.println("suman" +obj.getlength());
}
}