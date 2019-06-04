//
//  main.cpp
//  Test_Please_Ignore
//
//  Created by Chundian Zheng on 6/3/19.
//  Copyright © 2019 Chundian Zheng. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double vector[] {8, 4, 2, 1, 23, 344, 12, 999, 57, 4}; //the aim vector we wanna sort
    //the sortord method of the array: Selection Sort----------------------------------------------------------
    int len = sizeof(vector) / sizeof(double);

    for (int i = 0; i < (len - 1); i++){
        double minimum = vector[i];
        for (int j = i + 1; j < len; j++){
            if (vector[j] < minimum){
                minimum = vector[j];
                vector[j] = vector[i];
                vector[i] = minimum;
            }
        }
    }
    for (int a = 0; a < len; a++){
        cout << vector[a] << "\t";
    }
    cout << "\n" << endl;
    int len_plus, temp;
    if (len % 2 == 0)
        len_plus = len / 2;
    else
        len_plus = (len - 1) / 2;
    for (int b = 0; b < len_plus; b++){
        temp = vector[b];
        vector[b] = vector[(len - 1 - b)];
        vector[(len - 1 -b)] = temp;
    }
    for (int a = 0; a < len; a++){
        cout << vector[a] << "\t";
    }
    cout << endl;
    return 0;
}
// Test.
