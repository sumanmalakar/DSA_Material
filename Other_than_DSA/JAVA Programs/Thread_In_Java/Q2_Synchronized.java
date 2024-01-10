


class Save {
  int i;

  public Save(int i) {
    this.i = i;
  }

  public void increment() {
    i++;
  }

  public void display() {
    System.out.println(i);
  }
}

class Increment implements Runnable {
  private Save s;

  public Increment(int inc) {
    s = new Save(inc);
  }

  public void run() {

    int j = 0;
    synchronized(s){
    while (j < 10) {
      s.display();
      s.increment();
      j++;

    }
  }}
}

public class Q2_Synchronized {
  public static void main(String[] args) {
    Increment i;
    i = new Increment(10);
    Thread t1 = new Thread(i);
    t1.start();

  }
}
