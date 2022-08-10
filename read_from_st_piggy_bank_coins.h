#include <iostream>
using namespace std;

 stPiggyBankCoins ReadFromStPiggyBankCoins(){
    

    stPiggyBankCoins coin;
    cout << "Please enter your pinny: " << "\n";
    cin >> coin.pinny;

    cout << "Pleas enter your nickle: \n";
    cin >> coin.nickl;

    cout << "Please enter your dime: \n";
    cin >> coin.dime;

    cout << "enter your quarter: \n";
    cin >> coin.quarter;

    cout << "Please enter your dollar: \n";
    cin >> coin.dollar;
    
    return coin;
}
