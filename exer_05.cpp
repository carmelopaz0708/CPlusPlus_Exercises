/*
  exer_04.cpp
  A C++ program that prints the minimum and maximum sizes for data types.
*/

#include <iostream>
#include <climits>      // Standard library for defining data type sizes

int main() {
    std::cout << "The maximum limit of \'int\' data type: " << INT_MAX;
    std::cout << "\nThe minimum limit of \'int\' data type: " << INT_MIN;
    std::cout << "\nThe maximum limit of \'unsigned int\' data type: " << UINT_MAX;
    std::cout << "\nThe maximum limit of \'long long\' data type: " << LLONG_MAX;
    std::cout << "\nThe minimum limit of \'long long\' data type: " << LLONG_MIN;
    std::cout << "\nThe maximum limit of \'unsigned long long\' data type: " << ULLONG_MAX;
    std::cout << "\nThe Bits contain in \'char\' data type: " << CHAR_BIT;
    std::cout << "\nThe maximum limit of \'char\' data type: " << CHAR_MAX;
    std::cout << "\nThe minimum limit of \'char\' data type: " << CHAR_MIN;
    std::cout << "\nThe maximum limit of \'signed char\' data type: " << SCHAR_MAX;
    std::cout << "\nThe minimum limit of \'signed char\' data type: " << SCHAR_MIN;
    std::cout << "\nThe maximum limit of \'unsigned char\' data type: " << UCHAR_MAX;
    std::cout << "\nThe minimum limit of \'short\' data type: " << SHRT_MIN;
    std::cout << "\nThe maximum limit of \'short\' data type: " << SHRT_MAX;
    std::cout << "\nThe maximum limit of \'unsigned short\' data type: " << USHRT_MAX;
}
