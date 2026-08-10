#include<iostream>
using namespace std;
class Complex
{
    private:
    int real,imag;
    public:
    Complex(int r=0,int i=0):real(r),imag(i){}
    Complex add(Complex&x1,Complex&x2)
    
    {
        Complex x3;
    x3.real=x1.real+x2.real;
    x3.imag=x1.imag+x2.imag;
         return x3;
    }
    Complex subtract(Complex&x1,Complex&x2)
    {
        Complex x3;
        x3.real=x1.real-x2.real;
        x3.imag=x1.imag-x2.imag;
        return x3;
    }
    void display() const
    {
        cout<<real<<"+i"<<imag<<endl;
    }
};
int main()
{
    Complex c1(4,5), c2(8,9);
    Complex sum=c1.add(c1,c2);
    Complex diff=c2.subtract(c1,c2);
    cout<<"First Complex Number:"; c1.display();
    cout<<"Second Complex Number:"; c2.display();
    cout<<"Addition:"; sum.display();
    cout<<"Subtraction:"; diff.display();
    c1.display();
    c2.display();
    return 0;
}