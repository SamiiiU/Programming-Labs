#include<iostream>

int main(){
    int r ;

    std::cout << "Enter the num of rows : ";
    std::cin >> r;

    for ( int i = 1 ; i < r ; i++){
        for (int j = r ; j > i ; j--){
            std::cout << " ";
        }

        for (int k = 1 ; k <= i ; k++){
            std::cout << k ;
        }

        for (int rev = i - 1 ; rev > 0 ;  rev--){
            std::cout << rev;
        }
        std::cout << "\n";
    }
  return 0;
}
