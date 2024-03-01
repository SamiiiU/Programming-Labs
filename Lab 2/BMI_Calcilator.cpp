#include<iostream>
#include<cmath>

int main(){
    float weight , height, BMI;
    //Input
    std::cout << "Enter Your Height in meters : ";
    std::cin >> height;

    std::cout << "\nEnter your body weight in KG : ";
    std::cin >> weight;

    //Calculations
    BMI = weight/pow(height,2);

    //Output
    std::cout << "\nThe calculated BMI is : " << BMI << " ";
    
    if (BMI < 18.5)
    std::cout << "and you are underweight";
    
    else if (BMI > 18.5 && BMI < 24.9)
    std::cout << "and you are normal";
   
    else if (BMI > 24.9 && BMI < 30.0)
    std::cout << "and you are overweight";
    
    else
    std::cout << "and you are Obese";
    return 0;
}
