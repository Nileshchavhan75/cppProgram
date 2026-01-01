abstract class BankAccount{
    String accountNumber;
    int balance;
    
    BankAccount(String accountNumber, int balance){
        this.accountNumber = accountNumber;
        this.balance = balance;
        
    }
     abstract int calculateInterest();
     public void showDetails() {
        System.out.println("Account Number: "+accountNumber);
        System.out.println("Balance: "+balance);
    }
}

class SavingsAccount extends BankAccount{
    int interestRate;

    SavingsAccount(String accountNumber, int balance, int interestRate){
        super(accountNumber, balance);
        this.interestRate = interestRate;
    }

    int calculateInterest(){
        return interestRate;
    }
    public void showInterest(){
        System.out.println("Interrest: "+calculateInterest());
    }
    
}
public class AbstractBankAccount{
    public static void main(String[] args) {
        SavingsAccount a = new SavingsAccount("12451", 10000, 500);
        a.showDetails();
        a.showInterest();
    }
}