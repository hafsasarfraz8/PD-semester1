#include<iostream>
using namespace std;

main() {
  
    double min;
    cout << "Number of Minutes: ";
    cin >> min;
    
    double fps;
    cout << "Frames per Second: ";
    cin >> fps;
  
    float result = (min * 60) * (fps);

    cout << "Total Number of Frames: " << result;
}

   