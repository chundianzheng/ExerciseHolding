//
//  main.cpp
//  Test_Please_Ignore
//
//  Created by Chundian Zheng on 6/13/19.
//  Copyright © 2019 Chundian Zheng. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double sum(double, double);
double cuboid_vol(double, double, double);
double cylinder_vol(double, double);
double cone_vol(double, double);

int main(){
    cout.precision(2);
    for (int j = 0; j < INFINITY; j++){
    int choice = 0;
    cout << "欢迎使用本软件！\n\n1.计算两数之和\n2.计算长方形的体积\n3.计算圆柱体的体积\n4.计算圆锥体的体积\n5.退出\n" << endl;
    for (int i = 0; i < INT_MAX; i++){
        int temp;
        cin >> temp;
        if ((temp == 1) || (temp == 2) || (temp == 3) || (temp == 4) || (temp == 5)){
            choice = temp;
            break;
        }else{
            cout << "请重新输入！\n" << endl;
        }
    }
    if (choice == 1) {
        cout << "请输入两个数：";
        double num1, num2;
        cin >> num1 >> num2;
        double s = sum(num1, num2);
        cout << "两数之和为：" << fixed << s << endl;
        cout << endl;
    }else if (choice == 2){
        cout << "请出入长方体的长宽高：";
        double length, width, height;
        cin >> length >> width >> height;
        double v = cuboid_vol(length, width, height);
        cout << "长方体的体积为：" << fixed << v << endl;
        cout << endl;
    }else if (choice == 3){
        cout << "请输入圆柱体的半径与高：";
        double radius, height;
        cin >> radius >> height;
        double v = cylinder_vol(radius, height);
        cout << "圆柱体的体积为：" << fixed << v << endl;
        cout << endl;
    }else if (choice == 4){
        cout << "请输入圆锥体的半径与高：";
        double radius, height;
        cin >> radius >> height;
        double v = cone_vol(radius, height);
        cout << "圆锥体的体积为：" << fixed << v << endl;
        cout << endl;
    }else{
        break;
    }
    }
    return 0;
}

//两数之和
double sum(double sum1, double sum2){
    double result = sum1 + sum2;
    return result;
}

//长方形的体积
double cuboid_vol(double length, double width, double height){
    double volume = length * width * height;
    return volume;
}

//圆柱体的体积
double cylinder_vol(double radius, double height){
    double pi = atan(1.0);
    double volume = pi * pow(radius, 2) * height;
    return volume;
}

//圆锥体的体积
double cone_vol(double radius, double height){
    double pi = atan(1.0) / 3;
    double volume = pi * pow(radius, 2) * height;
    return volume;
}
