
// Write a program to print "good morning" and "Welcome " continously on the screen in java using Threads

class Practice13 extends Thread{
 public void run(){
   int i=0;
   while(i<5){
     System.out.println("Good Morning");
     i++;
   }
  }
}

class Practice13b extends Thread {
  public void run() {
    int i = 0;
    while (i < 5) {
      System.out.println("Welcome");
      i++;
    }
  }
}

public class Practice1 {
  public static void main(String [] args){
    Practice13 p1 = new Practice13();
    Practice13b p2 = new Practice13b();

    p1.start();
    p2.start();
  }
}
