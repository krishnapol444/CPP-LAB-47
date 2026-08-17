#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n, count = 0;
    string a,b;
    cout<<"Enter stuffed Frame Length:";
    cin>>n;
    cout<<"Enter the stuffed Frame bits:";
    cin>>a;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='1')
        {
         count = 0;   
        }
        else
        {
            count++;
        }
        if(count==5)
        {
            i++;
            count=0;
        }
        else
        {
            b+=a[i];
        }
    }
    cout<<"After Bit De-stuffing the Frame is:"<<b;
    return 0;
}