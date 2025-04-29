#include<iostream>
// function Overloading 
using namespace std;

class Maths{
    public:
    int sum(int a, int b)
    {
        cout<<"I am Signature First " << endl;
        
        return a+b;
    }

    int sum(int a, int b, int c){
        cout << endl<<"I am Signature Second " << endl;
        return a+b+c;
    }

    int sum(int a, float b)
    {
        cout << endl<<"I am Signature Third " << endl;
        return a+b;
    }
};

int main()
{
    Maths m1;
    cout<< m1.sum(2,3);

    cout<< m1.sum(2,3.5f);
    return 0;
}