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
using namespace std;

int square(vector< vector<int> > arr, int i, int j) {
    int ite = 0, cont = 0;
    bool band = 1;
    
    for(int ii = i; ii < 3 + i; ii++) {
        ite++;
        for(int jj = j; jj < 3 + j and band; jj++) {
            if(ite != 2)
                cont = cont + arr[ii][jj];
            else {
                cont = cont + arr[ii][jj + 1];
                band = 0;
            }     
        }
        band = 1;
    }
    
    return cont;
}

int main(){
    int max = -82, aux;
    vector< vector<int> > arr(6,vector<int>(6));
    
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            aux = square(arr, i, j);
            if(aux > max)
                max = aux;
        }
    } 
    cout << max << endl;
  
    return 0;
}
