#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int toBinary(int n) {
    int maxi = 0, cont = 0;
    while(n != 0) {
        if(n % 2 == 0)
            cont = 0;
        else
            cont++;
        
        maxi = max(cont, maxi); 
        n /= 2;
    }
    return maxi;
}

int main() {
    int n, cont;
    cin >> n;
    cont = toBinary(n);
    cout << cont << endl;
    
    return 0;
}
