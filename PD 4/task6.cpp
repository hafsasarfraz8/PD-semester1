#include <iostream>
using namespace std;
void longestTime (int h,int m);

main () {
	int h;
	cout << "Enter the number of hours: "; 
	cin >> h;

	int m;
	cout << "Enter the number of minutes: ";
	cin >> m;
 	longestTime(h,m); 
}

void longestTime (int h,int m)
{
 int result = h*60;
if (result > m){
cout << h ;
}
else {
cout << m;
}

} 