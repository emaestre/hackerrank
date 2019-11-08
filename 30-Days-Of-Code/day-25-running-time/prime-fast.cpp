#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int i) {
        if (i < 2) {
            return false;
        } else if (i % 2 == 0 && i != 2) {
            return false;
        } else {
            for (int j = 3; j <= sqrt(i); j = j + 2) {
                if (i % j == 0) {
                    return false;
                }
            }
            return true;
        }
}

int main() {
    int T;
    long n;
    bool a;
    
    cin >> T;
    
    while(T-- > 0) {
        cin >> n;
        a = isPrime(n);
        if(a)
            cout << "Prime" << endl;
        else
            cout << "Not prime" << endl;
    }
    
    return 0;
}
