#pragma once
#include <string>
using namespace std;

class Person {
private:
    string lastName;
    string firstName;
    string email;
    string phone;
public:
    Person() {
        lastName = "";
        firstName = "";
        email = "";
        phone = "";
    }
    Person(string lName, string fName, string m, string p) {
        lastName = lName;
        firstName = fName;
        email = m;
        phone = p;
    }
    void setLastName(string lName) {
        lastName = lName;
    }
    void setFirstName(string fName) {
        firstName = fName;
    }
    void setEmail(string m) {
        email = m;
    }
    void setPhone(string p) {
        phone = p;
    }
    string getLastName() {
        return lastName;
    }
    string getFirstName() {
        return firstName;
    }
    string getEmail() {
        return email;
    }
    string getPhone() {
        return phone;
    }
};

class Customer : public Person {
private:
    int customerNumber;
    bool emailList;
public:
    Customer() {
        customerNumber = 0;
        emailList = false;
    }
    Customer(string lName, string fName, string m, string p, int number, bool list) {
        string lastName = lName;
        string firstName = fName;
        string email = m;
        string phone = p;
        customerNumber = number;
        emailList = list;
    }
    void setCustomerNumber(int number) {
        customerNumber = number;
    }
    void setEmailList(bool list) {
        emailList = list;
    }
    int getCustomerNumber() {
        return customerNumber;
    }
    bool getEmailList() {
        return emailList;
    }
};