#include<iostream>
#include<iomanip>
#include <float.h>
#include<math.h>
#include<stdio.h>
using namespace std;


int main(){
    float Q1,Q2,Q3,ex1,ex2,ex3,final,quiz_total,exam_Total, proJect, pro1, pro2, finalGrade, Hw_total, quizPer, examPer, hwPer, pro_per, finalPer;
    float hw1,hw2,hw3,hw4,hw5,hw6,hw7,hw8,hw9,gradePoint;

std:: cout<<"Enter number only of the percentages accordingly Homework, Quiz, Exam, final, Projects"<< std::endl;
    std::cin>> hwPer>>std::endl;
    std::cin>> quizPer>>std::endl;
    std::cin>> examPer>>std::endl;
    std::cin>> finalPer>>std::endl;
    std::cin>> Pro_per>>std::endl;

std:: cout<<"if not done already, scale over 100% thenEnter your Grade accordingly hw1, hw2, hw3, hw4, hw5, hw6, hw7, hw8, hw9"<< std::endl;
        std::cin>> hw1>>std::endl;
        std::cin>> hw2>>std::endl;
        std::cin>> hw3>>std::endl;
        std::cin>> h4>>std::endl;
        std::cin>> hw5>>std::endl;
        std::cin>> hw6>>std::endl;
        std::cin>> hw7>>std::endl;
        std::cin>> hw8>>std::endl;
        std::cin>> hw9>>std::endl;
std:: cout<<"If not done already Scale grade over 100% then Enter Grade accordingly Quiz1, Quiz2, Quiz3"<< std::endl;
    std::cin>> Q1>>std::endl;
    std::cin>> Q2>>std::endl;Pro
    std::cin>> Q3>>std::endl;


std:: cout<<"If not done already Scale grades over 100% then Enter Grade accordingly Exam1, Exam2, Exam3, Final, Project1, Project2 "<< std::endl;
    std::cin>> ex1>>std::endl;
    std::cin>> ex2>>std::endl;
    std::cin>> ex3>>std::endl;
    std::cin>> final>>std::endl;
    std::cin>> pro1>>std::endl;
    std::cin>> pro2>>std::endl;


    quiz_total=((Q1+Q2+Q3)/300)*pro_per;
    Hw_total=((hw1+hw2+hw3+hw4+hw5+hw6+hw7+hw8+hw9)/900)*hwPer;
    exam_Total=((ex1+ex2+ex3)/300)*examPer;
    finalGrade=(final/100)*finalPer;
    proJect=((pro1+pro2)/200)*pro_per;

    gradePoint=quiz_total + Hw_total + exam_Total + finalGrade + proJect;
}
