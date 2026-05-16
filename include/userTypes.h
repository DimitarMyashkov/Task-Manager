#pragma once
#include "user.h"
using namespace std;

class AdminUser : public User {
public:
    AdminUser(string username, string email);
    string getRole();
}

class RegularUser : public User {
public:
    regularUser(string username, string email);
    string getRole();
}
