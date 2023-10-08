#include <iostream>
using namespace std;
bool possibleBonus(int a, int b);

main () {
int yourPosition, friendPosition;
    cout << "Enter your position: ";
    cin >> yourPosition;
    cout << "Enter your friend's position: ";
    cin >> friendPosition;
if (possibleBonus(yourPosition, friendPosition)) {
       cout << "true" << endl;
    } else {
       cout << "false" << endl;
    }
}
bool possibleBonus(int a, int b) {
   
    int diff = b - a;
if (diff >= 1 && diff <= 6) {
        return true;
    } else {
        return false;
    }
}

