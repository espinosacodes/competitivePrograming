#include <iostream>

using namespace std;
using std::cout;
using std::cin;

int main() {

    string word;
    cin >> word;

    if (word.length() > 10) {
        cout << word[0] << word.length() - 2 << word[word.length() - 1] << endl;
    } else {
        cout << word << endl;
    }

    return 0;
}       
