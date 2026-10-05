#include <iostream>
using namespace std;

class Vehicle
{
public:
    // Pure virtual functions
    virtual void start() = 0;
    virtual void stop() = 0;
};

class Car : public Vehicle
{
public:
    // Override start function
    void start() override
    {
        cout << "Car starts" << endl;
    }

    // Override stop function
    void stop() override
    {
        cout << "Car stops" << endl;
    }
};

class Bike : public Vehicle
{
public:
    // Override start function
    void start() override
    {
        cout << "Bike starts" << endl;
    }

    // Override stop function
    void stop() override
    {
        cout << "Bike stops" << endl;
    }
};

int main()
{
    // Create objects of Car and Bike
    Car car;
    Bike bike;

    // Base class pointer
    Vehicle *vehicle;

    // Point to Car object
    vehicle = &car;
    cout << "Car:" << endl;
    vehicle->start();
    vehicle->stop();

    // Point to Bike object
    vehicle = &bike;
    cout << "\nBike:" << endl;
    vehicle->start();
    vehicle->stop();

    return 0;
}