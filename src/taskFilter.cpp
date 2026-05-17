#include "taskFilter.h"
using namespace std;

vector<Task*> TaskFilter::filterByStatus(vector<Task*> tasks, Status s) {
    vector<Task*> result;
    for (int i = 0; i < tasks.size(); i++) {
        if (tasks[i]->getStatus() == s) {
            result.push_back(tasks[i]);
        }
    }
    return result;
}

vector<Task*> TaskFilter::filterByPriority(vector<Task*> tasks, Priority p) {
    vector<Task*> result;
    for (int i = 0; i < tasks.size(); i++) {
        if (tasks[i]->getPriority() == p) {
            result.push_back(tasks[i]);
        }
    }
    return result;
}

vector<Task*> TaskFilter::search(vector<Task*> tasks, string keyword) {
    vector<Task*> result;
    for (int i = 0; i < tasks.size(); i++) {
        string title = tasks[i]->getTitle();
        string titleLow = "", kwLow = "";
        for (int j = 0; j < title.size(); j++) {
            titleLow += tolower(title[j]);
        }
        for (int j = 0; j < keyword.size(); j++) {
            kwLow += tolower(keyword[j]);
        }
        if (titleLow.find(kwLow) != string::npos) {
            result.push_back(tasks[i]);
        }
    }
    return result;
}
