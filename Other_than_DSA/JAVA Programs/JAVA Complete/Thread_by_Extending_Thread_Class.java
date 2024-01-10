class MyThread1 extends Thread{




  @Override
  public void run(){ 
    int i=0;
    while(i!=5){
      
      System.out.println(i+ " My thread in Running");
      System.out.println("I am happy");
      i++;
      
    }
    eat();
  }

  public void eat() {
    System.out.println("Hello we are eating");
  }
}



class MyThread2 extends Thread {

  @Override
  public void run() {
    int j=0;
    while (j!=6) {

      System.out.println(j+ " Thread is good");
      System.out.println("I am happy");

      j++;

    }
  }
}

public class Thread_by_Extending_Thread_Class{
  public static void main(String [] args){
    MyThread1 t1  = new MyThread1();
    MyThread2 t2 = new MyThread2();

    t1.start();
    t2.start();

  }
}