
#include<iostream>
using namespace std;

class Wall{
    private :
    double length;
    double height;

    public:
    Wall(double len, double hgt){
        length = len;
        height = hgt;
    }

    Wall(Wall &obj){
        length = obj.length;
        height = obj.height;
    }

    double calculateArea(){
        return length*height;
    }
};

int main(){
    Wall w1(10.5,8.6);
    Wall w2 = w1;

    cout<<"Area in w1 = "<<w1.calculateArea()<<endl;
    cout<<"Area in w2 = "<<w2.calculateArea();
}
