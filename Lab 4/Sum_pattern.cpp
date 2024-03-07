#include <iostream>

/*Generate the pattern*/

int main()
{
    int r, sum, c = 1;
    std::cout << "Enter the num of rows : ";
    std::cin >> r;

    sum = 0;
    for (int i = 1; i < r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << j;
            if (j < i)
                std::cout << " + ";
        }
        sum = sum + i;
        std::cout << " = " << sum;
        std::cout << "\n";
    }
    return 0;
}
