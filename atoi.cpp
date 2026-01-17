#include<iostream>
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        long long num = 0;

        // 1. Skip spaces
        while (i < s.size() && s[i] == ' ')
            i++;

        // 2. Handle sign
        if (i < s.size() && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') sign = -1;
            i++;
        }

        // 3. Convert digits
        while (i < s.size() && s[i] >= '0' && s[i] <= '9') {
            num = num * 10 + (s[i] - '0');

            // 4. Handle overflow
            if (num * sign > INT_MAX) return INT_MAX;
            if (num * sign < INT_MIN) return INT_MIN;

            i++;
        }

        return (int)(num * sign);
    }
};
