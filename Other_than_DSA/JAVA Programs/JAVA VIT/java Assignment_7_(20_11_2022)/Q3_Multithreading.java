import java.sql.Timestamp;
import java.time.Instant;

class TimeStamp implements Runnable {
  public void run() {
    try {
      int i = 0;
      while (i < 10) {
        Timestamp instant = Timestamp.from(Instant.now());
        System.out.println("Current TimeStamp = " + instant);
        Thread.sleep(1000);
        i++;
      }

    } catch (Exception e) {
      System.out.println(e);
    }

  }
}

class GreetingMsg implements Runnable {
  public void run() {
    try{

    for (int i = 0; i < 10; i++) {
      System.out.println("Hii...");
      System.out.println("Hello...");
      System.out.println("goodMorning...");
      Thread.sleep(1000);

    }
    }
    catch (Exception e) {
      System.out.println(e);
    }
  }
}

public class Q3_Multithreading {
public static void main(String [] args){
  TimeStamp t = new TimeStamp();
  GreetingMsg g1 = new GreetingMsg();
 
  Thread t1 = new Thread(t);
  Thread t2 = new Thread(g1);
  t1.start();
  t2.start();

}
}
