#ifndef STUDENT_MANAGEMENT_SYSTEM_H
#define STUDENT_MANAGEMENT_SYSTEM_H
#include <vector>
#include "Student.h"
#include "SearchEngine.h"
#include "Constants.h"
using namespace std;



class StudentManagementSystem {
private:
    Student students[MAX_STUDENTS]; 
    int num_students;

public:
    StudentManagementSystem() : num_students(0) {}

  
    bool is_unique_id(const string& id);
    bool is_unique_password(const string& pwd);
    void add_student_record();
    void search_student_record();
    void delete_student_record();
    void modify_student_record();
    void generate_mark_sheet();
 
    const vector<Student>& get_students() const {
        vector<Student> student_list(students, students + num_students);
        return student_list;
    }
};

#endif