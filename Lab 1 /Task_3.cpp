#include<iostream>

/*Problem : Suppose you want to develop a program that changes a given amount of money into smaller
monetary units. The program lets the user enter an amount as a double value representing a total in
dollars and cents, and outputs a report listing the monetary equivalent in the maximum number of
dollars, quarters, dimes, nickels, and pennies, in this order, to result in the minimum number of
coins.*/

int main(){

    //input
    double amount; 
    int remainigs;
    std::cout << "Enter the amount in dollar and cents  :" ;
    std::cin >> amount ;

    //calculations
    int cents = amount*100;
    
    int dollars = cents / 100;
    remainigs = cents % 100;

    int quarters = remainigs / 25 ;
    remainigs = remainigs % 25 ;

    int dimes = remainigs / 10;
    remainigs = remainigs % 10;

    int nickels = remainigs / 5 ;
    remainigs = remainigs % 5;

    int pennies = remainigs;

    //output
    std::cout << "Dollars : " << dollars << "\n";
    std::cout << "Quarters : " << quarters << "\n";
    std::cout << "Dimes : " << dimes << "\n";
    std::cout << "Nickels : " << nickels << "\n";
    std::cout << "Pennies : " << pennies << "\n";

    return 0;
}
