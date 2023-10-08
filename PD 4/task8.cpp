#include <iostream>
using namespace std;
void pet(int holidays);

main() {
int holidays;

    
    cout << "Enter the number of holidays: ";
    cin >> holidays;

    
    pet(holidays);

    return 0;
}

void pet(int holidays) {
    const int daysInYear = 365;
    const int norm = 30000;
    const int workingDays = daysInYear - holidays;
    const int workingDayTime = 63;
    const int holidayTime = 127;

    int totalTime = (workingDays * workingDayTime) + (holidays * holidayTime);
    int difference = norm - totalTime;

    if (difference >= 0) {
        cout << "Tom can sleep well." << endl;
    } else {
       cout << "Tom cannot sleep well." << endl;
    }

    int hours = difference / 60;
    int minutes = difference % 60;

cout << "The difference from the norm is " 
              << hours << " hours and " << minutes << " minutes." << endl;
}

