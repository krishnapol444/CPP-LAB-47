#include<iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float);
int main()
{
    cout<<"\n Area for side=5 \n"<<area(5);
    cout<<"\n area for lenght=5,breadth=10 \n"<<area(5,10);
    cout<<"\n area for circle \n"<<area(3.5f);
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