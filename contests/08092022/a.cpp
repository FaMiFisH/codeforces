// $ g++ -std=c++17 -o template template.cpp

#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

void solve_case(){
    int a;
    scanf("%d", &a);
    int colour;
    int currentMax = 0;
    for (int i = 1; i <= a; i++){
        int ball;
        scanf("%d", &ball);
        if(currentMax < ball){
            colour = i;
            currentMax = ball;
        }
    }
    cout << colour << "\n";
}

/* Main function */
int main() {
    int total;
    scanf("%d", &total);
    for(int i = 1; i <= total; i++){
        // printf("Case #%d", i);
        solve_case();
    }
}