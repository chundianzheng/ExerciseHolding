//
//  Header_01.h
//  Function_Pointer
//
//  Created by Chundian Zheng on 6/13/19.
//  Copyright © 2019 Chundian Zheng. All rights reserved.
//

#ifndef Header_01_h
#define Header_01_h

#include <iostream>

using namespace std;

void print_result(double (*)(double, double), double, double);

void print_result(double (*ptr_calculator)(double, double), double num1, double num2){
    double result = ptr_calculator(num1, num2);
    cout << "计算结果为：" << result << endl;
}

#endif /* Header_01_h */
