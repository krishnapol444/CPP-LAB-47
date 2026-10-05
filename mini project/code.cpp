#include<iostream>
#include<string>
using namespace std;

class Hotel
{
private:
    string name;
    int roomNo,days;
    float roomPrice,foodBill;

public:
    Hotel()
    {
        name="Unknown";
        roomNo=0;
        days=0;
        roomPrice=0;
        foodBill=0;
    }

    void bookRoom()
    {
        cout<<"Enter Customer Name: ";
        cin>>name;

        cout<<"Enter Room Number: ";
        cin>>roomNo;

        cout<<"Enter Number of Days: ";
        cin>>days;

        cout<<"Enter Room Price per Day: ";
        cin>>roomPrice;

        cout<<"Room Booked Successfully!"<<endl;
    }

    void orderFood()
    {
        int choice,quantity;
        float price=0;

        cout<<"\n1. Pizza - Rs.200"<<endl;
        cout<<"2. Burger - Rs.100"<<endl;
        cout<<"3. Coffee - Rs.80"<<endl;
        cout<<"Enter Food Choice: ";
        cin>>choice;

        cout<<"Enter Quantity: ";
        cin>>quantity;

        if(choice==1)
            price=200;
        else if(choice==2)
            price=100;
        else if(choice==3)
            price=80;
        else
        {
            cout<<"Invalid Choice!"<<endl;
            return;
        }

        foodBill=foodBill+(price*quantity);

        cout<<"Food Ordered Successfully!"<<endl;
    }

    void calculateBill()
    {
        float roomBill,totalBill;

        roomBill=roomPrice*days;
        totalBill=roomBill+foodBill;

        cout<<"\n===== BILL ====="<<endl;
        cout<<"Room Bill: Rs."<<roomBill<<endl;
        cout<<"Food Bill: Rs."<<foodBill<<endl;
        cout<<"Total Bill: Rs."<<totalBill<<endl;
    }

    void displayCustomer()
    {
        cout<<"\n===== CUSTOMER DETAILS ====="<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Room Number: "<<roomNo<<endl;
        cout<<"Days: "<<days<<endl;
        cout<<"Room Price: Rs."<<roomPrice<<"/day"<<endl;
        cout<<"Food Bill: Rs."<<foodBill<<endl;
    }
};

int main()
{
    Hotel h;
    int choice;

    do
    {
        cout<<"\n===== HOTEL MANAGEMENT SYSTEM ====="<<endl;
        cout<<"1. Book Room"<<endl;
        cout<<"2. Order Food"<<endl;
        cout<<"3. Calculate Bill"<<endl;
        cout<<"4. Display Customer Details"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                h.bookRoom();
                break;

            case 2:
                h.orderFood();
                break;

            case 3:
                h.calculateBill();
                break;

            case 4:
                h.displayCustomer();
                break;

            case 5:
                cout<<"Thank You!"<<endl;
                break;

            default:
                cout<<"Invalid Choice!"<<endl;
        }

    }while(choice!=5);

    return 0;
}