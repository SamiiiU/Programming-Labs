#include<iostream>
// Merging Of two arrays in sorted way

int main(){
    //size declaration
    int size1 ,size2 , size3;
    //size input
    std::cout << "Enter the size of array 1 : ";
    std::cin >> size1;
    std::cout << "Enter the size of array 2 : ";
    std::cin >> size2;

    if(size1 > size2)
        size3=size1;
    else
        size3=size2;

    std::cout << size3 << "\n";
    //array declaration
    int A[size1] , B[size2] , C[size3];

    //input of A
    std::cout << "\nEnter the elements of A ";
    for(int i=0 ; i<size1 ; i++){
        std::cin >> A[i];
    }    
    
    //input of B
    std::cout << "\nEnter the elements of B";
    for(int i=0 ; i<size2 ; i++){
        std::cin >> B[i];
    }  
    
    int i,j,k;
    i=j=k=0;

    //sorting
    while( i < size1 && j < size2){
        if(A[i] < B[j]){
            C[k] = A[i];
            i++;
        }
        else{
            C[k] = B[j];
            j++;
        }
        k++;
    }
    //remaining C filling
    while( i != size1 || j!= size2){

        if(i<size1){
            C[k]=A[i];
            i++;
        }
        else{
            C[k] = B[j];
            j++;
        }
        k++;
    }
    //output C
    for(int f = 0 ; f < size3 ; f++){
        std::cout << C[f] << "  ";
    }

} 
