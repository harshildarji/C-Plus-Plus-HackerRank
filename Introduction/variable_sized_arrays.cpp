// https://www.hackerrank.com/challenges/variable-sized-arrays/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q;
    cin >> n >> q;

    int** numbers = new int*[n];

    for (int i=0; i<n; i++){
        int num_elm;
        cin >> num_elm;
        numbers[i] = new int[num_elm];
        for (int j=0; j<num_elm; j++){
            cin >> numbers[i][j];
        }
    }

    for (int i=0; i<q; i++){
        int arr_ind, val_ind;
        cin >> arr_ind >> val_ind;
        cout << numbers[arr_ind][val_ind] << endl;
    }
    
    return 0;
}
