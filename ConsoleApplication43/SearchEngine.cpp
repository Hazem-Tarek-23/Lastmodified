#include "SearchEngine.h"

using namespace std;

SearchEngine::SearchEngine(Student students[], int num_students)
    : students(students), num_students(num_students) {}

Student* SearchEngine::search_student_record(const string& search_term) {
    for (int i = 0; i < num_students; ++i) {
        if (students[i].student_id == search_term || students[i].name == search_term) {
            return &students[i];
        }
    }
    return nullptr;
}

