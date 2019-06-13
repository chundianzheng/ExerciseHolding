//
//  Header.h
//  Function_Pointer
//
//  Created by Chundian Zheng on 6/13/19.
//  Copyright © 2019 Chundian Zheng. All rights reserved.
//

#ifndef Header_h
#define Header_h

#include <iostream>

using namespace std;

double addition(double, double);
double subtraction(double, double);
double multiplication(double, double);
double division(double, double);

double addition(double num1, double num2){
    double result = num1 + num2;
    return result;
}

double subtraction(double num1, double num2){
    double result = num1 - num2;
    return result;
}

double multiplication(double num1, double num2){
    double result = num1 * num2;
    return result;
}

double division(double num1, double num2){
    if (num2 == 0){
        cout << "分母不为零！" << endl;
        return 1;
    }
    double result = num1 / num2;
    return result;
}




#endif /* Header_h */
