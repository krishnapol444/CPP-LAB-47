#include<iostream>
using namespace std;
class Fraction
{
    private:
    int numerator,denominator;
    public:
    Fraction(int n,int d)
    {
        numerator=n;
        denominator=d;
    }
    Fraction add(const Fraction &f)
    {
        return Fraction(numerator*f.denominator+denominator*f.numerator,denominator*f.denominator);
    }
    Fraction subtract(const Fraction &f)
    {
        return Fraction(numerator*f.denominator-denominator*f.numerator,denominator*f.denominator);
    }
    void display()
    {
        cout<<numerator<<"/"<<denominator<<endl;
    }
};
int main()
{
    Fraction f1(3,4),f2(2,5);
    Fraction sum = f1.add(f2);
    Fraction diff = f1.subtract(f2);
    cout<<"Addition: ";
    sum.display();
    cout<<"Subtraction: ";
    diff.display();
    return 0;
}