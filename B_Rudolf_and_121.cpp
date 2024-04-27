#include <bits/stdc++.h>

using namespace std;

void solve(){

    int n; cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++){
        int a; 
        cin >> a;
        arr[i] = a;
    }

    for (int i = 1; i < n - 1; i++){
        if (arr[i-1] * 2 > arr[i]){
            cout << "NO\n";
            return;

        } else {
            arr[i] -= (2 * arr[i-1]);
            arr[i+1] -= arr[i-1];
            arr[i-1] = 0;
        }
    }

    for (int i = 0; i < n; i++){
        if (arr[i] != 0){
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";

}

int main(){

    int t; cin >> t;

    while (t--){
        solve();
        
    }

    return 0;
}