// multilevel Inheritance 

#include<iostream>
using namespace std;

class fruit{
    public:
    string name ="Fruit";
};

class Mango:public fruit{
    public:
    int weight = 1;
};

class Alphanso: public Mango{
    public:
    int sugarlevel = 0.5;
};

int main()
{
    Alphanso a1;

    cout<<a1.name << " " << a1.weight << " " << a1.sugarlevel << " " << endl;
}



