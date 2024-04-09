#include <iostream>
#include <bits/stdc++.h>
#include <cstdlib> //for abs method
#include <stack>
#include <cctype> //for tolower and toupper methods

using namespace std;

class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for (char c : s) {
            if (!st.empty() && ((tolower(c) == tolower(st.top())) && (c != st.top()))) {
                // If the current character and the top of the stack are the same letter but different case, pop the stack
                st.pop();
            } else {
                // Otherwise, push the current character onto the stack
                st.push(c);
            }
        }

        string result;
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
