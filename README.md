# **CSC 212 Project Report**

Due: June 26th, 2023

## **Group Members and Contributions**


<table>
  <tr>
   <td>Team Member
   </td>
   <td>Contribution
   </td>
   <td>Started
   </td>
   <td>Completed
   </td>
  </tr>
  <tr>
   <td>Afolabi Abayomi
   </td>
   <td>Main.cpp file
   </td>
   <td>June 6th, 2023
   </td>
   <td>June 26th, 2023
   </td>
  </tr>
  <tr>
   <td>Alex Monteiro
   </td>
   <td>Gradebook.h file
   </td>
   <td>June 6th, 2023
   </td>
   <td>June 26th, 2023
   </td>
  </tr>
  <tr>
   <td>Kenny Damola
   </td>
   <td>Gradebook.cpp file
   </td>
   <td>June 6th, 2023
   </td>
   <td>June 26th, 2023
   </td>
  </tr>
  <tr>
   <td>Justin Keyes
   </td>
   <td>Report & Recording
   </td>
   <td>June 6th, 2023
   </td>
   <td>June 26th, 2023
   </td>
  </tr>
</table>


*All group members completed their own contribution

## **Walkthrough**

https://youtu.be/BDzCy8k9_3Q


## **Program Summary**

This program calculates and outputs a student's grades based on the category of the users choosing. The user can receive all grades in their respective categories and the course overall, only the course totals and overall, or just the overall grade. The user can also write a new entry into the input file, change a student's name, the grade category, or grade, and save all changes. The program utilizes a gradebook class to maximize efficiency and increase code reusability. We divided the program into a main.cpp file, a gradebook.cpp file, and a gradebook.h header file. Specific purposes of each file will be listed below. 

## **Compilation and Runtime Instructions**

This program will compile and run on any modern IDE of your choosing. If you do not already have an IDE, please watch [this video](https://www.youtube.com/watch?v=pGdDt_Kw76A) to install and setup the CLion IDE by JetBrains. 

Before starting, please make sure that you have downloaded and extracted all 3 project files and read through the README. Ensure that your text file containing student names and grades are individually in this order: Student name, HW grades, quiz grades, exam grades, and project grades. The final project grade must also be before the other project grades. 

Copy and paste the following line into your terminal to compile and run:

g++ main.cpp gradebook.cpp gradebook.h -o prog && ./prog 

Compile time will be near-instant, however may vary based on the size of your file. 

## **Possible function calls**

IndiGrade(STRING Students name) - Returns grade of a specific student

CategoryGrade(STRING Category name) - Returns average grade of a specific category

CourseGradeOption(INT Option) - Returns a grade based on a specified option

printAll() - Prints all individual grades for each student

changeName(STRING Old name, STRING New name - Changes the name of a student

changeCategory(STRING name, STRING new category) - Changes the category of an individual student

changeGrade(STRING name, INT new grade) - Changes a grade of an individual student

addNew(STRING name, STRING category, INT ) - Adds an entry for a new student

save() - Saves gradebook data

## **Purpose of each program file**

Main.cpp - Read in users file data, get grades from specific categories, call to gradebook.cpp file with the file data.

Gradebook.cpp - Defines and runs all functions that can be called in the gradebook class.

Gradebook.h - Creates the gradebook class and vectors for students names, grades, and category percentages. Declares all functions that can be used in gradebook.cpp, linking them to the class. 

## **Main.cpp Pseudocode**

//Include Libraries, gradebook.cpp and gradebook.h

Int main

	DECLARE String for the filename

	COUT Message to enter filename

	CIN the filename

	OPEN the file

	IF the file does not open

		COUT Error opening file

		END Program

	DECLARE Vector for individuals names

DECLARE Vector for categories

DECLARE Vector for grades

DECLARE Vector for individuals names

WHILE we get the line on the input file

	DECLARE String for name and category

	DECLARE Int for the grade

	IF we continue to input grades

		PUSH BACK all vectors

	CLOSE file

	CALL Gradebook file to perform further operations  

## **Gradebook.h pseudocode **

CLASS GradeBook

    PRIVATE:

        file_name: STRING                     // Name of the textile

        individualNames: VECTOR of STRING      // Vector to store individual assignment names

        categories: VECTOR of STRING           // Vector to store assignment categories

        grades: VECTOR of INTEGER              // Vector to store assignment grades

        overall: VECTOR of INTEGER             // Vector to store overall course grades

    PUBLIC:

        GradeBook(file_name, individualNames, categories, grades, overall)

            // Constructor that initializes the GradeBook object with the provided textile name and assignment data

        FUNCTION IndiGrade(IndividualNames)

            // Get the grade for an individual assignment by providing the assignment name

            // Implementation reads the corresponding grade from the textile

            READ file_name

            FIND IndividualNames in the textile and RETURN the grade

        FUNCTION CategoryGrade(categories)

            // Get the grade for assignments of a specific category by providing the category type

            // Implementation reads the corresponding grades from the textile and calculates the average

            READ file_name

            FIND categories in the textile

            CALCULATE the average of the grades belonging to the category

            RETURN the average grade

        FUNCTION CourseGradeOption(options)

            // Get the overall course grade based on the given option

            // Implementation reads the corresponding grades from the textile and calculates the overall grade

            IF options EQUALS 1

                // Calculate the overall grade based on all assignments

                READ file_name

                CALCULATE the overall grade based on all grades in the textile

                RETURN the overall grade

            ELSE IF options EQUALS 2

                // Calculate the overall grade based on the average of each category

                READ file_name

                CALCULATE the average grade for each category

                CALCULATE the overall grade based on the average grades

                RETURN the overall grade

            ELSE IF options EQUALS 3

                // Calculate only the course overall

                READ file_name

                FIND the course overall grade in the textile

                RETURN the course overall grade

            ELSE

                // Invalid option

                PRINT "Invalid option"

                

        FUNCTION printAll()

            // Function to print all assignment names and scores

            READ file_name

            PRINT all assignment names and scores from the textile

        FUNCTION changeName(oldName, newName)

            // Function to change the name of an assignment

            READ file_name

            FIND oldName in the textile and REPLACE with newName

        FUNCTION changeCategory(individualNames, newCategory)

            // Function to change the category of an assignment

            READ file_name

            FIND individualNames in the textile and UPDATE the category to newCategory

        FUNCTION changeGrade(individualNames, newGrade)

            // Function to change the grade of an assignment

            READ file_name

            FIND individualNames in the textile and UPDATE the grade to newGrade

        FUNCTION addNew(newIndividual, newCategory, newGrade)

            // Function to add a new grade for an assignment

            READ file_name

            APPEND newIndividual, newCategory, and newGrade to the textile

        FUNCTION save()

            // Function to save any changes made

            // Implement saving functionality to update the textile with the modified data

END CLASS

## **Gradebook.cpp pseudocode**

//Include Libraries and gradebook.h

//Gradebook constructor

CONSTRUCTOR Gradebook (filename, vectors for individual names, grades, overalls, and categories)

	THIS pointer filename

THIS pointer individual name vector

THIS pointer grades vector

THIS pointer overall grades vector

THIS pointer categories vector

//Returns the grade of an individual student

CLASS Gradebook FUNCTION IndiGrade(STRING name)

	FOR the length of individual name vector

		IF the name is the same as a name in the individual name vector

			Return the grade of that students name

//Returns the average grade for a specific category

CLASS Gradebook FUNCTION CategoryGrade(STRING category)

	Create Total and count variables set to 0

	FOR the length of the categories vector

		IF the category is the same as one in the categories vector

			Add grade at i to Total


        Increment count

	IF Count is greater than 0

		Return Count

	ELSE

		Return 0

//Returns the course grade based on the specified option

CLASS Gradebook FUNCTION CourseGradeOption(INT option)

	Create Double Total = 0

	IF Option equals 1

		FOR the length of the categories vector

			Add grades at i to the total

	ELSE IF Option equals 2

		FOR the length of the categories vector

			IF categories at i is not “Overall”

				COUT the category and call the CategoryGrade function using categories at i

			COUT the course overall grade

	ELSE IF Option equals 3

		Return overall grade

//Print all individual grades

CLASS Gradebook FUNCTION printAll

	FOR the length of the individual names vector

		COUT the individuals names and their grade

//Change the name of an individual student

CLASS Gradebook FUNCTION changeName(STRING oldname, STRING newname)

	FOR the length of the individual names vector

		IF the oldname matches an individual name at i

			Individual name vector at i equals newname

//Change the category of an individual student

CLASS Gradebook FUNCTION changeCategory(STRING name, STRING newcategory)

	FOR the length of the individual names vector 

		IF the name matches a name in the individual names vector

			Categories vector at i equals newcategory

//Change the grade of an individual student

CLASS Gradebook FUNCTION changeGrade(STRING name, FLOAT grade)

	FOR the length of the individual names vector

		IF the name matches a name in the individual names vector

			Grades vector at i equals grade

//Adds a new entry for an individual student 

CLASS Gradebook FUNCTION addNew(STRING newInd, STRING category, FLOAT grade) \
	THIS pointer Individual names vector, pushback newInd

	THIS pointer Categories vector, pushback category

	THIS pointer Grades name vector, pushback grade

//Saves gradebook data

CLASS Gradebook FUNCTION save()

	OFSTREAM to write to file

	IF file is OPEN

		FOR the size of the individual names vector

			COUT the name, category and grade of all students

		CLOSE File

	ELSE

		COUT “File unavailable”
