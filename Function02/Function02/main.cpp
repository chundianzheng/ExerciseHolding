//
//  main.cpp
//  Function02
//
//  Created by Chundian Zheng on 6/13/19.
//  Copyright © 2019 Chundian Zheng. All rights reserved.
//

#include <iostream>
#include "Header.h"

using namespace std;

int main(){
    int m, n;
    cout << "请输入矩阵维度，m行n列：";
    cin >> m >> n;
    int **a;
    a = new int* [m];
    for (int i = 0; i < m; i++){
        a[i] = new int[n];
    }
    input(a, m, n);
    output(a, m, n);
    delete a;
    return 0;
}
