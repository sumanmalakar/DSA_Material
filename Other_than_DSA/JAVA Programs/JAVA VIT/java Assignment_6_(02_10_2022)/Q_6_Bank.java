import java.util.*;
class Account{
 long AccountNumber [] = {128338,7393739,392029,38393030} ;
  String Owner;
  String AccountType;
  double Balance;
  Scanner sc = new Scanner(System.in);

  public void input(){
    System.out.println("Enter AccountType...");
    AccountType = sc.next();
System.out.println("Enter Owner...");
Owner = sc.next();
System.out.println("Enter the Amount for first time...");
Balance = sc.nextDouble();
  }

public void show(){
  System.out.println("Account Number "+AccountNumber[0]);
  System.out.println("Owner = "+Owner);
  System.out.println("AccountType = "+AccountType);
  System.out.println("Balance = "+Balance);
}

public void currentBalance(){
  System.out.println("Enter AccountName..");
long num  = sc.nextLong();
int i;
for(i=0; i<AccountNumber.length; i++){
  if(num==AccountNumber[i]){
    System.out.println("Balance = "+Balance);
    break;
  }
}
if(i==AccountNumber.length){
  System.out.println("Account_Number Not match..");
}
}

public void Withdraw(){
  System.out.println("Enter AccountName..");
  long num = sc.nextLong();
  System.out.println("Enter the Amount ..");
  double amount = sc.nextDouble();
  int i;
  for (i = 0; i < AccountNumber.length; i++) {
    if (num == AccountNumber[i]) {
     if(amount>Balance){
       System.out.println("Insufficient Balace");
     }else{
       System.out.println("Withdraw SuccessFull..");
       Balance = Balance - amount;
       System.out.println("Net Balance = " + Balance);
     }

     break;
    }
  }
  if (i == AccountNumber.length) {
    System.out.println("Account_Number Not match..");
  }
}

public void deposite(){
  System.out.println("Enter AccountName..");
  long num = sc.nextLong();
  System.out.println("Enter the Amount ..");
  double amount = sc.nextDouble();
  int i;
  for (i = 0; i < AccountNumber.length; i++) {
    if (num == AccountNumber[i]) {
      Balance = Balance + amount;
    System.out.println("Depositing is successFull ");
    System.out.println("Net Balance = "+Balance);
      break;
    }
  }
  if (i == AccountNumber.length) {
    System.out.println("Account_Number Not match..");
  }
}


}

public class Q_6_Bank {
  public static void main(String [] args){
    Account a = new Account();
    a.input();
    a.show();
    a.Withdraw();
    a.deposite();
  }
}
