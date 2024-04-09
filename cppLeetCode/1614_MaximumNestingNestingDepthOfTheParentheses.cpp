#include<iostream>
#include <bits/stdc++.h>
using namespace std;


//Input: s = "(1)+((2))+(((3)))"
//Output: 3

class Solution {
public:
    int maxDepth(string s) {
        int current = 0;
        int maxCounter = 0;
        
        

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' ){
                current++;
                maxCounter = max(maxCounter, current);
                }
            else if(s[i] == ')'){
                current--;
            }  
            

        }
        return maxCounter;

    }
};