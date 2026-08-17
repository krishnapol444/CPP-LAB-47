#include<iostream>
using namespace std;
class SavingAccount
{
    private:string accountHolderName;
    int accountNumber;
    double balance;
    double interestRate;
    public:
    SavingAccount(string name,int accNumber,double initialBalance,double rate)
{
    accountHolderName=name;
    accountNumber=accNumber;
    balance=initialBalance;
    interestRate=rate;
}
void deposit(double amount)
{
    if(amount>0)
    {
        balance+=amount;
        cout<<"Deposited:₹"<<amount<<endl;
    }
}
void withdraw(double amount)
{
    if(amount>0 && amount<=balance)
    {
        balance-=amount;
        cout<<"Withdrawn:₹"<<amount<<endl;
    }
    else
    {
        cout<<"Insufficient balance!"<<endl;
    }
}
void applyInterest()
{
    double interest=balance*interestRate/100;
    balance+=interest;
    cout<<"Interest applied:₹"<<interest<<endl;
}
void display()
{
    cout<<"\nAccount Holder: "<<accountHolderName<<endl;
    cout<<"Account Number: "<<accountNumber<<endl;
    cout<<"Balance:₹"<<balance<<endl;
    cout<<"Interest Rate: "<<interestRate<<"%"<<endl;
}
};   
class CheckingAccount
{
    private:string accountHolderName;
    int accountNumber;
    double balance;
    double transactionFee;
    public:
    CheckingAccount(string name,int accNumber,double initialBalance,double fee)
{
    accountHolderName=name;
    accountNumber=accNumber;
    balance=initialBalance;
    transactionFee=fee;
}
void deposit(double amount)
{
    if(amount>0)
    {
        balance+=amount;
        cout<<"Deposited:₹"<<amount<<endl;
    }
}
void withdraw(double amount)
{
    double totalAmount=amount+transactionFee;
    if(totalAmount<=balance)
    {
        balance-=totalAmount;
        cout<<"withdrawn:₹"<<amount<<"(₹"<<transactionFee<<" transaction fee applied)"<<endl;
    }
    else
    {
        cout<<"Insufficient balance for withdrawal+fee!"<<endl;
    }
}
void display()
{
    cout<<"\n[Checking Account]"<<endl;
    cout<<"Account Holder: "<<accountHolderName<<endl;
    cout<<"Account Number: "<<accountNumber<<endl;
    cout<<"Balance:₹"<<balance<<endl;
    cout<<"Transaction Fee:₹"<<transactionFee<<endl;
}
};
int main()
{
    SavingAccount savingAcc("Alice",1001,5000,3.0);
    CheckingAccount checkingAcc("Bob",2001,3000,20.0);
    savingAcc.display();
    savingAcc.deposit(1000);
    savingAcc.withdraw(2000);
    savingAcc.applyInterest();
    savingAcc.display();
    checkingAcc.display();
    checkingAcc.deposit(1500);
    checkingAcc.withdraw(1000);
    checkingAcc.display();
    return 0;
}