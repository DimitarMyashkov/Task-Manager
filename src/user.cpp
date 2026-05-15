#include "user.h"
#include <iostream>
using namespace std;

int User::nextId = 1;

User::User(string username, string email) {
    this->id = nextId++;
    this->username = username;
    this->email = email;
}

int User::getId() { return id; }
string User::getUsername() { return username; }
string User::getEmail() { return email; }

void User::print() {
    cout << "[" << getRole() << "] " << username << " (" << email << ")" << endl;
}
