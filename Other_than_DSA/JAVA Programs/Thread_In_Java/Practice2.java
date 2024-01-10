// Add a sleep method in welcome thread of question1 to display its execution for 200ms

class Practice13 extends Thread {
  public void run() {
    int i = 0;
    while (i < 5) {
      System.out.println("Good Morning");
      i++;
    }
  }
}

class Practice13b extends Thread {
  public void run() {
    int i = 0;
    while (i < 5) {

      try{
        Thread.sleep(200);
      }catch (Exception e){
        System.out.println(e);
      }
      System.out.println("Welcome");
      i++;
    }
  }
}


public class Practice2 {
    public static void main(String [] args){
    Practice13 p1 = new Practice13();
    Practice13b p2 = new Practice13b();

    p1.start();
    p2.start();
  }
}
