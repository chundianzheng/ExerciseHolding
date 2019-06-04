//
//  main.cpp
//  Test_Please_Ignore
//
//  Created by Chundian Zheng on 6/3/19.
//  Copyright © 2019 Chundian Zheng. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    // two dimensional array------------------------------------------------------------------
    string student_names[3] {"张三","李四","王五"};
    string course_names[3] {"语文","数学","英语"};

    string scores[3][3] {};
    for (int i = 0; i < 3; i++){ // student names
        for (int j = 0; j < 3; j++){ // course names
            cout << "请输入" << student_names[i] << "的" << course_names[j] << "成绩: ";
            cin >> scores[i][j];
        }
    }
    cout << "\n\t";
    for (int i = 0; i < 3; i++){
        cout << course_names[i] << "\t";
    }
    cout << endl;
    for (int i = 0; i < 3; i++){
        cout << student_names[i];
        for (int j = 0; j < 3; j++){
            cout << "\t" << scores[i][j];
        }
        cout << endl;
    }
    return 0;
}
// Test.
