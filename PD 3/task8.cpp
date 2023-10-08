#include<iostream>
using namespace std;
main() {
    float vp;
    cout << "Enter vegetable price per kilogram (in coins): ";
    cin >> vp;
    float fp;
    cout << "Enter fruit price per kilogram (in coins): ";
    cin >> fp; 
    int kv;
    cout << "Enter total kilograms of vegetables: ";
    cin >> kv;
    int kf;
    cout << "Enter total kilograms of fruits: ";
    cin >> kf;   
    float result = (kv * (vp/1.94)) + (kf * (fp/1.94));
    cout << "Total earnings in Rupees (Rps): " << result;
}    

 