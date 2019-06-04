//
//  main.cpp
//  Test_Please_Ignore
//
//  Created by Chundian Zheng on 6/3/19.
//  Copyright © 2019 Chundian Zheng. All rights reserved.
//

#include <iostream>
//#include <vector>
//#include <algorithm>

using namespace std;

int main() {
    double arrays[5][3] {};
    for (int i = 0; i < 5; i++){
    cout << "请输入第" << i+1 << "行的三个元素： ";
        for (int j = 0; j < 3; j++){
            cin >> arrays[i][j];
        }
    }
    cout << endl;
    //print array using pointer-------------------------------------------------------------
    double (*p_arrays)[3] = arrays;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 3; j++){
            cout << *(*(p_arrays + i) + j) << "\t";
        }
        cout << endl;
    }
        
    return 0;
}
