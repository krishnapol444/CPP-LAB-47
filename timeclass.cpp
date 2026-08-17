#include <iostream>
using namespace std;

class Time
{
private:
    int hours, minutes;

public:
    Time(int h = 0, int m = 0)
    {
        hours = h;
        minutes = m;
    }

    void add(Time t)
    {
        int h = hours + t.hours;
        int m = minutes + t.minutes;

        if (m >= 60)
        {
            h = h + m / 60;
            m = m % 60;
        }

        cout << h << " hours " << m << " minutes" << endl;
    }

    void subtract(Time t)
    {
        int h = hours - t.hours;
        int m = minutes - t.minutes;

        if (m < 0)
        {
            h = h - 1;
            m = m + 60;
        }

        cout << h << " hours " << m << " minutes" << endl;
    }

    void display()
    {
        cout << hours << " hours " << minutes << " minutes" << endl;
    }
};

int main()
{
    Time t1(2, 45), t2(1, 30);

    cout << "First Time: ";
    t1.display();

    cout << "Second Time: ";
    t2.display();

    cout << "Addition: ";
    t1.add(t2);

    cout << "Subtraction: ";
    t1.subtract(t2);

    return 0;
}