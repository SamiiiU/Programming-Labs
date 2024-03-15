#include<iostream>
#include<array>
int main(){
    //input size
    int n;
    std::cout << "Enter the size of array : ";
    std::cin >> n;
    
    int arr[n];
    std::cout<<"Enter Numbers To Fill Out The Array"<<std::endl;
    //input of array
    for(int i = 0 ; i < n; i++ ){
        std::cout << i+1 << ": ";
        std::cin>>arr[i];
    }
    
    //checking array
    for(int  i= 0 ; i < n - i - 1 ; i++){
        arr[i] = arr[i] + arr[n-i-1];
        arr[n-i-1] = arr[i] - arr[n-i-1];
        arr[i] = arr[i] - arr[n-i-1];
        }

    //printing array in ascending order
    std::cout << "The Reversed array is : ";
    for(int i = 0 ; i < n ; i++){
        std::cout << arr[i] << "\t";
    }
    return 0;

}
