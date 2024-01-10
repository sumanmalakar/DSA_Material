class MyThr1 extends Thread{
  public MyThr1(String name){
    super(name);
  }

  public void run(){
    int i = 34;
    System.out.println("Thank you"+ this.getName());
  }
}


public class Thread_Priority{
  public static void main(String [] args){
   
    MyThr1 t1 = new MyThr1("suman 1");
    MyThr1 t2 = new MyThr1("aman 2");
    MyThr1 t3 = new MyThr1("ram 3");
    MyThr1 t4 = new MyThr1("rahul 4");
    MyThr1 t5 = new MyThr1("rajendra 5");

    t5.setPriority(Thread.MAX_PRIORITY);
    t1.setPriority(Thread.MIN_PRIORITY);
    
    t1.start(); 
    t2.start();
    t3.start();
    t4.start();
    t5.start();


  }
}