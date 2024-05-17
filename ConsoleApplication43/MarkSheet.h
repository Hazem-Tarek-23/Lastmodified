#ifndef MARKSHEET_H
#define MARKSHEET_H

#include "Student.h"
#include <vector>
#include <string>
using namespace std;

class MarkSheet {
public:
    MarkSheet(const Student& student);
    void display() const;
    void generate();

private:
    const Student& student_;
    vector<pair<string, int>> marks_data_;
    int total_marks_;
};

#endif // MARKSHEET_H
