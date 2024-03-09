#include<iostream>

int main(){
    int num , function , even = 0, odd = 0 , rem , count = 1 ;
    char restart ;
    while ( 1 ){

    std::cout << "\nEnter the Numbers : ";
    std::cin >> num;

    std::cout << "Which type of sepration you want ?\n1: Even \n2: Odd \n";
    std::cin >> function;

    switch (function){
    case 1 :
        while (num > 0){
            rem = num % 10;
            if(rem%2 == 0){
                even = even + rem*count;
                count = count * 10;
            }
            num = num / 10;}
        std::cout << "\nThe even numbers are : " << even;
        break;
    
    case 2 :
        while (num > 0){
            rem = num % 10;
            if(rem%2 != 0){
                odd = odd + rem*count;
                count = count * 10;
            }
            num = num / 10;}
        std::cout << "\nThe odd numbers are : " << odd;
        break; }
    
    std::cout << "\n\nEnter 'Y' to restart : ";
    std::cin >> restart;

    if(restart =='Y' || restart == 'y')
        continue;
    else{
        std::cout << "\nProgram ends";
        break;}}
    return 0;
}
