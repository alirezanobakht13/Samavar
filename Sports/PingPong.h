//
// Created by Jarvis on 5/9/2019.
//

#ifndef SAMAVAR_PINGPONG_H
#define SAMAVAR_PINGPONG_H

typedef struct PPResult{
    int set1=-1;
    int set2=-1;
    int set3=-1;
}PPResult;

#include "Sport.h"
#include "../TournamentStuf/Tournament.h"

class PingPong : Sport{
protected:
    vector<Tournament<PPResult>> tours;
    PingPong();

public:
    static PingPong& getInstance(){
        static PingPong p;
        return p;
    }


    //-------------Setter------------

    //------------Getter-------------
    vector<Tournament<PPResult>> getTours() const;
    Tournament<PPResult> getTourById(int id) const;

    //----------Others---------------
    void addTour(Tournament<PPResult> v);
};

//PingPong pp=PingPong::getInstance(); //todo uncomment this place after completing constructor

#endif //SAMAVAR_PINGPONG_H
