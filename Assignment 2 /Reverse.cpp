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
        std::cin>>arr[i];
    }
    
    //checking array
    for(int  i= 0 ; i < n - 1 ; i++){
        for(int j = 1+i ; j < n ; j++){
            if(arr[i] > arr[j]){
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
    //printing array in ascending order
    for(int i = 0 ; i < n ; i++){
        std::cout << arr[i] << "\t";
    }
    return 0;
}
