//
// Created by Hanifa on 12/10/19
//

#include <iostream>
#include "Rod.h"

/**
 *
 * @param price     array of integer prices
 * @param n         length of rod
 * @return          max revenue
 */
int Rod::cutRod(int price[], int n) {
    int values[n+1]; // bottom up == > table
    values[0] = 0;
    // Build the table 
    for (int i = 1; i <= n; i++) {
        int max_values = -99999999;
        for (int j = 0; j < i; j++) {
            int current = price[j] + values[i-j-1];
            max_values = maxRevenue(max_values, current);
        }
        values[i] = max_values;
    }
    return values[n];
}

/**
 * Helper function to determine the maximum revenue
 * @param a
 * @param b
 * @return
 */
int Rod::maxRevenue(int a, int b) {
    if (a > b) {
        return a;
    } else{
        return b;
    }
}

/**
 * Prints the information for a test case
 * @param arr       prices array
 * @param i         case number
 * @param size      size of array of prices
 * @param rodL      rod length
 * @param revenue   max revenue
 */
void Rod::printResult(int arr[], int i, int size, int rodL, int revenue) {
    std::cout << "case " << i << " : [";
    for (int b = 0; b < size -1; b++) {
        printf(" %d,", arr[b]);
    }
    printf(" %d", arr[size-1]);
    std::cout <<" ]\nmax revenue is: " << revenue << " for a rod of length " << rodL << "\n" << std::endl;
}
