#include <iostream>
using namespace std;
void discount(string n,double p);

main () {

	string n;
	cout << "Enter the country's name: ";
	cin >> n;
	double p;
	cout << "Enter the ticket price in dollars:$ ";
	cin >> p;
	discount(n,p);
}
	
void discount(string n,double p){
	
	if (n == "Pakistan"){
 	double result = p-(p*0.05);
	cout << "Final ticket price after discount:$ " << result;
}	
	if (n == "Ireland"){
 	double result = p-(p*0.1);
	cout << "Final ticket price after discount:$ " << result;
}
	if (n == "India"){
 	double result = p-(p*0.2);
	cout << "Final ticket price after discount:$ " << result;
}
	if (n == "England"){
 	double result = p-(p*0.3);
	cout << "Final ticket price after discount:$ " << result;
}
	if (n == "Canada"){
 	double result = p-(p*0.45);
	cout << "Final ticket price after discount:$ " << result;
}	

}
