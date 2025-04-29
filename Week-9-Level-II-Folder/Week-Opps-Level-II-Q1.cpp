// Encapsulation 
#include<iostream>
using namespace std;

class Animal{
   private:
    int age;
    int weight;

    public:
    void eat()
    {
        cout<<"Eating" << endl;
    }

    void getdata()
    {
      cout<< " Getdata " << endl;
    }
    void setdata()
    {
        cout<< " SetData " << endl;
    }
};

int main()
{
    Animal a;
    a.eat();
    a.getdata();
    a.setdata();
}