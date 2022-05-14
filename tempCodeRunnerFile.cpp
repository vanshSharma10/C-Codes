#include <iostream>
using namespace std;
int main()
{
    int table;
    cout << "wich table you want = " << endl;
    cin >> table;
    for (int i = 1; i <= 10; i++)
    {
        cout << table;
        cout << "X";
        cout << i;
        cout << "=";
        cout << i * table;
        cout << "\n";
    }

    return 0;
}