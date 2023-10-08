#include<iostream>
using namespace std;

main() {

int sm;
cout << "Number of square meters you can paint: ";
cin >> sm;

int w;
cout << "Width of the single wall (in meters): ";
cin >> w;
 
int h;
cout << "Height of the single wall (in meters): ";
cin >> h;

float ans = (w * h);
float result = (sm / ans);

cout << "Number of walls you can paint: " << result;
} 