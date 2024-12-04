//
// Created by perci on 24-12-2.
//
#pragma once

#include <string.h>
#ifndef GOLF_H
const int Len = 40;
class golf {
    private:
    char name[Len];
    int handicap;
    public:
    golf() {
        strcpy(name, "");
        handicap = 0;
    }
    golf (const char * name,int hc) {
         strcpy(this->name,name);
        this->handicap=hc;
    }
    int setgolf();
    void Handicap(int hc);
    void showgolf();
};
#define GOLF_H

#endif //GOLF_H
