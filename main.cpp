#include <iostream>
using namespace std;

#include "structPiggyBankCoins.h"
#include "read_from_st_piggy_bank_coins.h"
#include "calculate_piggy_bank_coins.h"
#include "print_shapes.h"

/*
        * Penny = 1 
        * Nickle = 5 penny
        * Dime = 10 penny
        * Quarter = 25 penny
        * Dollar = 100 penny

* Calculate Pennies, Nicles, Dimes, Qurarters, Dollars
    * 5, 5, 5, 5, 5
    * output = 7.05 Pennies.
    *            = 7.05 Dollar.
# Steps
* Struct 
* Read struct
* Calculate Readed structe & Print Result.
*/

int main(){

    //  Reading
   stPiggyBankCoins coin =  ReadFromStPiggyBankCoins();
   
   // Decoration
    PrintShapes(20,'*');

    //  Calculate and Print Result
    CalculatePiggyBankCoins(coin);
    
    return 0;
}