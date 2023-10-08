#include<iostream>
using namespace std;

main() {

float age;
cout << "Enter the person's age: ";
cin >> age;

float move;
cout << "Enter the number of time they've moved: ";
cin >> move;

float result = (age) / (move + 1);

cout << "Average number of years lived in the same house: " << result;
}