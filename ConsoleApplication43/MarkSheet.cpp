#include "MarkSheet.h"
#include <iomanip>
#include <iostream>

using namespace std;

MarkSheet::MarkSheet(const Student& student)
    : student_(student), total_marks_(0) {
    for (int i = 0; i < student.num_subjects; ++i) {
        marks_data_.emplace_back(student.marks[i].subject, student.marks[i].score);
        total_marks_ += student.marks[i].score;
    }
}

void MarkSheet::display() const {
    cout << "Mark Sheet for Student " << student_.name << " (ID: " << student_.student_id << "):\n";
    cout << "---------------------------------------------\n";
    cout << "Subject\t\tScore\n";
    cout << "---------------------------------------------\n";
    for (const auto& mark : marks_data_) {
        cout << setw(10) << left << mark.first << "\t" << mark.second << endl;
    }
    cout << "---------------------------------------------\n";
    cout << "Total Marks: " << total_marks_ << endl;
}

