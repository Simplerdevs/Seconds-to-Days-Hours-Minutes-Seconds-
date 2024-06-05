#include <iostream>

using namespace std;

int main()

{
    /* creat a program to calculate number of second as inputs and change it to  days|hours|minutes|seconds  then print it on screen */

    // input
    int TotalSecond = 193535;

    int second_per_day = 24 * 60 * 60;
    int second_per_hour = 60 * 60;
    int second_per_minute = 60;

   // Calculation 
    int number_of_day = floor(TotalSecond / second_per_day);
    int remainder = TotalSecond % second_per_day;

    int number_of_hour = floor(remainder / second_per_hour);
    remainder = remainder % second_per_hour;

    int number_of_minute = floor(remainder / second_per_minute);
    remainder = remainder % second_per_minute;

    long number_of_second = remainder;


   // Outputs
    cout << number_of_day << ":" << number_of_hour << ":" << number_of_minute << ":" << number_of_second << endl;



    return 0;
    // created by @ilyes_trabelsi
}