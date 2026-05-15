#pragma once
#include "enums.h"
#include <string>
using namespace std;

class Task {
private:
    int id;
    string title;
    string description;
    Priority priority;
    Status status;

    static int nextId;

public:
    Task(string title, string description, Priority priority);

    int getId();
    string getTitle();
    string getDescription();
    Priority getPriority();
    string getStatus();

    void setTitle(string newTitle);
    void setDescription(string newDescription);
    void setPriority(Priority newPriority);
    void setStatus(Status newStatus);

    void print();
};
