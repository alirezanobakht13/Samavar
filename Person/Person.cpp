//
// Created by Jarvis on 5/8/2019.
//

#include "Person.h"

Person::Person() {

}

Person::Person(string first, string last, bool gen, string natCode) {
    firstName = first;
    lastName = last;
    gender = gen;
    nationalCode = natCode;
}

void Person::setFirstName(string name) {
    firstName = name;
}

void Person::setLasName(string last) {
    lastName = last;
}

void Person::setGender(bool gen) {
    gender = gen;
}

void Person::setNationalCode(string natcode) {
    nationalCode = natcode;
}

string Person::getFirstName() const {
    return firstName;
}

string Person::getLastName() const {
    return lastName;
}

bool Person::getGender() const {
    return gender;
}

string Person::getNationalCode() const {
    return nationalCode;
}







