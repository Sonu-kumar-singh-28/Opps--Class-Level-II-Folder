#include<iostream>
// Single Inheritance 
using namespace std;

class Car{
    public:
    string name;
    int weight;
    int age;

    void speedup()
    {
        cout<<"Speading up " << endl;
    }
    void breakmarro()
    {
        cout<<" Break Mardi" << endl;
    }
};

class Scorpio : public Car{

};

int main()
{
    Scorpio s1;
    s1.speedup();
    s1.breakmarro();
}