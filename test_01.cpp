/*
test_01.cpp
Testing the <cmath> header and its functions. For more information, refer to the link below.
http://www.cplusplus.com/reference/cmath/
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x;
    cout << "Enter value: ";
    cin >> x;
    cout << "Square root of " << x << " is " << sqrt(x);
}
