#include <iostream>

/* Problem : Write a program that displays the first 50 prime numbers in five lines, each of which contains 10
numbers. An integer greater than 1 is prime if its only positive divisor is 1 or itself. For example, 2, 3, 5,
and 7 are prime numbers, but 4, 6, 8, and 9 are not.*/

int main()
{
	
	int num = 2, check = 2, count, prime;
	count = 0;

	prime = 0;
	while (prime < 50)
	{
		check = 2;
		count = 0;
		while (check <= num)
		{
			if (num % check == 0)
				count++;
			check++;
		}
		if (count == 1)
		{
			std::cout << num << "  ";
			prime++;

			if (prime % 10 == 0)
				std::cout << "\n";
		}
		num++;
	}
  return 0;
}
