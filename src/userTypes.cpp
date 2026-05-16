#include "userTypes.h"

AdminUser::AdminUser(string username, string email): User(username, email) {}
string AdminUser::getRole() { return "Admin"; }

RegularUser::RegularUser(string username, string email) : User(username, email) {}
string RegularUser::getRole() { return "User"; }
