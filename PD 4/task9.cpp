#include <iostream>
using namespace std;
string tpChecker(int people, int tp);

main() {
    int people, tp;

    cout << "Enter the number of people in the household: ";
    cin >> people;
    cout << "Enter the number of rolls of TP: ";
    cin >> tp;

    
    cout << tpChecker(people, tp) << endl;

    return 0;
}
string tpChecker(int people, int tp) {
     int sheetsPerRoll = 500;
     int sheetsPerPersonPerDay = 57;
     int daysToLast = (tp * sheetsPerRoll) / (people * sheetsPerPersonPerDay);

    if (daysToLast >= 14) {
        return "Your TP will last " + std::to_string(daysToLast) + " days, no need to panic!";
    } else {
        return "Your TP will only last " + std::to_string(daysToLast) + " days, buy more!";
    }
}