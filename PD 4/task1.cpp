#include <iostream>
using namespace std;
void isEqual(int n1,int n2);

main () {
	int n1;
	cout << "Enter the first number: ";
	cin >> n1;
	int n2;
	cout << "Enter the second number: ";
	cin >> n2;
	isEqual(n1,n2);

}
void isEqual(int n1,int n2)
{

 	if (n1 == n2){
  	cout << "True";
}
 else {
     cout << "False";
}

}