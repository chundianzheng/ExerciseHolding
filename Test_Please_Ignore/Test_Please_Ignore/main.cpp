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
    int number;
    cout << "请输入一个你想要查找的数：";
    cin >> number;
    int vector[] {8, 4, 2, 1, 23, 344, 12};
    int len = sizeof(vector) / sizeof(int); //计算数列内元素的个数
    //求最小值--------------------------------------------------------------------------------
    int transient = INT_MAX;//用来比较保存的中间变量
    int count = 0;//输出下标
    for (int i = 0; i <= (len - 1); i++){
        if (vector[i] < transient){
            transient = vector[i];
            count = i + 1;
        }
    }
    cout << "数组中的最小值为：" << transient << "，\t该值为数组中的第" << count << "个数" << endl;
    //求最大值--------------------------------------------------------------------------------
    transient = INT_MIN;
    count = 0;
    for (int i = 0; i <= (len - 1); i++){
        if (vector[i] > transient){
            transient = vector[i];
            count = i + 1;
        }
    }
    cout << "数组中的最大值为：" << transient << "，\t该值为数组中的第" << count << "个数" << endl;
    //求和-----------------------------------------------------------------------------------
    int sum = 0;
    for (int i = 0; i <= (len - 1); i++){
        sum += vector[i];
    }
    cout << "数组中所有元素的和为：" << sum << endl;
    //求平均值--------------------------------------------------------------------------------
    double average = (double)sum / len;
    cout << fixed << setprecision(4);
    cout << "数组所有元素的平均值为：" << average << endl;
    //数组中的奇数值个数------------------------------------------------------------------------
    count = 0;
    for (int i = 0; i <= (len - 1); i++){
        if (vector[i] % 2 == 1){
            count++;
        }
    }
    cout << "数组中所有元素的奇数个数为：" << count << endl;
    //数组中的偶数值个数------------------------------------------------------------------------
    count = 0;
    for (int i = 0; i <= (len - 1); i++){
        if (vector[i] % 2 == 0){
            count++;
        }
    }
    cout << "数组中所有元素的偶数个数为：" << count << endl;
    //查找对应数字----------------------------------------------------------------------------
    count = -1;
    for (int i = 0; i <= (len - 1); i++){
        if (vector[i] == number){
            cout << "您查找的值为：" << number << ",\t是数组中的第" << i + 1 << "个数" << endl;
            count = i + 1;
        }
    }
    if (count == -1){
        cout << "您输入的值不存在" << endl;
    }
}
// Test.
