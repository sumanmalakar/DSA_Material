import java.util.Scanner;
class Saves 
{
  static int n;
  Saves(int i)
  {
    n=i;
  }
  static void increment()
  {
    n++;
    System.out.println("n value incremented by 1 and saved ");
  }
  static void display()
  {
    System.out.println("Displaying n value is "+n);
  }

}
class Increment implements Runnable
{
    public void run()
    {
        try
        {
         for(int i=0;i<5;i++)
         {
          Saves.increment();
          Thread.sleep(750);
         } 
        } 
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}
class Display implements Runnable
{
    synchronized public void run()
    {
    try 
    {
        for(int i=0;i<5;i++)
        {
         Saves.display();
         Thread.sleep(1000);
        }
    }
    catch (Exception e)
     {
        System.out.println(e);
    }
    }
}
class SyncNumber
{
  public static void main(String [] args)
  {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter a number ");
    int n=sc.nextInt();
    Saves s=new Saves(n);
    Increment i=new Increment();
    Display d=new Display();
    Thread t1=new Thread(i);
    Thread t2=new Thread(d);
    t1.setPriority(Thread.NORM_PRIORITY);
    t2.setPriority(Thread.MIN_PRIORITY);
    t1.start();
    t2.start();
  }
}

