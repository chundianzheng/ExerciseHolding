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

void input(int *, int *);
void output(const int *, const int *);

void input(int * value, int * len){
    cout << "请输入需要存入数组的" << *len << "个数" << endl;
    for (int i = 0; i < *len; i++){
        int * ptr_value = value + i;
        int temp;
        cin >> temp;
        *ptr_value = temp;
    }
}


void output(const int * start, const int * end){
    cout << endl;
    for (const int * ptr = start; ptr <= end; ptr++){
        cout << *ptr << "\t";
    }
    cout << endl;
}

#endif /* Header_h */
