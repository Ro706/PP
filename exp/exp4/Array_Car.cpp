// WAP to create a class CAR . If the car model and milage of the car is given as input find the car model whose milage is highest and display both the car model and milage , if the wntries are given as input to the program . Use Array of Object

#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
    string model;
    float milage;
};

int main()
{
    Car C1[7];
    for (int i = 0; i < 7; i++)
    {
        cout << "Enter Model Name and Milage of car" << i + 1 << " : ";
        cin >> C1[i].model;
        cin >> C1[i].milage;
    }
    int high = C1[0].milage;
    string name;
    for (int i = 1; i < 7; i++)
    {
        if (C1[i].milage > high)
        {
            high = C1[i].milage;
            name = C1[i].model;
        }
    }
    cout << "Highest Milage is of " << name << " Milage : " << high;

    return 0;
}