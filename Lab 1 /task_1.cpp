#include <iostream>
#include <cmath>

/* Problem : Write a program that takes two integer x and y and prints the Euclidean distance from the point
(x,y) to the origin (0,0).*/

int main()
{
    //input
    int x, y;
    std::cout << "Enter the value of x and y : \n";
    std::cin >> x >> y;

    //calculations
    int sum = pow(x - 0, 2) + pow(y - 0, 2);
    float distance = sqrt(sum);

    //output
    std::cout << "The distance from (0,0) to (" << x << "," << y << ") = " << distance;

    return 0;
}
