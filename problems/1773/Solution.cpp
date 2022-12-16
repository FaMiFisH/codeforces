// $ g++ -std=c++11 c++Template.cpp

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

void solve(int n, int a, int b){   
    if (n == 1) {
        if (a == b) cout << 1 << '\n'; 
        else cout << 0 << '\n';

        cout << a << ':' << b << '\n';
        return;
    }

    if (a+b < n) cout << n-a-b << '\n';
    else cout << 0 << '\n';

    for (int i = 0; i < n-1; i++){
        if (a <= b && a > 0) { 
            cout << 1 << ":0\n";
            a--;
        }
        else if(b < a && b > 0) {
            cout << "0:" << 1 << '\n';
            b--;
        }
        else {
            if (a == 0 && b == 0) cout << a << ":" << b << '\n';
            else if (a == 0) {
                cout << a << ":" << 1 << '\n';
                b--;
            }
            else {
                cout << 1 << ":" << b << '\n';
                a--;
            }
        }
    }
    cout << a << ":" << b << '\n';
}

/* Main function */
int main() {
    int n;
    int a;
    int b;
    scanf("%d", &n);
    scanf("%d", &a);
    scanf("%d", &b);

    solve(n,a,b);
}