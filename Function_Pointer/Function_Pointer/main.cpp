//
//  main.cpp
//  Function_Pointer
//
//  Created by Chundian Zheng on 6/13/19.
//  Copyright © 2019 Chundian Zheng. All rights reserved.
//

#include <iostream>
#include "Header.h"
#include "Header_01.h"
#include <cmath>

using namespace std;

double (*ptr_calculation)(double, double);

int main() {
    double num1 = 0, num2 = 0;
    char operation;
    cout << "请输入：";
        cin >> num1 >> operation >> num2;
        switch (operation) {
            case '+':
                ptr_calculation = addition;
                break;
            case '-':
                ptr_calculation = subtraction;
                break;
            case '*':
                ptr_calculation = multiplication;
                break;
            case '/':
                ptr_calculation = division;
                break;
            default:
                std::cout << "请重新输入！" << std::endl;
                break;
        }
    print_result(ptr_calculation, num1, num2);
    return 0;
}
