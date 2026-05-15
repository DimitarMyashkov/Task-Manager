#pragma once
#include <string>
using namespace std;

enum Priority { LOW, MEDIUM, HIGH, CRITICAL };
enum Status { PENDING, IN_PROGRESS, COMPLETED, CANCELLED };

string priorityToStr(Priority p);
string statusToStr(Status s);
