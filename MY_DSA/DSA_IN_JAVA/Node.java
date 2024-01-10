import java.util.*;

class Node {
  int data;
  Node next = null, head = null, tail = null;
  int size = 0;

  Node(int value) {
    data = value;
    next = null;
  }

  Node() {

  }

  void insert(int d) {
    Node new_node = new Node(d);
    if (head == null) {
      head = new_node;
      tail = new_node;
    } else {
      tail.next = new_node;
      tail = new_node;
    }

    size++;
  }

  // print the values of the list;
  public void print() {
    Node temp = new Node();                            
    temp = head;
    while (temp != null) {
      System.out.print(temp.data + " ");
      temp = temp.next;
    }
    System.out.println();

  }

  // delete from head
  void delete(){
    if(head == null || head.next == null){
      System.out.println("List is empty");
    }else{
      head = head.next;
    }

    size--;
  }

  // delete from tail

  public static void main(String[] agrs) {
    Node m = new Node(10);
    Scanner sc = new Scanner(System.in);

    System.out.println("Enter a new node");
    int n = sc.nextInt();
    while (n != -1) {
      m.insert(n);
      System.out.println("Enter a new node");
      n = sc.nextInt();
    }

    m.print();

  }

}
