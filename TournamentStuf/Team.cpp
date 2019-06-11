//
// Created by Jarvis on 5/8/2019.
//

#include "Team.h"

Team::Team() {

}

Team::Team(string &name, string &username, string &password) {
    teamName = name;
    this->username = username;
    this->password = password;
}

//----------------------------Setter------------------------

void Team::setTeamName(string name) {
    teamName = name;
}

void Team::setUsername(string user) {
    this->username = user;
}

void Team::setPassword(string pass) {
    this->password = pass;
}

void Team::setScore(int scr) {
    this->score = scr;
}

//-----------------------Getter-------------------

string Team::getTeamName() const {
    return teamName;
}

string Team::getUsername() const {
    return this->username;
}

int Team::getScore() const {
    return score;
}

int Team::getID() const {
    return ID;
}

vector<Person> Team::getMembers() const {

    return members;
}

Person Team::getPerson(string natCode) const {
    for (int i = 0; i < members.size(); ++i) {
        if (members[i].getNationalCode() == natCode){
            return members[i];
        }
    }
}

// ----------------------------Others-------------------

void Team::addPerson(Person p) {
    members.push_back(p);
}

void Team::addPerson(string &first, string &last, bool gen, string &natCode) {
    Person p(first, last, gen, natCode);
    members.push_back(p);
}

void Team::changeFirstName(string natCode, string name) {
    for (int i = 0; i < members.size(); ++i) {
        if (members[i].getNationalCode() == natCode){
            members[i].setFirstName(name);
        }
    }
}

void Team::changeLastName(string natCode, string last) {
    for (int i = 0; i < members.size(); ++i) {
        if (members[i].getNationalCode() == natCode){
            members[i].setLasName(last);
        }
    }
}

void Team::changeGender(string natCode, bool gen) {
    for (int i = 0; i < members.size(); ++i) {
        if (members[i].getNationalCode() == natCode){
            members[i].setGender(gen);
        }
    }
}

void Team::deletePerson(string natCode) {
    for (int i = 0; i < members.size(); ++i) {
        if (members[i].getNationalCode() == natCode){
            members.erase(members.begin() + i);
            return;
        }
    }

}
