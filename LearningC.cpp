#include <iostream>

struct student {
    std::string name;
    double gpa;
    bool enrolled;
};

int main() {
    student student1;
    student1.name = "Spongebob";
    student1.gpa = 3.2;
    student1.enrolled = true;

    std::cout << "The student's name is: " << student1.name << '\n';
    std::cout << "The student's GPA is: " << student1.gpa << '\n';
    std::cout << "Is the student enrolled?: " << student1.enrolled << '\n';

    student student2;
    student2.name = "Patrick";  // Fix: Use student2 instead of student1
    student2.gpa = 2.1;
    student2.enrolled = true;

    std::cout << "The student's name is: " << student2.name << '\n';
    std::cout << "The student's GPA is: " << student2.gpa << '\n';
    std::cout << "Is the student enrolled?: " << student2.enrolled << '\n';

    student student3;
    student3.name = "Squidward";  // Fix: Use student3 instead of student1
    student3.gpa = 1.5;
    student3.enrolled = false;

    std::cout << "The student's name is: " << student3.name << '\n';
    std::cout << "The student's GPA is: " << student3.gpa << '\n';
    std::cout << "Is the student enrolled?: " << student3.enrolled << '\n';

    return 0;
}
