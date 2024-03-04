#include <iostream>
#include <cmath>

/*Problem : Input any number and then find out if the number is palindrome or not.*/
int main()
{
    int n, rev, rem, count, num, input;
    std::cout << "Enter the number to check : ";
    std::cin >> n;
    input = num = n;
    rev = 0;
    count = 0;
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    count -= 1;
    while (count >= 0)
    {
        rem = num % 10;
        num = num / 10;
        rev = rev + rem * pow(10, count);
        count--;
    }

    std::cout << "rev : " << rev << "\nnum = " << input << std::endl;

    if (input == rev)
    {
        std::cout << "The number is palindrome";
    }

    else
    {
        std::cout << "Num is not palindrome";
    }
}
