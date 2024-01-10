import java.util.Scanner;

class Book {

  String[] bookName = { "The Da Vinci Code", "The Lord of the Rings", "A Tale of Two Citie" };
  int[] noOfBooks = { 3, 6, 7 };
  int [] BooksId = {101, 102, 103};
  int sub = 1;
  boolean borrowed;
  String userInput;
  int userInput1;
  Scanner sc = new Scanner(System.in);

  void libraryInformation() {
    System.out.println("Library hours:");
    System.out.println("Libraries are open daily from 9am to 5pm.");
    System.out.println("Library addresses");
    System.out.println("10 Main St.");
    System.out.println("228 Liberty St");
  }

  void availableBooks() {
    System.out.println("The available Books and Number of books: & Book Code");
    for (int i = 0; i < bookName.length; i++) {
      System.out.println(bookName[i] + " :" + noOfBooks[i] +"  "+ BooksId[i]);
    }

  }

  void borrowed() {
    System.out.println("Do you want to borrow book:");
    System.out.println("Type Yes or No ");
    userInput = sc.next();
    if (userInput.equalsIgnoreCase("Yes")) {
      System.out.println("Which book you want to take: ");
      for (int i = 0; i < bookName.length; i++) {
        System.out.println(bookName[i] + " : " + noOfBooks[i]+ "  : "+BooksId[i]);
      }

      System.out.println("Enter book_Id");
      userInput1 = sc.nextInt();
      
      for (int i = 0; i < noOfBooks.length; i++) {
    

        if(BooksId[i] == userInput1){
          

          if (noOfBooks[i] == 0) {
            System.out.println("Sorry, this book is already borrowed by Someone else.");
          } else {
            noOfBooks[i] = noOfBooks[i] - sub;
            System.out.print("Remaining copies :  " + noOfBooks[i] );
          }

        }

      }

    } else {
      System.out.println("Thank You for Visiting");

    }

  }
}

public class  Q_6_libraries {
  public static void main(String[] args) {
    Book b = new Book();
    b.libraryInformation();
    b.availableBooks();
    b.borrowed();

  }
}