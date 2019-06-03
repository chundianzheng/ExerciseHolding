//
//  main.cpp
//  Test_Please_Ignore
//
//  Created by Chundian Zheng on 6/3/19.
//  Copyright © 2019 Chundian Zheng. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <new>

using namespace std;

int main() {
    double vector[] {8, 4, 2, 1, 23, 344, 12, 598, 57, 4}, number; //the aim vector we wanna sort
    //the sortord method of the array: Selection Sort----------------------------------------------------------
    int len = sizeof(vector) / sizeof(double);
    double vector_plus[(len + 1)], vector_1[len];//
    for (int i = 0; i < (len - 1); i++)
    {
        double minimum = vector[i];
        for (int j = i + 1; j < len; j++)
        {
            if (vector[j] < minimum)
            {
                minimum = vector[j];
                vector[j] = vector[i];
                vector[i] = minimum;
            }
        }
    }
    for (int a = 0; a < len; a++) cout << vector[a] << "\t";
    cout << "\n" << endl;
    for (int i = 0; i < len; i++)
        vector_1[i] = vector[i];
    //reserved order-------------------------------------------------------------------------------------------
    int len_plus, temp;
    int count = 0;
    if (len % 2 == 0)
        len_plus = len / 2;
    else
        len_plus = (len - 1) / 2;
    for (int b = 0; b < len_plus; b++)
    {
        temp = vector[b];
        vector[b] = vector[(len - 1 - b)];
        vector[(len - 1 - b)] = temp;
    }
    for (int a = 0; a < len; a++)
        cout << vector[a] << "\t";
    cout << "\n" << endl;
    //insert an additional number and keep the sortord same----------------------------------------------------
    cout << "Please insert a number: ";
    cin >> number;
    if (vector_1[(len - 1)] < number)
    {
        vector_plus[len] = number;
        for (int i = 0; i < len; i++)
            vector_plus[i] = vector_1[i];
    }
    else
    {
        for (int i =0; i < len; i++)
        {
            if (vector_1[i] >= number)
            {
                count = i;
                break;
            }
        }
        for (int i = 0; i < len; i++)
        {
            if (vector_1[i] < number)
                vector_plus[i] = vector_1[i];
            else
                vector_plus[(i+1)] = vector_1[i];
        }
            vector_plus[count] = number;
    }
    for (int a = 0; a < (sizeof(vector_plus) / sizeof(double)); a++)
        cout << vector_plus[a] << "\t";
    cout << "\n" << endl;
    //reversed order------------------------------------------------------------------------------------------
    int len_1 = (int)sizeof(vector_plus) / sizeof(double);
    if (len_1 % 2 == 0)
        len_plus = len_1 / 2;
    else
        len_plus = (len_1 - 1) / 2;
    for (int b = 0; b < len_plus; b++)
    {
        temp = vector_plus[b];
        vector_plus[b] = vector_plus[(len_1 - 1 - b)];
        vector_plus[(len_1 - 1 - b)] = temp;
    }
    for (int a = 0; a < len_1; a++)
        cout << vector_plus[a] << "\t";
    cout << "\n" << endl;
    return 0;
}
// Test.
