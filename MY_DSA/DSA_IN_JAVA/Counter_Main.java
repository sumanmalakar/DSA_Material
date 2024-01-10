class Counter {
  void increase(int i){
    i++;
    System.out.println(i);
  }
}

class MyThread1 extends Thread {
  Counter t;

  MyThread1(Counter t) {
    this.t = t;
  }

  public void run() {
    t.increase(5);
  }

}

class MyThread2 extends Thread {
  Counter t;

  MyThread2(Counter t) {
    this.t = t;
  }

  public void run() {
    t.increase(5);
  }
}

public class Counter_Main  {
  public static void main(String args[]) {
    Counter obj = new Counter();// only one object
    MyThread1 t1 = new MyThread1(obj);
    MyThread2 t2 = new MyThread2(obj);
    t1.start();
    t2.start();
  }
}