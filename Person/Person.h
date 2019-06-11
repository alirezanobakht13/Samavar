//
// Created by Jarvis on 5/8/2019.
//

#ifndef SAMAVAR_PERSON_H
#define SAMAVAR_PERSON_H

#include <iostream>
using namespace std;
class Person {
protected:
    string firstName;
    string lastName;
    bool gender; // male : false   female : true;
    string nationalCode;
public:
    //-------Constructor--------------
    Person();
    Person(string first,string last,bool gen,string natCode);


    //-----------Setter----------------
    void setFirstName(string name);
    void setLasName(string last);
    void setGender(bool gen);
    void setNationalCode(string natcode);

    //------------Getter---------------
    string getFirstName() const;
    string getLastName() const;
    bool getGender() const;
    string getNationalCode() const;
};


#endif //SAMAVAR_PERSON_H
