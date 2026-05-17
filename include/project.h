#pragma once
#include <string>
#include <vector>
#include "task.h"
using namespace std;

class Project {
private:
    int id;
    string title;
    string description;
    vector<Task*> tasks;

    static int nextId;

public:
    Project(string title, string description);

    int getId();
    string getTitle();
    vector<Task*> getTasks();

    void addTask(Task* t);
    bool removeTask(Task* t);

    double getCompletionPercent();

    void print();
};