#include <iostream>
using namespace std;
void Reverse(string i);

main () {
	string i;	
	cout << "Enter 'true' or 'false': ";
	cin >> i;
	Reverse(i);
}

void Reverse(string i){

	if (i == "true"){
  	cout << "False";
}
else{
	cout << "True";
}

}