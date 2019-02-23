/*
  exer_03.cpp
  A C++ program that finds the size of fundamental data types.
*/

#include <iostream>

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
    
    std::cout << "char is " << sizeof(n_char) << " bytes.";
    std::cout << "\nshort is " << sizeof(n_short) << " bytes.";
    std::cout << "\nint is " << sizeof(n_int) << " bytes.";
    std::cout << "\nlong is " << sizeof(n_long) << " bytes.";
    std::cout << "\nlong long is " << sizeof(n_llong) << " bytes.";
    std::cout << "\nfloat is " << sizeof(n_float) << " bytes.";
    std::cout << "\ndouble is " << sizeof(n_double) << " bytes.";
    std::cout << "\nlong double is " << sizeof(n_ldouble) << " bytes.";
    std::cout << "\nbool is " << sizeof(n_bool) << " bytes.";
}
