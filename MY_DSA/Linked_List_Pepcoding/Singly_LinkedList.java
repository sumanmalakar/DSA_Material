// package Linked_List_Pepcoding;

class Node { 
  int data;
  Node next;
}

class LinkedList {
  Node head;
  Node tail;
  int size;

  // insert At Tail (last)
  public void addLast(int val) {
    Node temp = new Node(); 
    temp.data = val;
    temp.next = null;

    if (size == 0) {
      head = tail = temp;
    } else {
      tail.next = temp;
      tail = temp;
    }

    size++;
  }

  // print the values of the list;
  public void print() {
    Node temp = new Node();
    temp = head;

    // Node temp = head;
    // int i=1;

    while (temp != null) {
      System.out.print(temp.data + " ");
      temp = temp.next;
    }
    System.out.println();

    // while(i<=size){
    // System.out.print(temp.data+ " ");
    // temp = temp.next;
    // i++;
    // }vvccc

  }

  // return the size of list
  public int size() {
    return size;
  }

  // get first element
  public int getFirst() {
    // if (head == null) {
    if (size == 0) {
      System.out.println("List is empty");
      return -1;
    }
    return head.data;

  }

  // get last element
  public int getLast() {
    // if (tail == null) {
    if (size == 0) {
      System.out.println("List is empty");
      return -1;
    }
    return tail.data;
  }

  // get at Index Value
  public int getAt(int index) {
    if (size == 0) {
      System.out.println("List is empty");
      return -1;
    } else if (index < 0 || index > size) {
      System.out.println("Invalid Arguments..");
      return -1;
    } else {

      Node temp = head;
      int i = 1;
      while (i < index) {
        temp = temp.next;
        i++;
      }

      return temp.data;
    }
  }

  // Add first in linkedList
  public void addFirst(int val) {
    Node temp = new Node();
    temp.data = val;
    temp.next = null;

    if (size == 0) {
      head = tail = temp;

    } else {
      temp.next = head;
      head = temp;
    }

    size++;
  }

  // remove first element from the list
  public void removeFirst() {

    if (head == null) {
      System.out.println("List is empty");
      return;
    } else if (size == 1) {
      head = tail = null;
    } else {
      head = head.next;
    }

    size--;
  }

  // remove last element from the list
  public void removeLast() {

    Node prev = head;

    if (size == 0) {
      System.out.println("List is empty");
      return;
    } else if (size == 1) {
      head = tail = null;
    } else {

      // remove last ke phle second last tak phuch
      int i = 1;
      while (i < size - 1) {
        prev = prev.next;
        i++;
      }

      prev.next = null;
      tail = prev;

    }

    size--;
  }

  // This function return a index node
  private Node getNodeAt(int idx) {
    Node temp = head;
    for (int i = 0; i < idx; i++) {
      temp = temp.next;
    }

    return temp;
  }

  // reverse the linkedList Data Iteratively
  public void reverseDI() {
  int s = 0; 
  int e = size - 1;

  while(s<e){

    Node left = getNodeAt(s);
    Node right = getNodeAt(e);

    int temp = left.data;
    left.data = right.data;
    right.data = temp;

    s++;
    e--;

  }
  }


  // reverse the LinkedList Pointer Iteratively
  public void reversePI(){
    Node prev = null;
    Node curr = head;

    while(curr!=null){
      Node store = curr.next;
      curr.next = prev;
      prev = curr;
      curr = store;
    }

    // swaping the head & tail
    Node temp = head;
    head = tail;
    tail = temp;
  }


  // Kth Node from end
  public int kth_From_List(int k){
    Node slow = head;
    Node fast = head;

    // fast ko k, tak aage bda
    for(int i=0; i<k; i++){
      fast = fast.next;

    }

    while(fast!= null){
      slow = slow.next;
      fast = fast.next;
    }

    return slow.data;
  }

}

public class Singly_LinkedList {
  public static void main(String[] args) {

    LinkedList list = new LinkedList();

    // insert at last
    // list.addFirst(5);
    // list.addFirst(10);
    // list.addFirst(20);
    list.addLast(30);
    list.addLast(40);
    list.addLast(50);
    list.addFirst(20);
    list.addFirst(10);
    list.addLast(70);
    
    list.print();
    
    // remove last element
    list.removeLast();
    list.print();

    // remove first element
    list.removeFirst();
    list.print();


    // reverse Pointer Iteratively
    // list.reversePI();


    // //kth from end
    // System.out.println("Kth from end = "+list.kth_From_List(2));
    // System.out.println("Kth from end = " + list.kth_From_List(3));

    // list.print();

    // printing the list
//  System.out.println("Befor reverse ....");
//  list.print();


//  // reverse function call
//  list.reverseDI();
//  System.out.println("After reverse....");
//  list.print();


    // print the list
    // list.print();
    // size of list
    // System.out.println("\nSizeOfList = " + list.size());

    // get first element
    // int fisrtElement = list.getFirst();
    // System.out.println("first element = " + fisrtElement);

    // // get last element
    // int lastElement = list.getLast();
    // System.out.println("last element = " + lastElement);

    // // get specific index element
    // int index = list.getAt(1);
    // System.out.println("Value at index = " + index);

    // list.removeFirst();
    // print the list
    // list.print();
    // size of list
    // System.out.println("\nSizeOfList = " + list.size());

    // adding the value at first
    // list.addFirst(10);

    // print the lis
    // System.out.println("before remove...");
    // list.print();

    // remove last element
    // list.removeLast();

    // print the list
    // System.out.println("\nAfter remove...");
    // list.print();


    // print the list
    // System.out.println("\nAfter remove...");
    // list.print();

    // reverse Linkelist data iterative method
    // list.reverseDI();

    // list.print();
  }
}
