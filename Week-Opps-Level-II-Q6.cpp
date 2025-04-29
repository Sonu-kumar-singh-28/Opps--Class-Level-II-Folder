#include<iostream>
using namespace std;

class student {
public:
    void getdata() {
        cout << "I am in base Class " << endl;
    }
};


class Sss : public student {  
    public:
    void showdata(){
        cout<<"I am in the Derived Class" << endl;
    }
};

int main() {
    Sss d1;
    d1.getdata();
    d1.showdata();
}
