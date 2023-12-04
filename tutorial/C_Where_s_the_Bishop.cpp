
#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, y ;

    int t [8][8]; //table

    for(int i = 0; i <= 7 ; i++){ // less than 8 because the table is 8x8 and the bishop doesnt touch the bordes
            
        for(int j = 0; j <= 7; j++){

            cin >> t[i][j];
       }
    }




    for(int  i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cout << t[i][j] << " ";
        }
        cout << endl;

    }

    
}