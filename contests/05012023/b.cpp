// $ g++ -std=c++11 -o solution solution.cpp

#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <cmath>

using namespace std;

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;


/* Main function */
int main() {

    int total;
    cin >> total;

    for (int t = 0; t < total; total++){

        int n;
        int k;
        cin >> n; 
        cin >> k;

        int prev = -1;
        int count = 0;
        for(int i = 1; i <= n; i++){

            int j;
            cin >> j;

            if (j == 1) {
                prev = 1;
                continue;
            }
            
            if (j == prev+1){
                prev++;
                continue;
            }

            count++;
        }
        if ((count-k) % 2 == 0) cout << count / k << '\n';
        else cout << (count+1)/k << '\n';
    }
}