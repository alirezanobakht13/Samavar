//
// Created by Jarvis on 5/8/2019.
//

#ifndef SAMAVAR_BBVB_H
#define SAMAVAR_BBVB_H

typedef struct VBResult{
    int set1=-1;
    int set2=-1;
    int set3=-1;
    int set4=-1;
    int set5=-1;
}VBResult;

#include "Sport.h"
#include "../TournamentStuf/Tournament.h"

class BBVB: public Sport {
protected:
    vector<Tournament<VBResult>> tours;
public:
    static BBVB& getInstance(){
        static BBVB b;
        return b;
    }
private:
    BBVB(){}

public:
    BBVB(BBVB const&)=delete;
    void operator=(BBVB const&) = delete;


    //-------------Setter------------

    //------------Getter-------------
    vector<Tournament<VBResult>> getTours() const;
    Tournament<VBResult> getTourById(int id) const;

    //----------Others---------------
    void addTour(Tournament<VBResult> v);

};

BBVB &bbvb=BBVB::getInstance(); //todo uncomment this place after implementing constructor



#endif //SAMAVAR_BBVB_H
