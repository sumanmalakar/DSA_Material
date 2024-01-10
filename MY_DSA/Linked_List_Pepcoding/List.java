// package Linked_List_Pepcoding;
import java.util.*;

class Node {
  private int data;
  private Node next;

  public Node() {
    this.data = 0;
    this.next = null;
  }

  public Node(int d, Node n) {
    data = d;
    next = n;
  }

  public void setData(int d) {
    data = d;
  }

  public void setNext(Node n) {
    next = n;
  }

  public int getData() {
    return data;
  }

  public Node getNext() {
    return next;
  }

}

class LinkedList {
  private int size;
  private Node start;

  public LinkedList() {
    size = 0;
    start = null;
  }

  public void insertAtFirst(int val) {

    Node n = new Node();
    n.setData(val);
    n.setNext(start);
    start = n;
    size++;

  }

  public void insertAtLast(int val) {
    Node n, t;
    n = new Node();
    n.setData(val);
    t = start;

    // list is empty
    if (t == null) {
      start = n;
    } else {

      // list is not empty
      while (t.getNext() != null) {
        t = t.getNext();
      }
    }

    t.setNext(n);
    size++;

  }

  public void insetAtPos(int val, int pos) {
    if (pos == 1) {
      insertAtFirst(val);
    } else if (pos == size + 1) {
      insertAtLast(val);
    } else if (pos > 1 && pos <= size) {

      Node n, t;
      n = new Node(val, null);
      t = start;

      for (int i = 0; i < pos - 1; i++) {
        t = t.getNext();
        n.setNext(t.getNext());
        t.setNext(n);
        size++;
      }

    } else {
      System.out.println("Insertion not possible at position  " + pos);
    }
  }

  public void deleteAtPos(int pos) {
    if (start == null)
      System.out.println("List is already empty");
    else if (pos < 1 || pos > size)
      System.out.println("Invalid Position");
    else if (pos == 1)
      deleteFirst();
    else if (pos == size)
      deleteLast();
    else {
        Node t,t1;
        t = start;
        for(int i=1; i<pos-1; i++){
          t = t.getNext();
          t1 = t.getNext();
          t.setNext(t1.getNext());
        }
    }

    size--;
  }

  public void deleteLast() {
    if (start == null) {
      System.out.println("List is already Empty");
    } else if (size == 1) {
      start = null;
      size--;
    } else {
      Node t;
      t = start;
      for (int i = 1; i < size - 1; i++) {
        t = t.getNext();
        t.setNext(null);
        size--;
      }
    }
  }

  public void deleteFirst() {
    if (start == null) {
      System.out.println("List is already Empty");
    } else {
      start = start.getNext();
      size--;
    }
  }

  public boolean isEmpty() {
    if (size == 0) {
      return true;
    } else {
      return false;
    }
  }

  // getting the size of the list
  public int getListSize() {
    return size;
  }

  // travers the entire list of linkedList
  public void viewList() {
    Node t;

    if (isEmpty()) {
      System.out.println("List is empty ");
    } else {
      t = start;
      int i = 1;
      while (i <= size) {
        System.out.println(" " + t.getData());

        i++;
      }
    }
  }

}

public class List{
  public static void main(String [] args){
    Scanner sc = new Scanner(System.in);

    LinkedList list = new LinkedList();
   System.out.println("Exit....");

   boolean flag = true;

    while(flag){
      System.out.println("Enter your choice..");
      int choice = sc.nextInt();
      int position, val;
     
      switch(choice){
        case 1:
          System.out.println("Enter value of list item");
           val = sc.nextInt();
          list.insertAtFirst(val);
          break;
        case 2:
          System.out.println("Enter value of list item");
           val = sc.nextInt();
          list.insertAtLast(val);
          break;
        case 3:
        System.out.println("Enter positon");
        position = sc.nextInt();
        System.out.println("Enter value of list item");
         val = sc.nextInt();
        list.insetAtPos(val, position);
        break;
        case 4:
        list.deleteFirst();
        break;
        case 5:
        list.deleteLast();
        break;
        case 6: 
        System.out.println("Enter position");
        position = sc.nextInt();
        list.deleteAtPos(position);
        break;
        case 7:
        list.viewList();
        break;
        case 8:
           flag = false;
           break;
        default:
        System.out.println("Invalid Choice...");
      }



    }

   
  }
}