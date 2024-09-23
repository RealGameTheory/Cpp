
#include <iostream>
using namespace std;
class BankAccount{
private:
    int accountNumber;
    string accountHolderName;
    double balance;
public:
    BankAccount(){ //default constructor
        accountNumber=0;
        accountHolderName=" ";
        balance=0;
    }
    BankAccount(int _accno, string accname, double bal){ // parameterized constructor
        accountNumber=_accno;
        accountHolderName=accname;
        balance=bal;
    }
    void deposit(double dep){ // This function is used to deposit money into the account
        balance+=dep;
    }
    void withdraw(double draw){ // This function is used to withdraw money from the account
        if (balance<draw){
            cout<<"error"<<endl;
        }
        else{
        balance-=draw;
        }
    }
    int calculateinterest(double inter,double time1){ // This function is used to caclulate the interest
        double amount;
        amount=(inter*balance*time1)/100;
        balance+=amount;
        return balance;
    }
    void display(){ // This function is used to display the details about the bank account 
        cout<<"Account number: "<<accountNumber<<endl;
        cout<<"Holder name: "<<accountHolderName<<endl;
        cout<<"balance : "<<balance<<endl;
        
    }
    
};
int main(){
    BankAccount b0;//initailizing default constructor
    BankAccount b1(1,"John",10000);//intializing one customer's bank account
    int choice;//This is for mnavigating in the menu
    double draw,dep,inter,time1;//draw if for witdrawin, dep is for deposting money into the account, inter is the interest rate and time is the tenure of the interest rate
    string choice2="Y";
    while (choice2=="Y"||"y")// for a recusive menu
    {
        cout << "Choose 1.)deposit 2.)withdraw 3.)interest " << endl;
        cin >> choice;
        if (choice == 1)
        { // This is the bank menu
            cout << "enter Deposit amount: " << endl;
            cin >> dep;
            b1.deposit(dep); // calls the depsoit function
            b1.display();
        }
        else if (choice == 2)
        {
            cout << "enter withdraw amount: " << endl;
            cin >> draw;
            b1.withdraw(draw); // this calls the withdraw function
            b1.display();
        }
        else if (choice == 3)
        {
            cout << "enter interest rate: " << endl;
            cin >> inter;
            cout << "enter tenure: " << endl;
            cin >> time1;
            b1.calculateinterest(inter, time1); // calls the calculate interest function
            b1.display();
        }
        else
        {
            cout << "error" << endl; // default responses if invalid option is selected
        }
        cout<<"Want to use the bank's services again?(Y/N)";
        cin>>choice2;
    }
    

    return 0;
}