#include "StudentManagementSystem.h"
#include "menu.h"
#include <iostream>

using namespace std;

int main() {
    StudentManagementSystem system;
    bool running = true;
    int choice;
    Menu menu;

    while (running) {
        menu.displayMenu();
        cin >> choice;
        menu.handleChoice(choice, system);
        if (choice == 6) {
            running = false;
        }
    }

    return 0;
}
