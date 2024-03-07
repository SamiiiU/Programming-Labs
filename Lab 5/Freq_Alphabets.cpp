#include<iostream>
#include<cstdlib>
#include<ctime>

/* Proble : write a program that calculates frequency of randomly generated alphabets*/

int main(){

	srand(time(0));
	char arr[100];
	int letter[26];

	for(int i =0 ; i <100 ; i++){
		arr[i] = 65 + rand()%26;
    }

	std::cout << std::endl;

	int count = 0;
	int alphabet = 65;
	for (int j=0 ; j <26 ; j++){
		for(int k=0 ; k <100 ; k++){
			if(arr[k]%alphabet == 0 ){
				count++;
			}
		}
        letter[j] = count;	
		std::cout << static_cast<char>(alphabet) << " is " <<letter[j] << " times " << "\n" ;
        count = 0;	
		alphabet++;
	}
	return 0;
}
