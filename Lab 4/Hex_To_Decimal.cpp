#include<iostream>
/*Write a program that converts a hexadecimal digit into a decimal value.*/

int main(){
    char hex , restart;
    while(1){
    std::cout << "Enter the Hexadecimal digit : ";
    std::cin >> hex ;


    if (hex >= '0' && hex <= '9'){
        std::cout << hex << "\n";
    }

    else if (hex >= 'A' && hex  <= 'F'){
        int decimal = static_cast<int>(hex);
        std::cout << decimal - 55 << "\n";
    }

    else 
        std::cout << "Wrong Hexadecimal digit \n";

    std::cout << "Enter 'Y' to continue \n"  ;
    std::cin >> restart;

    if(restart == 'Y' || restart == 'y')  {
        continue;
    }
     else {
        std::cout << "Program end !";
        break;
    } 
    }  
}
