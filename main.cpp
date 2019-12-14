#include <iostream>
#include "Rod.h"

int main() {
    std::cout << "------Welcome to The Revenue Optimizer!------ " << std::endl;
    Rod* oneRod = new Rod();
    int myPrices[] = {1,5,8,9,10,17,17,20};
    int newPrices[] = {0,0,8,9,10,17,17,2,3};
    int maxPrice1 = oneRod->cutRod(myPrices, 4);
    int maxPrice2 = oneRod->cutRod(myPrices, 0);
    int maxPrice3 = oneRod->cutRod(newPrices, 4);
    int maxPrice4 = oneRod->cutRod(newPrices, 9);
    int size1 = sizeof(myPrices)/ sizeof(myPrices[0]);
    int size2 = sizeof(newPrices)/ sizeof(newPrices[0]);
    oneRod->printResult(myPrices, 1, size1 ,  4, maxPrice1);
    oneRod->printResult(myPrices, 2, size1 ,  0, maxPrice2);
    oneRod->printResult(newPrices, 3, size2, 4, maxPrice3);
    oneRod->printResult(newPrices, 4, size2, 9, maxPrice4);
    return 0;
}


