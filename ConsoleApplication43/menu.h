#ifndef MENU_H
#define MENU_H

class StudentManagementSystem;

class Menu {
public:
    void displayMenu();
    void handleChoice(int choice, StudentManagementSystem& system);
};

#endif 