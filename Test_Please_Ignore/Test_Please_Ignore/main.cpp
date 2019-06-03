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

    double vector[] {8, 4, 2, 1, 23, 344, 12}; //the aim vector we wanna sort
    //the sortord method of the array: Bubble Sort----------------------------------------------------------
    int len = sizeof(vector) / sizeof(double);
    
    for (int j = 1; j < len; j++){
        for (int i = 0; i < (len - 1); i++){
            if (vector[i] > vector[(i + 1)]){
                double temp = vector[i];
                vector[i] = vector[(i + 1)];
                vector[(i + 1)] = temp;
            }
        }
    }
    for (int a = 0; a < len; a++){
        cout << vector[a] << "\t";
    }
    cout << endl;
}
// Test.
