class MyThreadRunnable1 implements Runnable {
  public void run() {
    System.out.println("I'm a thread 1");
  }
}

class MyThreadRunnable2 implements Runnable {
  public void run() {
    System.out.println("I'm a thread 2");
  }
}

public class Thread_by_Runnable_Interface {
  public static void main(String[] a) {
    MyThreadRunnable1 bullet1 = new MyThreadRunnable1();
    Thread gun1 = new Thread(bullet1);
    MyThreadRunnable2 bullet2 = new MyThreadRunnable2();
    Thread gun2 = new Thread(bullet2);

    gun1.start();
    gun2.start();

  }
}
