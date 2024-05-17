#ifndef SEARCHENGINE_H
#define SEARCHENGINE_H

#include <string>
#include "Student.h"

class SearchEngine {
public:
    SearchEngine(Student students[], int num_students);
    Student* search_student_record(const std::string& search_term);

private:
    Student* students;
    int num_students;
};

#endif 
