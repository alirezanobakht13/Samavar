//
// Created by Jarvis on 5/8/2019.
//

#ifndef SAMAVAR_STOREANDRESTORE_H
#define SAMAVAR_STOREANDRESTORE_H


#include "../Sports/BBVB.h"
#include "../Sports/PingPong.h"
#include "../Sports/Wrestling.h"

void Start(BBVB &b);
void Update(const BBVB &b);

void Start(PingPong &p);
void Update(const PingPong &p);

void Start(Wrestling &w);
void Update(const Wrestling &w);





#endif //SAMAVAR_STOREANDRESTORE_H
