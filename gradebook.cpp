#include "gradebook.h"

GradeBook::GradeBook(const std::string& filename,
                     const std::vector<std::string>& individualNames,
                     const std::vector<std::string>& categories,
                     const std::vector<int>& grades,
                     const std::vector<int>& overall)
    : filename(filename),
      individualNames(individualNames),
      categories(categories),
      grades(grades),
      overall(overall) {}

double GradeBook::IndiGrade(const std::string& deliverable) const {
    int index = findDeliverableIndex(deliverable);
    if (index == -1) {
        std::cerr << "Deliverable not found: " << deliverable << std::endl;
        return 0.0;
    }

    return grades[index];
}

double GradeBook::CategoryGrade(const std::string& category) const {
    double categoryTotal = 0.0;
    int count = 0;

    for (size_t i = 0; i < categories.size(); ++i) {
        if (categories[i] == category) {
            categoryTotal += grades[i];
            ++count;
        }
    }

    return categoryTotal / count;
}

void GradeBook::printAll() const {
    for (size_t i = 0; i < individualNames.size(); ++i) {
        std::cout << "Individual: " << individualNames[i] << std::endl;
        std::cout << "Category: " << categories[i] << std::endl;
        std::cout << "Grade: " << grades[i] << std::endl;
        std::cout << std::endl;
    }

    double overallGrade = 0.0;
    for (int grade : overall) {
        overallGrade += grade;
    }
    overallGrade /= overall.size();

    std::cout << "Overall Grade: " << overallGrade << std::endl;
}

void GradeBook::CourseGradeOption(int option) const {
    double courseGrade = 0.0;
    switch (option) {
        case 1:  // Average of all grades
            for (int grade : overall) {
                courseGrade += grade;
            }
            courseGrade /= overall.size();
            break;
        case 2:  // Weighted average of categories
            double categoryWeight = 0.0;
            for (const std::string& category : categories) {
                if (category == "Assignments") {
                    categoryWeight += 0.4;
                } else if (category == "Labs") {
                    categoryWeight += 0.2;
                } else if (category == "Projects") {
                    categoryWeight += 0.3;
                } else if (category == "Exams") {
                    categoryWeight += 0.5;
                }
            }

            double weightedTotal = 0.0;
            for (size_t i = 0; i < individualNames.size(); ++i) {
                if (categories[i] == "Assignments") {
                    weightedTotal += grades[i] * 0.4;
                } else if (categories[i] == "Labs") {
                    weightedTotal += grades[i] * 0.2;
                } else if (categories[i] == "Projects") {
                    weightedTotal += grades[i] * 0.3;
                } else if (categories[i] == "Exams") {
                    weightedTotal += grades[i] * 0.5;
                }
            }

            courseGrade = weightedTotal / categoryWeight;
                       return;
    }

    std::cout << "Course Grade: " << courseGrade << std::endl;
}

void GradeBook::changeName(const std::string& deliverable, const std::string& newName) {
    int index = findDeliverableIndex(deliverable);
    if (index == -1) {
        std::cerr << "Deliverable not found: " << deliverable << std::endl;
        return;
    }

    individualNames[index] = newName;
    std::cout << "Name changed successfully.\n";
}

void GradeBook::changeCategory(const std::string& deliverable, const std::string& newCategory) {
    int index = findDeliverableIndex(deliverable);
    if (index == -1) {
        std::cerr << "Deliverable not found: " << deliverable << std::endl;
        return;
    }

    categories[index] = newCategory;
    std::cout << "Category changed successfully.\n";
}

void GradeBook::changeGrade(const std::string& deliverable, int newGrade) {
    int index = findDeliverableIndex(deliverable);
    if (index == -1) {
        std::cerr << "Deliverable not found: " << deliverable << std::endl;
        return;
    }

    grades[index] = newGrade;
    std::cout << "Grade changed successfully.\n";
}

void GradeBook::addNew(const std::string& name, const std::string& category, int grade) {
    individualNames.push_back(name);
    categories.push_back(category);
    grades.push_back(grade);
    overall.push_back(grade);

    std::cout << "New grade added successfully.\n";
}

int GradeBook::findDeliverableIndex(const std::string& deliverable) const {
    for (size_t i = 0; i < individualNames.size(); ++i) {
        if (individualNames[i] == deliverable) {
            return i;
        }
    }
    return -1;
}

void GradeBook::save() const {
    std::ofstream outputFile(filename);

    if (!outputFile) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return;
    }

    for (size_t i = 0; i < individualNames.size(); ++i) {
        outputFile << individualNames[i] << " " << categories[i] << " " << grades[i] << std::endl;
    }

    outputFile.close();

    std::cout << "Changes saved to file: " << filename << std::endl;
}

