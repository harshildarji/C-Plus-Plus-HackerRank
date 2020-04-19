// https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem

#include <iostream>
#include <cstdio>
using namespace std;


int main() {
    int a;
    long b;
    char c;
    float d;
    double f;
    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &f);
    printf("%d\n%ld\n%c\n%f\n%lf", a, b, c, d, f);
    return 0;
}
