#include <iostream>
#include<iomanip>
#include <float.h>
#include<math.h>
#include<stdio.h>
#include"gradebook.cpp"
#include"gradebook.h" 


using namespace std;

int main() {
    float Q1, Q2, Q3, ex1, ex2, ex3, final, quiz_total, exam_Total, proJect, pro1, pro2, finalGrade, Hw_total, quizPer, examPer, hwPer, pro_per, finalPer;
    float hw1, hw2, hw3, hw4, hw5, hw6, hw7, hw8, hw9, gradePoint;
    string student_name;
    cout<<"Enter your name:";
    cin>>student_name;
    cout << "Enter percentages for Homework, Quiz, Exam, Final, Projects: ";
    cin >> hwPer >> quizPer >> examPer >> finalPer >> pro_per;

    cout << "Enter grades for each Homework assignment (hw1, hw2, ..., hw9): ";
    cin >> hw1 >> hw2 >> hw3 >> hw4 >> hw5 >> hw6 >> hw7 >> hw8 >> hw9;

    cout << "Enter grades for each Quiz (Q1, Q2, Q3): ";
    cin >> Q1 >> Q2 >> Q3;

    cout << "Enter grades for each Exam (ex1, ex2, ex3): ";
    cin >> ex1 >> ex2 >> ex3;

    cout << "Enter grades for Final and each Project (final, pro1, pro2): ";
    cin >> final >> pro1 >> pro2;

    quiz_total = ((Q1 + Q2 + Q3) / 300) * quizPer;
    Hw_total = ((hw1 + hw2 + hw3 + hw4 + hw5 + hw6 + hw7 + hw8 + hw9) / 900) * hwPer;
    exam_Total = ((ex1 + ex2 + ex3) / 300) * examPer;
    finalGrade = (final / 100) * finalPer;
    proJect = ((pro1 + pro2) / 200) * pro_per;

    gradePoint = quiz_total + Hw_total + exam_Total + finalGrade + proJect;

  //  cout << student_name<< " Final grade is " <<??<< endl;

    return 0;
}
