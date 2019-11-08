#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    double mealCost;
    float tipPercent, taxPercent;
    float tip, tax;
    
    cin >> mealCost;
    cin >> tipPercent;
    cin >> taxPercent;
    tip = mealCost*(tipPercent/100);
    tax = mealCost*(taxPercent/100);
    
    cout << "The total meal cost is " << fixed << setprecision(0) << mealCost + tax + tip << " dollars." << endl; 
    
    return 0;
}
