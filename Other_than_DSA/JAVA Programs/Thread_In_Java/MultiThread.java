import java.util.Date;
class TimeStamps implements Runnable
{
  public void run()
  {
    try
    {
        for(int i=0;i<10;i++)
        {
        Date d=new Date();
        System.out.println("The time is "+d.toString());
        Thread.sleep(1000);
        }
    }
  catch(Exception e)
  {
    System.out.println(e);
  }
 }
}
class Message implements Runnable
{
    public void run()
    {
        try
        {
            for(int i=0;i<10;i++)
            {
            System.out.println((i+1)+" Hello");
            Thread.sleep(1000);
            }
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}
class MultiThread
{
    public static void main(String [] args)
    {
        TimeStamps t=new TimeStamps();
        Message m=new Message();
        Thread t1=new Thread(t);
        Thread t2=new Thread(m);
        t1.start();
        t2.start();
    }
}
