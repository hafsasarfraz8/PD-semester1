#include<iostream>
using namespace std;

main() {
  
  string name;
  cout << "Enter the movie name:";
  cin >> name;
 
  int atp;
  cout << "Enter the adult ticket price: $";
  cin >> atp;

  int ctp;
  cout << "Enter the child ticket price: $";
  cin >> ctp;
 
  int ats;
  cout << "Enter the number of adult tickets sold: ";
  cin >> ats;
 
  int cts;
  cout << "Enter the number of child tickets sold: ";
  cin >> cts;
  
  int p;
  cout << "Enter the percentage of the amount to be donated to charity: ";
  cin >> p;
   
  float add = (atp * ats) + (ctp * cts);
  float d = (add/p);
  float result = (add-d);
  cout << endl;

  cout << "Movie: " << name << endl;
  cout << "Total amount generated from ticket sales: $" << add << endl;
  cout << "Donation to charity (10%): $" << d << endl;
  cout << "Remaining amount after donation: $" << result;
}
   













