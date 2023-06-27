#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <iomanip>

class GradeBook {
public:
    GradeBook(const std::string& filename,
              const std::vector<std::string>& individualNames,
              const std::vector<std::string>& categories,
              const std::vector<int>& grades,
              const std::vector<int>& overall);

    double IndiGrade(const std::string& deliverable) const;
    double CategoryGrade(const std::string& category) const;
    void printAll() const;
    void CourseGradeOption(int option) const;
    void changeName(const std::string& deliverable, const std::string& newName);
    void changeCategory(const std::string& deliverable, const std::string& newCategory);
    void changeGrade(const std::string& deliverable, int newGrade);
    void addNew(const std::string& name, const std::string& category, int grade);
    void save() const;

private:
    std::string filename;
    std::vector<std::string> individualNames;
    std::vector<std::string> categories;
    std::vector<int> grades;
    std::vector<int> overall;

    int findDeliverableIndex(const std::string& deliverable) const;
};

#endif  // GRADEBOOK_H
