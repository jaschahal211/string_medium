#include<iostream>
#include<string>
#include<map>
using namespace std;
class Solution {
public:
    int beautySum(string s) {
        int count = 0;

        for (int i = 0; i < s.size(); i++) {
            map<char, int> mpp;

            for (int j = i; j < s.size(); j++) {
                mpp[s[j]]++;

                int mx = INT_MIN, mn = INT_MAX;

                for (auto it : mpp) {
                    mx = max(mx, it.second);
                    mn = min(mn, it.second);
                }

                count += (mx - mn);   
            }
        }
        return count;
    }
};