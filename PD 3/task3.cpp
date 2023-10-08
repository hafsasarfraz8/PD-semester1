#include<iostream>
using namespace std;

main() {
  
   double inv;
   cout << "Enter Initial Velocity (m/s): "; 
   cin >> inv;

   double acc;
   cout << "Enter Acceleration (m/s^2): "; 
   cin >> acc;
  
   double time;
   cout << "Enter Time (s): "; 
   cin >> time;
   
   float result = (acc * time) + inv;

   cout << "Final Velocity (m/s): " << result;
}

   
   
 
   