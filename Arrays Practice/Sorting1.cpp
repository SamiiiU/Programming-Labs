#include <iostream>

int main(){
    int num, size;
    std::cout << "Enter the size of array ";
    std::cin >> size;
    int arr[size];
    //Input Array
    std::cout << "Enter the elements of array \n";
    for (int i = 0; i < size; i++){
        std::cout << i+1 << ": ";
        std::cin >> arr[i];
    }
    //Sorting array 
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
            }
        }
    }
      //Outout of sorted array 
    std::cout << "The sorted array is :";
    for (int i = 0; i < size; i++){
        std::cout << "  " << arr[i] << "  ";
    }
}
