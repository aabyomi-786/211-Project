#include <iostream>
#include<iomanip>
#include <fstream>
#include"gradebook.h"
using namespace std;

int main() {
    // Example usage
    std::vector<std::string> individualNames = {"Assignment 1", "Assignment 2"};
    std::vector<std::string> categories = {"Assignments", "Exams"};
    std::vector<int> grades = {90, 85};
    std::vector<int> overall = {88};

    GradeBook gradeBook("grades.txt", individualNames, categories, grades, overall);

    // Evaluate individual deliverables
    double assignment1Grade = gradeBook.IndiGrade("Assignment 1");
    std::cout << "Assignment 1: " << assignment1Grade << std::endl;

    // Gets grades from a specified category and the category total
    double assignmentsTotal = gradeBook.CategoryGrade("Assignments");
    std::cout << "Assisgnments Total: " << assignmentsTotal << std::endl;

    // Get all grades in their respective categories and a course overalls
    gradeBook.printAll();
    gradeBook.CourseGradeOption(2);

    // Make the name, grade and cateory changes
    gradeBook.changeName("Assignment 1", "New Assignment");
    gradeBook.changeCategory("New Assignment", "New Category");
    gradeBook.changeGrade("New Assignment", 95);
    gradeBook.addNew("Assignment 3", "Assignments", 80);

    // Save the changes to the input file which outputs all results
    gradeBook.save();

    return 0;
}
