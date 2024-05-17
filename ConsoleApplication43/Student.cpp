#include "Student.h"
#include <iomanip>
using namespace std;
void Student::add_marks(const string& subject, int score) {
    if (num_subjects < MAX_SUBJECTS) {
        marks[num_subjects++] = { subject, score };
    }
}

void Student::display_grades() const {
    for (int i = 0; i < num_subjects; ++i) {
        cout << marks[i].subject << ": " << marks[i].score << endl;
    }
}


bool Student::verify_password(const string& pwd) const {
    return password == pwd;
}