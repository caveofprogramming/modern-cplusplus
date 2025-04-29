#include <iostream>

/*
 * Write a program that asks the user to enter a number of seconds.
 * Print this in terms of days, hours, minutes and seconds.
 * 
 * Example: One day is 86400, so if the user enters 86403, the program
 * would print:
 * 
 * 1 days
 * 0 hours
 * 0 minutes
 * 3 seconds
 * 
 * One hour is 3600 seconds, so if the user enters 3662, the program would
 * print:
 * 
 * 1 days
 * 0 hours
 * 1 minutes
 * 2 seconds
 *
 */

int main() {
    std::cout << "Enter a timespan in seconds: " << std::flush;

    int input;
    std::cin >> input;
        
    int seconds = input;

    int days = seconds / (60 * 60 * 24);
    seconds %= 60 * 60 * 24;

    int hours = seconds / 3600;
    seconds %= 3600;

    int minutes = seconds / 60;
    seconds %= 60;

    std::cout << input << " seconds is: " << std::endl;
    std::cout << days << " days" << std::endl;
    std::cout << hours << " hours" << std::endl;
    std::cout << minutes << " minutes" << std::endl;
    std::cout << seconds << " seconds" << std::endl;

    int check = (days * 3600 * 24) + (hours * 3600) + (minutes * 60) + seconds;

    std::cout << "Check: " << check << std::endl;
}