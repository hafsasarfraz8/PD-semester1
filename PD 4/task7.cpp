#include <iostream>
using namespace std;
void flowerShop(int redRose,int whiteRose,int tulip);


main () {
	int redRose;
	cout << "Red Rose: ";
	cin >> redRose;
	int whiteRose;
	cout << "White Rose: ";
	cin >> whiteRose;
	int tulip;
	cout << "Tulip: ";
	cin >> tulip;
	flowerShop(redRose,whiteRose,tulip);
}
void flowerShop(int redRose,int whiteRose,int tulip){
float oprice =(redRose*2) + (whiteRose*4.10) + (tulip*2.50);
cout << "original Price:$ " << oprice << endl;

	if (oprice > 200){
	float result = oprice-(oprice*0.2);
	cout << "Price after Discount:$ " << result;
}
else{
	float result = oprice;
	cout << "No discount applied.";
}	
}




