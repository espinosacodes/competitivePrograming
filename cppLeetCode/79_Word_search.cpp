#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool exist(vector<vector<char>>& board, string word) {
        int m = sizeof(board)/sizeof(board[0]);
        int n = sizeof(word)/sizeof(word[0]);

        for(int i = 0; i < m ; i++){


            for(int j = 0; i < m; i++){

                

                    if(board[i][j] == word[0]){ //k =0 first letter of word

                        for(int k = 0; k < n; k++){         
                            //check word size only in 4 directions
                            if(board[i+1][j] == word[k+1] || board[i-1][j] == word[k+1] || board[i][j+1] == word[k+1] || board[i][j-1] == word[k+1]){

                                return true;
                            }   

                    }   
                        
                    
                }



            }
            

        }

        return false;

    }

};