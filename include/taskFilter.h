#pragma once
#include <vector>
#include <string>
#include "task.h"
using namespace std;

class TaskFilter {
public:
    vector<Task*> filterByStatus(vector<Task*> tasks, Status s);
    vector<Task*> filterByPriority(vector<Task*> tasks, Priority p);
    vector<Task*> search(vector<Task*> tasks, string keyword);
}