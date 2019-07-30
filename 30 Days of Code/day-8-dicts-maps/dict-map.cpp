#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    long n, phone;
    string name;
    map<string, int> contacts;
    map<string, int>::iterator it;
    
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> name >> phone;
        contacts[name] = phone;
    }

    while(cin >> name) {
        it = contacts.find(name);
        if(it != contacts.end())
            cout << name << "=" << contacts[name] << endl;
        else
            cout << "Not found" << endl;            
    }
    
    return 0;
}
