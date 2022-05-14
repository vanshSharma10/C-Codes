//  There are two types header files:
//  1. System header file: it comes with the compiler
#include <iostream>
// 2. User defined header files: it is written by the programmer
// #include "this.h" --->This will produce an error if this.h is not present in the current directory
using namespace std;
int main()
{
    cout << "This is c++ programming\n";

    // cpp reference website

    int a, b;
    cout<<"Enter the value of a = ";cin>>a;
    cout<<"Enter the value pf b = ";cin>>b;

    cout << "operators in C++:" << endl;
    cout << "Following are the types of operators in c++" << endl;
    // Arithmetic Operators
    cout << "The value of a + b is " << (a + b) << endl;
    cout << "The value of a - b is " << (a - b) << endl;
    cout << "The value of a * b is " << (a * b) << endl;
    cout << "The value of a / b is " << (a / b) << endl;
    cout << "The value of a % b is " << (a % b) << endl;   //DOUBT how?
    cout << "The value of a++ is " << (a++) << endl;
    cout << "The value of a-- is " << (a--) << endl;
    cout << "The value of ++a is " << (++a) << endl;
    cout << "The value of --a is " << (--a) << endl;

    // Assignment Operators --> used to assign values to variables
    // int a =3, b=9;
    // char d='d';

    // Comparison Operators
    cout << "Following are the comparison operators in C++" << endl;
    cout << "The value of a == b is " << (a == b) << endl;
    cout << "The value of a != b is " << (a != b) << endl;
    cout << "The value of a >= b is " << (a >= b) << endl;
    cout << "The value of a <= b is " << (a <= b) << endl;
    cout << "The value of a > b is " << (a > b) << endl;
    cout << "The value of a < b is " << (a < b) << endl;

    // Logical operators
    cout << "Following are the logical operators in C++" << endl;
    cout << "The value of this logical and operator ((a==b) && (a<b)) is:" << ((a == b) && (a < b)) << endl;
    cout << "The value of this logical or operator ((a==b) || (a<b)) is:" << ((a == b) || (a < b)) << endl;
    cout << "The value of this logical not operator (!(a==b)) is:" << (!(a == b)) << endl;

    return 0;
}