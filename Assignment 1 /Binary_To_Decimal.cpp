#include <iostream>
#include <cmath>
/* Problem : You need to convert a binary number to a decimal number by multiplying the digits of the binary
number by the corresponding power of 2.
For example, 1001 can be converted to a decimal number as
(1x2 3 )+(0x2 2 )+(0x2 1 )+(1x2 0 ) = (1x8)+(0x4)+(0x2)+(1x1) = 8+0+0+1 = 9.
Implement this logic to convert Binary to Decimal in C++.*/
int main(){

    //Declaration
    int num, remainder;
    int binary;
    int value = 0;

    //Input
    std::cout << "Enter binary numbers to convert it into decimal : ";
    std::cin >> binary;
    num = binary;
    for(int i = 0 ; num > 0 ; i++)
    {
        // calculation
        remainder = num % 10;
        num = num / 10;
        value = value + remainder * pow(2, i);
    }

    // Output
    std::cout << binary << " is equal to " << value << " in decimal" << std::endl;
    
    return 0;
}


