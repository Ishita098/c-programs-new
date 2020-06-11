#include <iostream>
#include <cmath>

using namespace std;

int convertBinaryToDecimal(long long);

int main()
{
    long long n;
    
    cout << "Enter a binary number: ";
    cin >> n;
 
    cout << n << " in binary = " << convertBinaryToDecimal(n) << "in decimal";
    return 0;
}

