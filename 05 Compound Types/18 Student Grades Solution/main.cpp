/*
* Create a program that asks for the names, ages and grades
* of students.
* 
* Each student can have one of three grades: p (PASS), f (FAIL)
* or (h) HONOURS.
* 
* The program should store data for up to 4 students.
* 
* At any time you can stop entering students by pressing s.
* 
* Store collected data in an array of structs.
* Use an enum class to store different grades.
* 
* After all data is collected, print all collected data.
*/
#include <iostream>
#include <string>

int main() {
    enum class Grade { PASS, FAIL, HONOURS };
    
    struct Student {
        std::string name;
        int age;
        Grade grade;
    };

    Student students[4];
    int count = 0;

    while (count < 4) {
        std::string name;
        int age;
        char gradeChar;

        std::cout << "Enter student name (or 's' to stop): ";
        std::cin >> name;

        if (name == "s") 
            break;

        std::cout << "Enter age: ";
        std::cin >> age;

        if(std::cin.fail()) {
            std::cout << "Invalid age." << std::endl;
            break;
        }

        std::cout << "Enter grade (p: PASS, f: FAIL, h: HONOURS): ";
        std::cin >> gradeChar;

        Grade grade;
        switch (gradeChar) {
            case 'p': grade = Grade::PASS; 
                break;
            case 'f': grade = Grade::FAIL; 
                break;
            case 'h': grade = Grade::HONOURS; 
                break;
            default: grade = Grade::FAIL;  // Default if input is incorrect
        }

        students[count] = {name, age, grade};
        count++;
    }

    std::cout << "\nCollected student data:\n";

    for (int i = 0; i < count; i++) {
        std::cout << "Name: " << students[i].name << ", Age: " << students[i].age << ", Grade: ";

        switch (students[i].grade) {
            case Grade::PASS: std::cout << "PASS"; break;
            case Grade::FAIL: std::cout << "FAIL"; break;
            case Grade::HONOURS: std::cout << "HONOURS"; break;
        }
        std::cout << std::endl;
    }

    return 0;
}
