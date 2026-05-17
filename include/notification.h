#pragma once
#include <string>
using namespace std;

class Notification {
protected:
    string message;
    string recipient;

public:
    Notification(string message, string recipient);
    virtual ~Notification() {}

    string getMessage();
    virtual void send() = 0;
};

class EmailNotification : public Notification {
private:
    string emailAddress;

public:
    EmailNotification(string message, string recipient, string email);
    void send();
}

class AppNotification : public Notification {
public:
    AppNotification(string message, string recipient);
    void send();
}
