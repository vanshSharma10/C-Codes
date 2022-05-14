// ******************************Constant Functions************************************
// #include <iostream>
// using namespace std;

// class counter
// {
//     static int count;

// public:
//     void inc()
//     {
//         count++;
//     }
//     void display()
//     {
//         cout << count;
//     }
// };

// int counter ::count = 0;
// int main()
// {
//     counter obj1, obj2, obj3;
//     // obj1.setV(),obj2.setV(),obj3.setV();
//     obj1.inc(), obj2.inc(), obj2.inc(), obj3.inc();
//     obj1.display(), obj2.display(), obj3.display();

//     return 0;
// }

// *******************************************************************************************
#include <iostream>
using namespace std;
class counter{
    int count;
    public:
        void set(){
            count  = 0;
        }
        void inc(){
            count++;
        }
        void display() const{
            // count++;
            cout << count;
        }
};
int main(){
    counter c1;
    c1.set();
    c1.inc();
    c1.display();
     
    return 0;
}