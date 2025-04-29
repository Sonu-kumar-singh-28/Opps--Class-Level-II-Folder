// hierarcial Inheritance 

#include<iostream>
using namespace std;

class Car{
    public:
    void car1(){
        cout<< " Speed up " << endl;
    }
};

class Scorpio:public Car{
    public:
    void speedup()
    {
        cout<<" Gadi tej Bhagao :" << endl;
    }
};

class Fortuner:public Car{
    public:
    void breakmarro()
    {
        cout<< " break mardii " << endl;
    }
};

int main()
{
    Fortuner f1;
    f1.car1();

}

// hybrid inheritance 

// no need to code waste time
