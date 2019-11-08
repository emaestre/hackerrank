#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

	// Add your code here
    Difference(vector<int> arr) {
        this->elements = arr;
    }

    int computeDifference(void) {
        int max = 0, aux = 0;
        
        for(int i = 0; i < this->elements.size(); i++) {
            aux = this->elements[i];
            if(aux > max)
                max = aux;
        }
        
        this->maximumDifference = 0;
        for(int i = 0; i < this->elements.size(); i++) {
            aux = abs(this->elements[i] - max);
            if(aux > this->maximumDifference)
                this->maximumDifference = aux;
        }
        
        return this->maximumDifference;
    }
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}