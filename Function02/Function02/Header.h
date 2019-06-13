//
//  Header.h
//  Function02
//
//  Created by Chundian Zheng on 6/13/19.
//  Copyright © 2019 Chundian Zheng. All rights reserved.
//

#ifndef Header_h
#define Header_h

#include <iostream>

using namespace std;

void input(int **, int, int);
void output( int **, int, int);

void input(int **a, int m, int n){
    cout << "请输入需要存入数组的" << m * n << "个数" << endl;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
}


void output(int **a, int m, int n){
    cout << endl;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

#endif /* Header_h */
