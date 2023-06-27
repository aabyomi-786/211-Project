#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <iostream>
#include <string>
#include <vector>

class GradeBook {
private:
    std::string file_name; //The name of the file to save the gradebook data
    std::vector<std::string> individualNames; //Vector storing the names of individual students
    std::vector<std::string> categories; //Vector storing the categories of grades
    std::vector<int> grades; //Vector storing the grades of individual students 
    std::vector<int> overall; //Vector storing the overal course grades

public:
    //Gradebook constructor
    GradeBook(std::string file_name, std::vector<std::string> individualNames, std::vector<std::string> categories, std::vector<int> grades, std::vector<int> overall);
    
    //Returns the grade of an individual student
    double IndiGrade(std::string name);
    
    //Returns the average grade for a specific category
    double CategoryGrade(std::string category);
    
    //Returns the course grade based on the specific option 
    double CourseGradeOption(int option);
    
    //Prints all individual grades 
    void printAll();
    
    //Changes the name of an individual student 
    void changeName(std::string oldName, std::string newName);
    
    // Changes the category of an individual student
    void changeCategory(std::string individualName, std::string newCategory);
    
    //Changes the grade of an individual student
    void changeGrade(std::string individualName, int newGrade);
    
    //Adds a new entry for an individual student
    void addNew(std::string newIndividual, std::string newCategory, int newGrade);
    
    //Saves gradebook data to a file 
    void save();
};

#endif 
