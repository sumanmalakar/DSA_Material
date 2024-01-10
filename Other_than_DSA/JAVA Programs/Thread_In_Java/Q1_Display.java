class Save {
  int i;

  public Save(int i) {
    this.i = i;
  }

  public void increment() {
    i++;
    System.out.println("value incremented by 1 and saved ");
  }

  public void display() {
    System.out.println("Current value is " + i);
  }
}

class Increment implements Runnable {
  private Save s;
  public Increment(int inc) {
   s = new Save(inc);
  }

  public void run() {
    try {
      int j = 0;
      while (j < 10) {
        s.display();
        Thread.sleep(750);
        s.increment();
        j++;

      }
    } catch (Exception e) {
      System.out.println(e);
    }
  }

  
}

public class Q1_Display {
  public static void main(String [] args) {
    Increment i;
    i = new Increment(10);
    Thread t1 = new Thread(i);
    t1.start();

  }
}
