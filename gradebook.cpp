#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "gradebook.h"

Gradebook::Gradebook(std::string file_name, std::vector<string> individualNames, std::vector<string> categories, std::vector<int> grades, std::vector<int> overall){
    this->file_name = file_name;
    this->individualNames = individualNames;
    this->categories = categories;
    this->grades = grades;
    this->overall = overall;
}
double IndiGrade(std::string name){
    for(int i = 0; individualNames.size(); i++){
        if(individualNames[i] == name){
            return grades[i];
        }
        return 0;
    }

}

double CategoryGrade(std::string category){
    double total = 0;
    int count = 0;
    for(int i = 0; categories.size(); i++) {
        if (categories[i] == category) {
            total += grades[i];
            count;
        }
    }
    if(count > 0){
        return/count;
    }
    else{
        return 0;
    }
}

double CourseGradeOption(int option){
    double total = 0;
    if(option == 1){
        for(int i = 0; categories.size(); i++) {
            total += grades[i];
        }
    }else if(option == 2) {
        for(int i = 0; categories.size(); i++){
            if(categories[i] != "Overall"){
                std::cout << categories[i] ": " << CategoryGrade(categories[i]) << std::endl;
                }
            }
            std::cout << "Course Overall: " << overall[0] << std::endl;
        } else if (option == 3){
            return overall[0];
    }
    return total;
}

void GradeBook::printAll(){
    for(int i = 0; i < individualNames.size(); i++){
        std::cout << individualNames[i] << ": " << grades[i] << std::endl;
    }
}

void Gradebook::changeName(std::string oldName, std::string newName){
    for(int i = 0; i < individualNames.size(); i++){
        if(individualNames[i] == oldName){
            individualNames[i] = newName;
            return;
        }
    }
}

void changeCategory(std::string individualNames, std::newCategory){
    for(int i = 0; i < individualNames.size(); i++){
        if(individualNames[i] == individualName{
            categories[i] = newCategory;
            return;
        }
    }
}

void changeGrade(std::string individualNames, int newGrade){
    for(int i = 0; i < individualNames.size(); i++){
        if(individualNames[i] == individualName{
                grades[i] = newGrade;
                return;
        }
    }
}

void addNew(std::string newIndividual, std::string newCategory, int newGrade){
    this->individualNames.push_back(newIndividual);
    this->categories.push_back(newCategory);
    this->grades.push_back(newGrade);

}

void save(){
    std::ofstream outputFile(file_name);
    if(outputFile.is_open()){
        for(int i = 0; i < individualNames.size(); i++){
            outputFile << individualNames[i] << "," << categories[i] << "," << grades[i] << std::endl;
        }
        outputFile.close();
    }else {
        std::cerr << "Unable to open" <<std::endl;
    }
}
