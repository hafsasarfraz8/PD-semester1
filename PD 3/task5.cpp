#include<iostream>
using namespace std;

main() {
  
    string name;
    cout << "Enter the Name of the Person: ";
    cin >> name;
 
    float w;
    cout << "Enter the target weight loss in kilograms: ";
    cin >> w; 
  
    float result = w * 15;
    
    cout << name << " will need " << result << " days to lose " << w << " kg of weight by following the doctor's suggestions";
}
 
    