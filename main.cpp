#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <iomanip>
#include "gradebook.h"

using namespace std;

int main() {
    string filename;
    cout << "Enter the name of the input file: ";
    cin >> filename;

    ifstream inputFile(filename);

    if (!inputFile) {
        cerr << "Error opening file: " << filename << endl;
        return 1;
    }

    // Read data from the file
    vector<string> individualNames;
    vector<string> categories;
    vector<int> grades;
    vector<int> overall;

    string line;
    while (getline(inputFile, line)) {
        stringstream ss(line);
        string name;
        string category;
        int grade;

        ss >> name;

        while (ss >> category && ss >> grade) {
            individualNames.push_back(name);
            categories.push_back(category);
            grades.push_back(grade);
        }
    }

    inputFile.close();

    GradeBook gradeBook(filename, individualNames, categories, grades, overall);

    // Evaluate individual deliverables
    double assignment1Grade = gradeBook.IndiGrade("Assignment 1");
    cout << "Assignment 1: " << assignment1Grade << endl;

    // Gets grades from a specified category and the category total
    double assignmentsTotal = gradeBook.CategoryGrade("Assignments");
    cout << "Assignments Total: " << assignmentsTotal << endl;

    // Get all grades in their respective categories and a course overall
    gradeBook.printAll();
    gradeBook.CourseGradeOption(2);

    // Make the name, grade, and category changes
    gradeBook.changeName("Assignment 1", "New Assignment");
    gradeBook.changeCategory("New Assignment", "New Category");
    gradeBook.changeGrade("New Assignment", 95);
    gradeBook.addNew("Assignment 3", "Assignments", 80);

    // Save the changes to the input file, which outputs all results
    gradeBook.save();

    return 0;
}
