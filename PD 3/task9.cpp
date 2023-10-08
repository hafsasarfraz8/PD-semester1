#include<iostream>
using namespace std;
main() {
  
     int number;
     cout << "Enter a 4-digit number: ";
     cin >> number;
  
     int a,b,c,d,e,f;
     a = number % 10;
     b = number / 10;
     c = b % 10;
     d = b / 10;
     e = d % 10;
     f = d / 10;

     int result = a + c + e + f;
     cout << "Sum of the individual digits: " << result;
} 