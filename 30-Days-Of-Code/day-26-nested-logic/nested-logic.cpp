#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int expDay, expMonth, expYear, actDay, actMonth, actYear, fine;
    
    cin >> actDay >> actMonth >> actYear;
    cin >> expDay >> expMonth >> expYear;
    
    if(actYear > expYear) {
        fine = 10000;
        cout << fine << endl;
    }
    else if(actYear < expYear){
        fine = 0;
        cout << fine << endl;
    }
    else if(actMonth > expMonth) {
        fine = 500 * (actMonth - expMonth);
        cout << fine << endl;
    }
    else {
        if(actMonth == expMonth) {
            if(actDay > expDay) {
                fine = 15 * (actDay - expDay);
                cout << fine << endl;
            }
            else {
                fine = 0;
                cout << fine << endl;
            }
        }
        else {
            fine = 0;
            cout << fine << endl;
       }     
    }
        
    return 0;
}
