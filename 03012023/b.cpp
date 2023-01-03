// $ g++ -std=c++11 -o solution solution.cpp

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

int solve_case(int t){
    if (t % 2 != 0) return -1;
    return 1;
}

/* Main function */
int main() {

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        int t;
        cin >> t;

        int result = solve_case(t);

        if (result == -1) {
            cout << "NO" << '\n';
            continue;
        }
        
        cout << "YES" << '\n';
        for (int j = 0; j < t; j++){
            if (j%2 == 0) cout << "1 ";
            else cout << "-1 ";
        }
        cout << '\n';
    }
}