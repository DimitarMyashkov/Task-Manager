#include "enums.h"
using namespace std;

string priorityToStr(Priority p) {
    if (p == LOW) {
        return "Low";
    }
    if (p == MEDIUM) {
        return "Medium";
    }
    if (p == HIGH) {
        return "High";
    }
        return "Critical";
}

string statusToStr(Status s) {
    if (s == PENDING) {
        return "Pending";
    }
    if (s == IN_PROGRESS) {
        return "In Progress";
    }
    if (s == COMPLETED) {
        return "Completed";
    }
    return "Cancelled"
}
