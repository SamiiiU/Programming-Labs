#include<iostream>

/*Write a program that accepts an array of integers as a parameter and returns the percentage of even
numbers in the array as a real number. For example, if a variable named nums refers to an array of the
elements 6, 2, 9, 11, , then the program should return 40.0. If the array contains no even elements
or no elements at all, return 0.0.*/
int main(){
    int num[5];
    int even;
    int length = sizeof(num) / sizeof(num[0]);
    std::cout << length << "\n";
    std::cout << "Enter the elements of array :";
    for(int i=0 ; i < 5 ; i++){
        std::cin >> num[i];
        if(num[i]%2 ==0)
        even++;
    }
    
    float length_ = static_cast<float>(length);
    float even_ = static_cast<float>(even);
    float perc = (even_/length_)*100.0;
    std::cout << "Percentage = " << perc << " %";
    
}
