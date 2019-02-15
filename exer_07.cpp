/*
    exer_07.cpp
    Doing arithmetic
*/

#include <iostream>


int main()
{
    using namespace std;
    
    int var1 = 5;
    int var2 = 7;
    double var3 = 3.7f;
    double var4 = 8.0f;
    
    cout << "5 + 7 = " << var1 + var2 << endl;
    cout << "3.7 + 8.0 = " << var3 + var4 << endl;
    cout << "5 + 8.0 = " << var1 + var4 << endl;
    cout << "5 - 7 = " << var1 - var2 << endl;
    cout << "3.7 - 8.0 = " << var3 - var4 << endl;
    cout << "5 - 8.0 = " << var1 - var4 << endl;
    cout << "5 * 7 = " << var1 * var2 << endl;
    cout << "3.7 * 8.0 = " << var3 * var4 << endl;
    cout << "5 * 8.0 = " << var1 * var4 << endl;
    cout << "5 / 7 = " << var1 / var2 << endl;
    cout << "3.7 / 8.0 = " << var3 / var4 << endl;
    cout << "5 / 8.0 = " << var1 / var4 << endl;
}
