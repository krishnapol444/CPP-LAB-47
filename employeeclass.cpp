#include<iostream>
using namespace std;
class Employee
{
    private:
    int empid;
    string name;
    string department;
    float salary;
    public:
    void inputDetails()
{
    cout<<"Enter Employee ID:";
    cin>>empid;
        cout<<"Enter Employee  Name:";
        cin>>ws;
        getline(cin,name);
        cout<<"Enter Department:";
        cin>>ws;
        getline(cin,department);
        cout<<"Enter Salary:";
        cin>>salary;
}
void displayDetails()
{
    cout<<"Employee ID:"<<empid<<endl;
    cout<<"Employee Name:"<<name<<endl;
    cout<<"Department:"<<department<<endl;
    cout<<"Salary:"<<salary<<endl;
}
void annualSalary()const
{
    float annualSalary=salary*12;
    cout<<"Annual Salary:"<<annualSalary<<endl;
}
};
int main()
{
    Employee emp,emp1,emp2;
    emp.inputDetails();
    emp1.inputDetails();
    emp2.inputDetails();
    emp.displayDetails();
    emp1.displayDetails();
    emp2.displayDetails();
    emp.annualSalary(); 
    emp1.annualSalary();
    emp2.annualSalary();
    return 0;
}
    