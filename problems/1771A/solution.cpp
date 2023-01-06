// $ g++ -std=c++11 -o solution solution.cpp

#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

void solve_case(){
    int n;
    cin >> n;

    int minV = INT_MAX;
    int maxV = INT_MIN;
    int64 minCount;
    int64 maxCount;
    for (int i = 0; i < n; i++){
        int num;
        cin >> num;

        if (num == maxV) maxCount++;
        else if (num > maxV) {
            maxV = num;
            maxCount = 1;
        }

        if (num == minV) minCount++;
        else if(num < minV) {
            minV = num;
            minCount = 1;
        }
    }   

    if (minV == maxV) cout << minCount * (maxCount-1) << '\n';
    else printf("%lld\n", maxCount*minCount*2LL);
}

/* Main function */
int main() {
    int cases;
    cin >> cases;
    for(int i = 1; i <= cases; i++){
        solve_case();
    }
}