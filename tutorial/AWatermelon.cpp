#include <iostream>

using namespace std;
using std::cout;
using std::cin;

int main() {
    int w;
    cin >> w;

    if (w % 2 == 0 && w > 2 ) {
        cout << "YES" << std::endl;
    }
    else {
        cout << "NO" << std::endl;
    }




    return 0;
}