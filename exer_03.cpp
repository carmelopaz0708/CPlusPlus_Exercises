/*
  exer_03.cpp
  A C++ program that finds the size of fundamental data types.
*/

#include <iostream>

using namespace std;

int main() {
    char n_char;
    short n_short;
    int n_int;
    long n_long;
    long long n_llong;
    float n_float;
    double n_double;
    long double n_ldouble;
    bool n_bool;
    
    cout << "char is " << sizeof(n_char) << " bytes." << endl;
    cout << "short is " << sizeof(n_short) << " bytes." << endl;
    cout << "int is " << sizeof(n_int) << " bytes." << endl;
    cout << "long is " << sizeof(n_long) << " bytes." << endl;
    cout << "long long is " << sizeof(n_llong) << " bytes." << endl;
    cout << "float is " << sizeof(n_float) << " bytes." << endl;
    cout << "double is " << sizeof(n_double) << " bytes." << endl;
    cout << "long double is " << sizeof(n_ldouble) << " bytes." << endl;
    cout << "bool is " << sizeof(n_bool) << " bytes." << endl;
}
