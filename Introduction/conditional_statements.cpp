// https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem

#include <bits/stdc++.h>
#include <cstdio>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string numbers[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if (n > 9){
        cout << "Greater than 9" << endl;
    } else {
        cout << numbers[n-1] << endl;
    }

    return 0;
}
