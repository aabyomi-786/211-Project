#include <iostream>
#include <fstream>
#include <vector>
#include "gradebook.h"

//Gradebook constructor
GradeBook::GradeBook(std::string file_name, std::vector<std::string> individualNames, std::vector<std::string> categories, std::vector<int> grades, std::vector<int> overall) {
    this->file_name = file_name;
    this->individualNames = individualNames;
    this->categories = categories;
    this->grades = grades;
    this->overall = overall;
}

//Returns the grade of an individual student
double GradeBook::IndiGrade(std::string name) {
    for (int i = 0; i < individualNames.size(); i++) {
        if (individualNames[i] == name) {
            return grades[i];
        }
    }
    return 0;
}

//Returns the average grade for a specific category
double GradeBook::CategoryGrade(std::string category) {
    double total = 0;
    int count = 0;
    for (int i = 0; i < categories.size(); i++) {
        if (categories[i] == category) {
            total += grades[i];
            count++;
        }
    }
    if (count > 0) {
        return total / count;
    }
    else {
        return 0;
    }
}

//Returns the course grade based on the specified option
double GradeBook::CourseGradeOption(int option) {
    double total = 0;
    if (option == 1) {
        //Calculates the total grade by summing all individual grades
        for (int i = 0; i < categories.size(); i++) {
            total += grades[i];
        }
    }
    else if (option == 2) {
        //Prints each category grade(excluding Overall) and the overall course grade
        for (int i = 0; i < categories.size(); i++) {
            if (categories[i] != "Overall") {
                std::cout << categories[i] << ": " << CategoryGrade(categories[i]) << std::endl;
            }
        }
        std::cout << "Course Overall: " << overall[0] << std::endl;
    }
    else if (option == 3) {
        //Returns the overall course grade
        return overall[0];
    }
    return total;
}

//Print all individual grades
void GradeBook::printAll() {
    for (int i = 0; i < individualNames.size(); i++) {
        std::cout << individualNames[i] << ": " << grades[i] << std::endl;
    }
}

//Change the name of an invdividual student 
void GradeBook::changeName(std::string oldName, std::string newName) {
    for (int i = 0; i < individualNames.size(); i++) {
        if (individualNames[i] == oldName) {
            individualNames[i] = newName;
            return;
        }
    }
}

//Change the category of an individual student 
void GradeBook::changeCategory(std::string individualName, std::string newCategory) {
    for (int i = 0; i < individualNames.size(); i++) {
        if (individualNames[i] == individualName) {
            categories[i] = newCategory;
            return;
        }
    }
}

//Change the grade of an individual student 
void GradeBook::changeGrade(std::string individualName, int newGrade) {
    for (int i = 0; i < individualNames.size(); i++) {
        if (individualNames[i] == individualName) {
            grades[i] = newGrade;
            return;
        }
    }
}

//Adds a new entrt for an individual student 
void GradeBook::addNew(std::string newIndividual, std::string newCategory, int newGrade) {
    individualNames.push_back(newIndividual);
    categories.push_back(newCategory);
    grades.push_back(newGrade);
}

//Saves gradebook data
void GradeBook::save() {
    std::ofstream outputFile(file_name);
    if (outputFile.is_open()) {
        for (int i = 0; i < individualNames.size(); i++) {
            outputFile << individualNames[i] << "," << categories[i] << "," << grades[i] << std::endl;
        }
        outputFile.close();
    }
    else {
        std::cerr << "Unable to open file: " << file_name << std::endl;
    }
}
