#include<iostream>
#include<cstdlib>
#include<ctime>
int main(){
	  int finding_num ;
	  bool find= 0;
	  int arr[10];
	  srand(time(0));
	for(int i = 0 ; i < 10 ;i++){
		arr[i] = rand()%100;
	}
	
	std::cout << "\nEnter the number you want to find : ";
	std::cin >> finding_num;
	
	for(int i= 0 ; i < 10 ; i++){
		if(arr[i] == finding_num){
			std::cout << "The num " << arr[i] << " is at index " <<i << "\n";
			find = 1;
			break;
		}
	}
	
	if(find==0){
		std::cout << "Num not found ";
	}
	
}
