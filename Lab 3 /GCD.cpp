#include<iostream>

/* Problem: Write a program that prompts the user to enter two positive integers and finds their greatest common
divisor.*/

int main(){
    int n1 , n2 , divisor , check ;
    std::cout << "Enter 2 numbers to find their greatest common divisor \n";
    std::cout << "Number 1 : ";
    std::cin >> n1;
    std::cout << "Number 2 : ";
    std::cin >> n2;

    if (n1 > n2){
        divisor = n1;
    }

    else {
        divisor = n2;
    }
  
    check = divisor;
    while (check > 0){

        if(n1 % check == 0 && n2 % check == 0){
            divisor = check;
            std::cout << "GCD of " << n1 << " and " << n2 << " is " << divisor << std::endl;
            break;
        }
        check--;
    }
}
