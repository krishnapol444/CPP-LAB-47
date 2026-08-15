#include<iostream>
using namespace std;
class product
{
private:
int prodid;
string name;
int quantity;
float unitprice;
public:
void inputDetails()
{
    cout<<"Enter Product ID:";
    cin>>prodid;
    cout<<"Enter Product Name:";
    cin>>ws;
    getline(cin,name);
    cout<<"Enter Quantity:";
    cin>>quantity;
    cout<<"Enter Unit Price:";
    cin>>unitprice;
}
void calculateTotalPrice()const
{
    float totalPrice=quantity*unitprice;
    cout<<"Total Price:"<<totalPrice<<endl;
}
void displayDetails()
{
    cout<<"\n---Product Details---\n";
    cout<<"Product ID:"<<prodid<<endl;
    cout<<"Product Name:"<<name<<endl;
    cout<<"Quantity:"<<quantity<<endl;
    cout<<"Unit Price:"<<unitprice<<endl;
}
};
int main()
{
    product prod, prod1, prod2;
    prod.inputDetails();
    prod1.inputDetails();
    prod2.inputDetails();
    prod.displayDetails();
    prod1.displayDetails();
    prod2.displayDetails();
    prod.calculateTotalPrice();
    prod1.calculateTotalPrice();
    prod2.calculateTotalPrice();
    return 0;

}