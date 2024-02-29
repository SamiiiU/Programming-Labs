#include<iostream>
#include<ctime>

/*Problem : Write a program that displays the current time in GMT (Greenwich Mean Time) in the format
hour:minute:second, such as 13:19:8.*/

int main(){

    //Calculations
    time_t presesent_time;
    presesent_time = time(0);

    int sec_passed = presesent_time;

    int seconds = sec_passed % 60;
    int minutes = sec_passed / 60 % 60;
    int hours = sec_passed / 3600 % 60;

    //Outputs
    std::cout << "(" << hours << ":" << minutes << ":" << hours << ") Current GMT";
}
