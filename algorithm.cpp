//
// Created by Marcello Gonzatto Birkan on 05/01/24.
//

#include "algorithm.h"
#include <vector>
// How to set up two pointers in an array

void TwoPointers(std::vector<int> array){
    int left = 0;
    int right = array.size() - 1;
    while (left <= right){
        left = left + 1;
        right = right -1;
    }
}

// Template function that calculates the sum of squared digits.
#include <cmath>

int SumOfSquaredDigits(int number)
{
    int totalSum = 0;
    while (number > 0)
    {
        int digit = number % 10;
        number = std::floor(number / 10);
        totalSum += digit * digit;
    }
    return totalSum;
}