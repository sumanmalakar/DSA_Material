class MyThread extends Thread{
  public MyThread(String name){
    super(name);
  }

  public void run(){
    int i = 0;
    while(i<10){
      System.out.println("I am a  thread");
      i++;
    }
  }
}

public class Thread_Constructor {
  public static void main(String [] args){
    MyThread t1 = new MyThread("Suman");
    t1.start();

    MyThread t2 = new MyThread("Ram");
    t2.start();

   
    System.out.println("The id of the thread t is "+ t1.getId());
    System.out.println("The id of the thread t is " + t1.getName());
    System.out.println("The id of the thread t is " + t2.getId());
    System.out.println("The id of the thread t is " + t2.getName());
  } 
}
