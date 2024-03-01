#include <iostream>

int main()
{
    //Input
    int num, rev, frwrd;
    std::cout << " Enter The 4 digit number : ";
    std::cin >> num;

    frwrd = num;

    //Calculations
    int rem1 = num % 10;
    num /= 10;

    int rem2 = num % 10;
    num /= 10;

    int rem3 = num % 10;
    num /= 10;

    int rem4 = num % 10;
    num /= 10;

    rev = (rem1 * 1000) + (rem2 * 100) + (rem3 * 10) + (rem4);

    //Output
    if (frwrd == rev)
        std::cout << "The num is palindrome ";

    else
        std::cout << "Num is not palendrome";

    return 0;
}
