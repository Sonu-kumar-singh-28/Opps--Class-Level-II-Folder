// Multiple Inheritance 

#include<iostream>
using namespace std;

class A{
    public:

    void get1data()
    {
        cout<< " This is the first  class ";
    }
};

class B : public A{
    
    public:

    void get2data(){
        cout<<" this is the second class ";
    }
};

class C:public B,public A{
    public:
    void getdata()
    {
        cout<< " I am inherited first and second class ";
    }
};


int main()
{
    C c1;
    c1.get2data();
}