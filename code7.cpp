#include<iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float);
int main()
{
    cout<<"Area for side=5"<<area(5);
    cout<<"area for lenght=5,breadth=10"<<area(5,10);
    cout<<"area for circle"<<area(3.5f);
    return 0;
}
int area(int side)
{
    return side*side;
}
int area(int h, int b)
{
    return h*b;
}
float area(float radius)
{
    return(3.14*radius*radius);
}