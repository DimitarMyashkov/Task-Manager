#include "notification.h"
#include <iostream>
using namespace std;

Notification::Notification(string message, string recipient) {
    this->message = message;
    this->recipient = recipient;
}

string Notification::getMessage() { return message; }

EmailNotification::EmailNotification(string message, string recipient, string email) : Notification(message, recipient) {
    this->emailAddress = email;
}

void EmailNotification::send() {
    cout << "[EMAIL -> " << emailAddress << "] " << message << endl;
}

AppNotification::AppNotification(string message, string recipient) : Notification(message, recipient) {}

void AppNotification::send() {
    cout << "[APP -> " << recipient << "] " << message << endl;
}
