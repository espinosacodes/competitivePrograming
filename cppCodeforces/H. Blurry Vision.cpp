#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> lines = {
        "CODEFORCES",
        "EYE",
        "TESTING",
        "SYSTEM",
        "APRIL",
        "FOOLS",
        "YOU",
        "READ",
        "POORLY",
        "GET",
        "EYEGLASSES"
    };

    int x;
    cin >> x;

    if (x < 1 || x > 11) {
        cout << "Invalid input" << endl;
        return 1;
    }

    cout << lines[x - 1] << endl;

    return 0;
}