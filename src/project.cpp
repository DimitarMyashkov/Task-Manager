#include "project.h"
#include <iostream>
using namespace std;

int Projec::nextId = 1;

Project::Project(string title, string description) {
    this->id = nextId++;
    this->title = title;
    this->description = description;
}

int Project::getId() { return id; }
string Project::getTitle() { return title; }
vector<Task*> Project::getTasks() { return tasks; }

void Project::addTask(Task* t) {
    tasks.push_back(t);
}

bool Project::removeTask(int taskId) {
    for (int i = 0; i < tasks.size(); i++) {
        if (tasks[i]->getId() == taskId) {
            tasks.erase(tasks.begin() + i);
            return true;
        }
    }
    return false;
}

double Project::getCompletionPercent() {
    if (tasks.size() == 0) { return 0; }
    int done = 0;
    for (int i = 0; i < tasks.size(); i++) {
        if (tasks[i]->getStatus() == COMPLETED) { done++; }
    }
    return (done * 100.0) / tasks.size();
}

void Project::print() {
    cout << "Project [" << id << "]: " << title << endl;
    cout << "  " << description << endl;
    cout << "Completed: " << getCompletionPercent() << "%" << endl;
    cout << "Tasks: " << endl;
    for (int i = 0; i < tasks.size(); i++) {
        cout << "    ";
        tasks[i]->print();
    }
}
