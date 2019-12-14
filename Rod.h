//
// Created by Hanifa on 12/10/2019.
//

#ifndef RODCUTTING_ROD_H
#define RODCUTTING_ROD_H


#include <printf.h>

class Rod {

public:
    int cutRod(int[], int);
    void printResult(int arr[], int i, int size, int rodlength, int revenue);

private:
    int maxRevenue(int, int);
};


#endif //RODCUTTING_ROD_H
