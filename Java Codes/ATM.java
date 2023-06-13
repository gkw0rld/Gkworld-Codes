import java.util.Scanner;
class Account
{
    private int bal;
    public Account(int bal)
    {
        this.bal=bal;
    }
    public boolean isSufficientBalance(int w)
    {
        if(bal>w)
          return(true);
        else
          return(false);  
    }
    public void withdraw(int amt)
    {
        bal=bal-amt;
        System.out.println("withdrawl amount: "+amt);
        System.out.println("Your current balance is : "+bal);

    }
}

class customer implements Runnable
{
    private Account account;
    public customer(Account account)
    {this.account=account;}
    public void run()
    {
        Scanner kb=new Scanner(System.in);
        System.out.println("Enter amount to withdraw");
        int amt=kb.nextInt();
        synchronized(account){
        if(account.isSufficientBalance(amt))
        {
            account.withdraw(amt);
        }
        else 
        System.out.println("Insufficient Balance");}
    }
}
public class ATM 
{
    public static void main(String args[])
    {
        Account a1=new Account(1000);
        customer c1=new customer(a1);
        customer c2=new customer(a1);
        Thread t1=new Thread(c1);
        Thread t2=new Thread(c2);
        t1.start();
        t2.start();
    }
}
