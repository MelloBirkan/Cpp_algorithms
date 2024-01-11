//
// Created by Marcello Gonzatto Birkan on 05/01/24.
//

#include "algorithm.h"
#include <vector>
#include <cmath>

// How to set up two pointers in an array
void TwoPointers(std::vector<int> array){
    int left = 0;
    int right = array.size() - 1;
    while (left <= right){
        left = left + 1;
        right = right -1;
    }
}

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

int Power(int base , int exponent ) {
    if (exponent == 0) {
        return 1;
    }
    return base * Power(base, exponent - 1);
}

int count_digits(int number) {
    if (number <= 9 && number >= -9 ) {
        return 1;
    }
    return 1 + count_digits(number / 10);
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int* Left_rotate(int arr[], int size) {
  int first = arr[0];
  for (int i = 0; i < size; ++i) {
    arr[i] = arr[i + 1];
  }
  arr[size - 1] = first;
  return arr;
}