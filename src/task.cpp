#include "task.h"
#include <iostream>
using namespace std;

int Task::nextId = 1;

Task::Task(string title, string description, Priority priority) {
    this->id = nextId++;
    this->title = title;
    this->description = description;
    this->priority = priority;
    this->status = PENDING;
}

int Task::getId() {
    return id;
}
string Task::getTitle() { return title; }
string Task::getDescription() { return description; }
Priority Task::getPriority() { return priority; }
Status Task::getStatus() { return status; }

void Task::setTitle(string t) { title = t; }
void Task::setDescription(string d) { description = d; }
void Task::setPriority(Priority p) { priority = p; }
void Task::setStatus(Status s) { status = s; }

void Task::print() {
    cout << "[" << id << "] " << title
         << " | " << priorityToStr(priority) << " | "
         << " | " << statusToStr(status) << endl;
    cout << "    " << description << endl;
}
