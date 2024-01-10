import java.util.*;
import java.util.Scanner;
public class Q_2_Book {
   
  String bookName;
  int bookNumber;
  String author;
  String publisher;
  double price;
  int no_of_copy_issued;

  void initil_value(){
  Scanner sc = new Scanner(System.in);

  System.out.println("Enter bookName ");
  this.bookName = sc.nextLine();

  System.out.println("Enter author name ");
  this.author = sc.nextLine();

  System.out.println("Enter bookNumber ");
  this.bookNumber = sc.nextInt();

  System.out.println("Enter book pulisher");
  this.publisher = sc.next();

  System.out.println("Enter book price ");
  this.price = sc.nextDouble();

  System.out.println("Enter Number of copy issued ");
  this.no_of_copy_issued = sc.nextInt();

  sc.close();

  }

  void issue_book(int bookNumber, String bookName){

    if((bookNumber == this.bookNumber) && (bookName.equals(this.bookName))){
      System.out.println("your book issued successfully!");
    }else{
      System.out.println("Book is Not available");
    }
     
  }


  void return_book(int bookNumber, String bookName) {

    if ((bookNumber == this.bookNumber) && (bookName.equals(this.bookName))) {
      System.out.println("your book is return successfully!");
    } else {
      System.out.println("BookNumber and BookName is not match");
    }

  }

  void book_info(){
    

    System.out.println("bookNumber "+ this.bookNumber);
    System.out.println("bookName " + this.bookName);
    System.out.println("book author" + this.author);
    System.out.println("book publisher " + this.publisher);
    System.out.println("price " + this.price);
    System.out.println("no of copy issued " + this.no_of_copy_issued);
  }
   
  public static void main(String[] args) {
    Q_2_Book b = new Q_2_Book();

    b.initil_value();
    b.book_info();
    b.issue_book(123, "suman");
    b.return_book(123, "suman");
  }
}
