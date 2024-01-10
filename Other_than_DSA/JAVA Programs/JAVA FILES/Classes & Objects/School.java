class A
{
private int Rollno;
private String Name;
public void setRollno(int r)
{Rollno=r;}
public void setName(String n)
{Name=n;}
public int getROllno()
{return(Rollno);}
public String getName()
{return(Name);}

}
public class School
{
    public static void main(String []args)
    {
        A s1=new A();
        s1.setRollno(100);
        s1.setName("Sumanmalakar");
        System.out.println("roll no:" +s1.getROllno());
        System.out.println("name:" +s1.getName());
    }
}