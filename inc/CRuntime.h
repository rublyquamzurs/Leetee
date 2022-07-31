//
// Created by Sapphire on 2022/8/1.
//

#ifndef LEETEE_CRUNTIME_H
#define LEETEE_CRUNTIME_H

#include <cstdint>
#include <list>
#include "CSolution.h"


typedef void (*func)();

class CRuntime {
public:
    int version;
    int size;
    std::list<func> funcs;
    CSolution* solution;

    void append(func node);

public:
    CRuntime():version(0), size(0), funcs(){
        solution = new CSolution;
    };
    ~CRuntime() {
        version = 0;
        size = 0;
        funcs.clear();
        delete solution;
    };

    void maintain();
    void run();
};


#endif //LEETEE_CRUNTIME_H
