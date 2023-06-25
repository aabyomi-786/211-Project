#include <iostream>
#include <string>
#include <vector>
#include "gradebook.h"


//Implement constructor for class Deliverable:
    //Set the values of name, category, and grade
    
Gradebook::Gradebook(std::string file_name, std::vector<string> individualNames, std::vector<string> categories, std::vector<int> grades, std::vector<int> overall){
    this->file_name = file_name;
    this->individualNames = individualNames;
    this->categories = categories;
    this->grades = grades;
    this->overall = overall;
}
    
//Implement method add_deliverable for class Course:
    //Create a new Deliverable object with the given name,category, and grade
    //Add the new Deiverable object to the deliverables array
    
double IndiGrade(std::string name){

}

    
//Implement method get_grade for class Course:
    //Iterate over each deliverable in the deliverables array
    //If the name of the deliverable matches the given name 
        //Return the grade of the deliverable
    //Return -1 to indicate that the deliiverable was not found
    

    
//Implement method get_category for class Course:
    //Set total to 0
    //Iterate over each deliverable in the deliverables array
        //If the category of the deliverable matches the given category 
            //Add the grade of the deliverable to total
        //Return total 

double CategoryGrade(std::string category){

}

double CourseGradeOption(int option){

}

void Gradebook::changeName(std::string oldName, std::string newName){

}

void changeCategory(std::string individualNames, std::newCategory){

}
// Implement method Semester_grade for class Course:
//     Set categoryWeight to 0.4
//     Set individualWeight to 0.6
//     Set categoryTotal to 0
//     Iterate over each deliverable in the deliverables array
//         Add the grade of the deliverable to categoryTotal
//     Multiply categoryTotal by categoryWeight
//     Set individualTotal to 0
//     Iterate over each deliverable in the deliverables 
//         Add the grade of the deliverable to individualTotals
//     Multiply individualTotal by individualTotal 
//     Return the sum of categoryTotal and individualTotals
    
// Implement method updte_grade for class Course:
//     Iterate over each deliverable in the deliverables array
//         If the name of the dilverable matches the given name 
//         Set the grade of the deliverable to newGrade
//         Break

void changeGrade(std::string individualNames, int newGrade){

}

void addNew(std::string newIndividual, std::string newCategory, int newGrade){

}

void save(){

}