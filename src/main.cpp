#include <iostream>
#include <vector>
#include "task.h"
#include "project.h"
#include "taskFilter.h"
#include "userTypes.h"
#include "notification.h"
using namespace std;

int main() {
    // 1. Create tasks
    cout << "=== 1. Create Tasks ===" << endl;
    Task* t1 = new Task("Documentation", "Write documentation for the API", HIGH);
    Task* t2 = new Task("Database", "Design the database schema", CRITICAL);
    Taks* t3 = new Taks("Login page", "HTML form with validation", MEDIUM);
    Task* t4 = new Task("Tests", "Unit tests for Task and Project classes", LOW);
    t1->print(); t2->print(); t3->print(); t4->print();

    // 2. Editing a task
    cout << "\n=== 2. Editing a task ===" << endl;
    t1->setTitle("Full documentation");
    t1->setDescription("Documentation for all classes and endpoints");
    t1->setPriority(CRITICAL);
    cout << "After editing: " << endl;
    t1->print();

    // 3. Changing status
    cout << "\n=== 3. Changing status ===" << endl;
    t1->setStatus(IN_PROGRESS);
    t2->setStatus(COMPLETED);
    t3->setStatus(COMPLETED);
    t1->print(); t2->print(); t3->print(); t4->print();

    // 4. Project + adding tasks
    cout << "\n=== 4. Project + adding tasks ===" << endl;
    Project *p = new Project("Web app v1", "First version of the application");
    p->addTask(t1); p->addTask(t2); p->addTask(t3); p->addTask(t4);
    p->print();
    cout << "\nRemoving task [4]..." << endl;
    p->removeTask(4);
    p->print();

    // 5. Filtering and searching
    cout << "\n=== 5. Filtering and searching ===" << endl;
    vector<Task*> all = {t1, t2, t3, t4};
    taskFilter filter;

    cout << "Only COMPLETED:" << endl;
    vector<Task*> completed = filter.filterByStatus(all, COMPLETED);
    for (int i = 0; i < completed.size(); i++) {
        completed[i]->print();
    }

    cout << "\n Only CRITICAL:" << endl;
    vector<Task*> critical = filter.filterByPriority(completed, CRITICAL);
    for (int i = 0; i < critical.size(); i++) {
        critical[i]->print();
    }

    cout << "\nSearch for 'documentation': " << endl;
    vector<Task*> found = filter.search(all, "documentation");
    for (int i = 0; i < found.size(); i++) {
        found[i]->print();
    }

    // Users
    cout << "\n=== Users ===" << endl;
    adminUser* admin = new adminUser("admin", "admin@elsys-bg.org");
    regularUser* user1 = new regularUser("dimitar", "dimitar@elsys-bg.org");
    admin->print(); user1->print();

    // Notifications
    cout << "\n=== Notifications ===" << endl;
    Notification* n1 = new EmailNotification("Your task deadling is approaching!", "dimitar", "dimitar@elsys-bg.org");
    Notification* n2 = mew AppNotification("A new task has been added.", "admin");
    n1->send(); n2->send();

    delete t1; delete t2; delete t3; delete t4;
    delete p;
    delete admin; delete user1;
    delete n1; delete n2;

    return 0;
}
