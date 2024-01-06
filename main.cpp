#include <iostream>
#include <string>
#include "algorithm.h"

using namespace std;

bool IsPalindrome(std::string inputString)
{
    int p1 = 0;
    int p2 = inputString.size() - 1;
    while (p1 < p2) {
        if (inputString[p1] != inputString[p2]) {
            return false;
        }
        p1++;
        p2--;
    }
    return true;
}

bool IsHappyNumber(int n) {
    int p_slow = n;
    int p_fast = SumOfSquaredDigits(n);

    while (p_fast != 1 && p_fast != p_slow) {
        p_slow = SumOfSquaredDigits(p_slow);
        p_fast = SumOfSquaredDigits(SumOfSquaredDigits(p_fast));
    }
    if (p_fast == 1) {
        return true;
    }
    return false;
}

int main() {
    cout << IsHappyNumber(100) << std::endl;
    cout << IsPalindrome("malam") << std::endl;
    return 0;
}
