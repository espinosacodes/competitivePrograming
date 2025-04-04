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
        "THE",
        "ONLY",
        "THING",
        "IS",
        "CONSTANT"
    };

    int x;
    cin >> x;

    // Validate input
    if (x < 1 || x > 11) {
        cout << "Invalid input" << endl;
        return 1; // Exit with error code
    }

    // Output the word on the x-th line
    cout << lines[x - 1] << endl;

    return 0;
}