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


int main(){
    int N, i = 0;
    string Emails[31];
    
    cin >> N;
    for(int a0 = 0; a0 < N; a0++){
        string firstName;
        string emailID;
        cin >> firstName >> emailID;
        size_t found = emailID.find("@gmail.com");
        if(found != string::npos) {
            Emails[i] = firstName;
            i++;
        }
    }

    sort(Emails,Emails+i);

  for(int y = 0; y < i; y++)
    cout << Emails[y] << endl;
    
    return 0;
}
