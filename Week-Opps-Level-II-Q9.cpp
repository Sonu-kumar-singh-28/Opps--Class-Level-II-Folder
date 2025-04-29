#include<iostream>
using namespace std;

class Param{
    public:
    int val;

    void operator+(Param& obj2){
        int values1 = this->val;
        int values2 = obj2.val;
        cout<<(values2-values1) << endl;
    }
};

int main(){

    Param obj1,obj2;

    obj1.val = 7;
    obj2.val = 2;

    obj1+obj2; 
    return 0;
}