/*
    exer_06.cpp
    Checking primitive values
*/

#include <iostream>


int main()
{
    using namespace std;
    
    char gender = 'F';                                      // char is initialize with single quotes and one character
    bool isMarried = true;                                  // boolean takes only true or false values (1 or 0)
    short numberSons = 2;                                   
    int yearAppoint = 2009;
    long salaryYear = 1500000l;                             // indicate long value with an l
    double height = 79.48;                              
    float gpa = 4.69f;                                      // indicate float value with an f
    unsigned long salaryDrawnUpTo = 12047235ul;             // indicate unsigned long with ul
    unsigned long long balance = 995324987ull;              // indicate unsigned long long with ull
    
    cout << "Gender: " << gender;
    cout << "\nMarried Status: " << isMarried;
    cout << "\nNumber of Sons: " << numberSons;
    cout << "\nYear Appointed: " << yearAppoint;
    cout << "\nSalary per Year: " << salaryYear;
    cout << "\nHeight: " << height;
    cout << "\nGPA: " << gpa;
    cout << "\nSalary Drawn Upto: " << salaryDrawnUpTo;
    cout << "\nBalance: " << balance << endl;
}
