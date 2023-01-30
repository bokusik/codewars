#include<stdio.h>
#include<iostream>
#include<math.h>
#include <iomanip>
#include <vector>

using namespace std;

vector<vector<int>> matrix_multiplication(vector<vector<int>> &a, vector<vector<int>> &b, size_t n) {
    vector<vector<int>> result(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int l = 0; l < n; l++) {
            int s = 0;
            for (int j = 0; j < n; j++) {
                s += a[i][j] * b[j][l];
            }
            result[i][l] = s;
        }
    }
    return result;
}