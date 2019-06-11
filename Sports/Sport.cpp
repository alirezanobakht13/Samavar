//
// Created by Jarvis on 5/8/2019.
//

#include "Sport.h"


Sport::Sport() {

}

Sport::Sport(Person &host, string &user, string &pass) {
    this->host = host;
    this->username = user;
    this->password = pass;
}

Sport::Sport(string &first, string &last, bool gen, string &natCode, string &user, string &pass) {
    Person p(first, last, gen, natCode);
    host = p;
    username = user;
    password = pass;

}

//-----------------------------Setter--------------------


void Sport::setHost(const Person &host) {
    Sport::host = host;
}

void Sport::setUsername(const string &username) {
    Sport::username = username;
}

void Sport::setPassword(const string &password) {
    Sport::password = password;
}

void Sport::setTeams(const vector<Team> &teams) {
    Sport::teams = teams;
}

void Sport::setFirstTime(bool firstTime) {
    Sport::firstTime = firstTime;
}


//---------------------Getter------------------


const Person &Sport::getHost() const {
    return host;
}

const string &Sport::getUsername() const {
    return username;
}

const string &Sport::getPassword() const {
    return password;
}

const vector<Team> &Sport::getTeams() const {
    return teams;
}

bool Sport::isFirstTime() const {
    return firstTime;
}


//------------------------------Others--------------------


void Sport::addTeam(Team t) {
    teams.push_back(t);
}