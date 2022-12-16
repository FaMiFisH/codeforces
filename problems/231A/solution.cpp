// $ g++ -std=c++11 -o template template.cpp

#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

void solve(){
    
}

/* Main function */
int main() {
    int n;
    cin >> n;

    int total = 0;
    for(int i = 1; i <= n; i++){
        int x, y, z;
        cin >> x >> y >> z;

        if (x+y+z >= 2) total++;
    }
    cout << total << '\n';
}