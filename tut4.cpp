#include <iostream>
using namespace std;
int glo = 22;
void sum(){
    int a;
    glo = 2;
    cout<<glo;
}
// always preference to local variable

int main(){
    // int a = 2;
    // int b = 4;
    int glo = 20;
    glo = 30;
    int a = 40 , b=20;
    float pie = 3.14;
    char charc = 'H';
    bool boolvalue = false;
    sum();
    cout<<"\nTHIS IS TUT4.\nThe value of a is = "<<a<<"\nValue of b is = "<<b;
    cout<<"\nThe Value of pie is = "<< pie;
    cout<<"\nThis is datatype char = "<< charc;
    cout<<"\nValue is = "<<boolvalue;
    cout<<"\n "<<glo;
    return 0;
}