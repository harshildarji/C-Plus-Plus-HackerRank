// https://www.hackerrank.com/challenges/arrays-introduction/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    scanf("%d", &n);

    int numbers[n];
    for (int i=0; i<n; i++){
        scanf("%d", &numbers[i]);
    }

    for (int i=n; i>0; i--){
        cout << numbers[i-1] << " ";
    }
    return 0;
}
