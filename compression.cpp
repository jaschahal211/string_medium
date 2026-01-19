#include<iostream>
using namespace std;
class Solution {
public:
    int compress(vector<char>& chars) {
        int count = 1;
        int k = 0;

        for (int i = 0; i < chars.size(); i++) {
            if (i + 1 < chars.size() && chars[i] == chars[i + 1]) {
                count++; 
            } else {
                chars[k] = chars[i];
                k++;

                if (count > 1) {
                    string cnt = to_string(count);
                    for (char ch : cnt) {
                        chars[k] = ch;  
                        k++; 
                    }
                }
                count = 1;
            }
        }

        chars.resize(k);   
        return k;          
    }
};
