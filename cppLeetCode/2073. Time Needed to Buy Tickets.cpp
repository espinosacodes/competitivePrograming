#include <iostream>
#include <bits/stdc++.h>

#include <queue>

using namespace std;

/*
Example 1:

Input: tickets = [2,3,2], k = 2
Output: 6
Explanation: 
- In the first pass, everyone in the line buys a ticket and the line becomes [1, 2, 1].
- In the second pass, everyone in the line buys a ticket and the line becomes [0, 1, 0].
The person at position 2 has successfully bought 2 tickets and it took 3 + 3 = 6 seconds.

*/

/* 


 */

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        
        queue<int> f;
        

        for(int i = 0; i < tickets.size(); i++){
            
                
            }


        return f.size();
    }
};