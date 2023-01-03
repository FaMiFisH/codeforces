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

int solve_case(int t, string s){

    for (int i = 1; i < t; i++){
        if (s[i-1] == 'R' && s[i] == 'L') return 0;
        if (s[i-1] == 'L' && s[i] == 'R') return i;
    }
    return -1;
}

/* Main function */
int main() {

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        int t;
        string s;
        cin >> t;
        cin >> s;

        cout << solve_case(t, s) << '\n';
    }
}