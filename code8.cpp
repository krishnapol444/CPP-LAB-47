#include<iostream>
using namespace std;
class item
{
    int id;
    float cost;
    public:
    int getdata(int a, float b);
    int putdata()
    {
        cout<<"ID of item is "<<id<<"\n";
        cout<<"Cost of item is "<<cost<<"\n";
        return 0;
    }
};
int item::getdata(int a,float b)
{
    id=a;
    cost=b;
    return 0;
}
int main()
{
    item x;
    cout<<"object x"<<"\n";
    x.getdata(100,999.99);
    x.putdata();
    item y;
    cout<<"object y"<<"\n";
    y.getdata(10,5555.50);
    y.putdata();
    return 0;
}