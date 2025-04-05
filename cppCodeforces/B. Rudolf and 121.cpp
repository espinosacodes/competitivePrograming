# include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){


    int t;
    int l;
    int n[l];
    
    cin >> t; //test

    while (t--)
    {
        
    
        cin >> l; //array lenght
        

        if (l > 1 & l < 100000 & l%2 == 0){
            for(int i = 0; i < l; i++){
                
                int h; cin >> h;
                n[i] = h;
                
            }

            //operations 
            //ai−1=ai−1−1
            //ai=ai−2
            //ai+1=ai+1−1

            for(int i = 2; i<=l; i++ ){

                int sub;
                sub = min(n[i-1],n[i]/2);

                n[i - 1] -= sub;

                n[i] -= 2*sub;

                n[i+1] -= sub;

                if(n[i-1] > 0 || n[i-1] > 0 || n[i]< 0 || n[i+1] <0 ){
                    cout << "NO\n";
                    break;
                }
                else{
                    cout << "YES\n";
                    break;
                }


            }

            




            
            if(n[l-1] != 0 || n[l] != 0){ 
                cout << "NO\n";
                break;
                }

            else {
            cout << "YES\n";
            break;
            }






        }






        else{
            cout << "NO\n";
            
            
        }






    }    

    return 0;


}