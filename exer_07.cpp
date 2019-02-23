/*
  exer_07.cpp
  Doing arithmetic
*/

#include <iostream>

int main()
{
    int var1 = 5;
    int var2 = 7;
    double var3 = 3.7f;
    double var4 = 8.0f;
    
    std::cout << "\n5 + 7 = " << var1 + var2;
    std::cout << "\n3.7 + 8.0 = " << var3 + var4;
    std::cout << "\n5 + 8.0 = " << var1 + var4;
    std::cout << "\n5 - 7 = " << var1 - var2;
    std::cout << "\n3.7 - 8.0 = " << var3 - var4;
    std::cout << "\n5 - 8.0 = " << var1 - var4;
    std::cout << "\n5 * 7 = " << var1 * var2;
    std::cout << "\n3.7 * 8.0 = " << var3 * var4;
    std::cout << "\n5 * 8.0 = " << var1 * var4;
    std::cout << "\n5 / 7 = " << var1 / var2;
    std::cout << "\n3.7 / 8.0 = " << var3 / var4;
    std::cout << "\n5 / 8.0 = " << var1 / var4;
}
