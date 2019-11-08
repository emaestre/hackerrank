#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        string str, a, b, aux;
        cin >> str;
        for(int j = 0; j < str.length(); j++) {
            aux = str[j];
            if(j % 2 == 0)
                a = a + aux;
            else
                b = b + aux;
        }
        cout << a << " " << b << endl;
    }
    return 0;
}
