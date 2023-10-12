//.Make a class named fruit with a datamember to calculate the number of fruits in a
//basket.Create two other class named apple and mango to calculate the number of apple and
//mangoes in the basket.Print the number of fruits of each type and the total number of fuits in the
//basket.
#include<iostream>
using namespace std;
class Fruit {
    protected:
        int count;

    public:
        Fruit() {
            count = 0;
        }

    public:
        void add_one() {
            count++;
        }

    public:
        int get_count() {
            return count;
        }
};

class Apple : public Fruit {
    public:
        void print_apples() {
            cout << "There are " << get_count() << " apples in the basket." << endl;
        }
};

class Mango : public Fruit {
    public:
        void print_mangoes() {
            cout << "There are " << get_count() << " mangoes in the basket." << endl;
        }
};
int main() {
    Apple apple;
    Mango mango;
    apple.add_one();
    apple.add_one();
    mango.add_one();
    apple.print_apples();
    mango.print_mangoes();
    cout << "The total number of fruits in the basket is " << apple.get_count() + mango.get_count() << "." << endl;

    return 0;
}

