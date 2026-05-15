#pragma once
#include <string>
using namespace std;

class User {
protected:
    int id;
    string username;
    string email;

    static int nextId;

public:
    User(string username, string email);
    virtual ~User() {}

    int getId();
    string getUsername();
    string getEmail();

    virtual string getRole() = 0;

    void print;
};