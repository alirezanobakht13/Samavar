//
// Created by Jarvis on 5/9/2019.
//

#ifndef SAMAVAR_WRESTLING_H
#define SAMAVAR_WRESTLING_H

#include "Sport.h"
#include "../TournamentStuf/Tournament.h"


class Wrestling : public Sport {
protected:
    vector<Tournament<int>> tours;
    Wrestling();

public:
    static Wrestling& getInstance(){
        static Wrestling p;
        return p;
    }


    //-------------Setter------------

    //------------Getter-------------
    vector<Tournament<int>> getTours() const;
    Tournament<int> getTourById(int id) const;

    //----------Others---------------
    void addTour(Tournament<int> v);
};

//Wrestling wre=Wrestling::getInstance(); //todo uncomment here after completing constructor
#endif //SAMAVAR_WRESTLING_H
