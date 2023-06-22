#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include <iostream>
#include <string>
#include <vector>


class GradeBook{
    private:
        std::string file_name; //Name of the file
        std::vector<string> individualNames; //vector to store individual names
        std::vector<string> categories;// vector to store categories
        std::vector<int> grades; // vector to store grades
        std::vector<int> overall; //

    public:
        GradeBook(std::string file_name,std::vector<string> individualNames,std::vector<string> categories, std::vector<int> grades, std::vector<int> overall);
        //Constructor that initializes the gradebook with the filename and assignment data

        double IndiGrade(std::string IndividualNames); //get the grade for an indiviaul assignment
        double CategoryGrade(std::string categories);// get the grades of assignments of a specific category
        double CourseGradeOption(int options); //Function to get all grades within their respective categories and a course overall, only category totals and course overall or only the course overall



        void printAll();//Function to print all assignment names and scores
        void changeName(std::string oldName, std::string newName);//function to change the name of an assignment using old and new name
        void changeCategory(std::string individualNames, std::newCategory);//change category of assignment using name and new category
        void changeGrade(std::string individualNames, int newGrade); // change grade of the assignment using name and new grade
        void addNew(std::string newIndividual, std::string newCategory, int newGrade);// add a new grade for an assignment
        void save();//save any changes made



};

#endif //GRADEBOOK_H

