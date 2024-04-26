
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll numero(ll numSearch){
   
    if(numSearch % 2 == 0){
        numSearch = numSearch/2;
    }
    else{
        numSearch = ((numSearch-1)/2);
    }
    return numSearch;
}

int main()
{
    int test;
    cin >> test;

    while (test--){
        ll numSearch, result;
        cin >> numSearch;
        
        result = numSearch;

        while(numSearch > 1) {

            numSearch = numero(numSearch);
            result += numSearch;

        }
        cout << result << endl;
    }


	return 0;


}
