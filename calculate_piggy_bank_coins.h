#include <iostream>
using namespace std;

/* 
        * Penny = 1 
        * Nickle = 5 penny
        * Dime = 10 penny
        * Quarter = 25 penny
        * Dollar = 100 penny 
*/

void CalculatePiggyBankCoins(stPiggyBankCoins fromReadingFunc){

    float pennies = fromReadingFunc.pinny + (fromReadingFunc.nickl * 5)  + (fromReadingFunc.dime * 10)  + (fromReadingFunc.quarter * 25)  + (fromReadingFunc.dollar * 100) ;
    float dollar = pennies /100;

    cout << "You have " << dollar << " dollars  \n"; 
    cout << "You have " <<  pennies << " pennies  \n";
    




}