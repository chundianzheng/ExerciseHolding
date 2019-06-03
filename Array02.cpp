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

    double vector[] {8, 4, 2, 1, 23, 344, 12, 999, 57}; //the aim vector we wanna sort
    //the sortord method of the array: Selection Sort----------------------------------------------------------
    int len = sizeof(vector) / sizeof(double);

    for (int i = 0; i < (len - 1); i++){
        double minimum = vector[i];
        for (int j = i; j < len; j++){
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
    cout << endl;
    return 0;
}
// Test.
