#include<iostream>

using namespace std; 

int main() {
    int cases, a, b, c, sums;
    cin >> cases;
    sums = 0;
    for(int i=0; i < cases; i++) {
        cin >> a >> b >> c;
        if ((a && b) || (b&&c) || (a&&c)) {
            ++sums;
        }
    }
    cout << sums << "\n";
}
