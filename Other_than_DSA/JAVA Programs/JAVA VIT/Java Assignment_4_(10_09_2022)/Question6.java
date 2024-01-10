import java.util.Scanner;

class Sum {
    String books[] = { "A", "B", "C", "D", "E" };
}

class Book extends Sum {
    Scanner sc = new Scanner(System.in);

    void showBooks() {
        System.out.println("CURRENTLY AVILABLE BOOKS:");
        for (String i : books) {
            System.out.println(i);
        }
        System.out.println();
    }

    void borrow() {
        System.out.print("SELECT THE BOOK TO BORROW: ");
        int n = sc.nextInt();

        for (int i = 0; i < books.length; i++) {
            if ((n - 1) == i) {
                books[i] = "Out of Stock";
            }
        }
        System.out.println();
    }

    void deposit() {
        System.out.print("ENTER THE BOOK TO DEPOSIT: ");
        String bookDep = sc.next();

        for (int i = 0; i < books.length; i++) {
            if (books[i] == "Out of Stock") {
                books[i] = bookDep;
                break;
            }
        }
        System.out.println();
    }
}

public class Question6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        Book b = new Book();

        while (true) {
            b.showBooks();

            System.out.println("PRESS 1 TO DEPOSIT\n 2 TO BORROW\n 0 TO EXIT");
            int choice = sc.nextInt();

            if (choice == 1) {
                b.deposit();
            }

            else if (choice == 2) {
                b.borrow();
            }

            else if (choice == 0) {
                break;
            }
        }

        sc.close();
    }
}
