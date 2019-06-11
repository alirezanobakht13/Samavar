//
// Created by Jarvis on 5/8/2019.
//

#ifndef SAMAVAR_TEAM_H
#define SAMAVAR_TEAM_H

#include <iostream>
#include <vector>
#include "../Person/Person.h"
using namespace std;
class Team {
protected:
    int ID;
    string teamName;
    vector<Person> members;
    string username;
    string password;
    int score;
public:
    Team();
    Team(string &name,string &username,string &password);//increase Id;

    //-------------Setter-------------------------------
    void setTeamName(string name);
    void setUsername(string user);
    void setPassword(string pass);
    void setScore(int scr);


    //----------------Getter----------------------------
    string getTeamName() const;
    string getUsername() const;
    int getScore() const;
    int getID() const;
    vector<Person> getMembers() const;
    Person getPerson(string natCode) const;



    //-----------------Others----------------------------
    void addPerson(Person p);
    void addPerson(string &first,string &last,bool gen,string &natCode);
    void changeFirstName(string natCode,string name);
    void changeLastName(string natCode,string last);
    void changeGender(string natCode,bool gen);
    void deletePerson(string natCode);

};


#endif //SAMAVAR_TEAM_H
