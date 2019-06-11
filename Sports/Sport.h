//
// Created by Jarvis on 5/8/2019.
//

#ifndef SAMAVAR_SPORT_H
#define SAMAVAR_SPORT_H

#include "../Person/Person.h"
#include "../TournamentStuf/Team.h"


class Sport {
protected:
    Person host;
    string username;
    string password;
    vector<Team> teams;
    bool firstTime=true;
public:

//-----------Constructor---------------
    Sport();
    Sport(Person &host,string &user,string &pass);
    Sport(string &first,string &last,bool gen,string &natCode,string &user,string &pass);

    //------------Setter---------------------

    void setHost(const Person &host);

    void setUsername(const string &username);

    void setPassword(const string &password);

    void setTeams(const vector<Team> &teams);

    void setFirstTime(bool firstTime);


    //-------------Getter---------------------
    const Person &getHost() const;

    const string &getUsername() const;

    const string &getPassword() const;

    const vector<Team> &getTeams() const;

    bool isFirstTime() const;

    //---------------Others------------------
    void addTeam(Team t);



    //-------------

};


#endif //SAMAVAR_SPORT_H
