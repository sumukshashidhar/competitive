#include<iostream>
#include<cmath>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    long long res1 = ceil(double(n)/a);
    long long res2 = ceil(double(m)/a);
    cout << res1*res2 << endl;
}
