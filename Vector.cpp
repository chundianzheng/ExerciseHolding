//
//  main.cpp
//  Test_Please_Ignore
//
//  Created by Chundian Zheng on 6/3/19.
//  Copyright © 2019 Chundian Zheng. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<double> vec = {1.3, 14.8, 467.8, 1342.9};
    //insert a number into above vector-----------------------------------------------------
    vec.push_back(250.5);// insert a number at the end of vector
    
    //method 1 to print vector--------------------------------------------------------------
    for (int i = 0; i < vec.size(); i++){
        cout << vec[i] << endl;
    }
    //method 2 to print vector--------------------------------------------------------------
    vector<double>::iterator it; // set the kind of iterator and name
    for (it = vec.begin(); it < vec.end(); ++it){
        cout << *it << endl; // actually, the iterator is a pointer
    }
    
    //sortord-------------------------------------------------------------------------------
    sort(vec.begin(), vec.end());// positive sequence
    reverse(vec.begin(), vec.end());// reversed sortord
    for (it = vec.begin(); it < vec.end(); ++it){
        cout << *it << endl;
    }
    
    return 0;
}
// Test.
/*Notebook---------------------------------------------------------------------------------
vector的常用操作
 clear()        移除容器中的所有数据                 empty()                  判断容器是否为空
 size()         返回容器中元素的个数                 [index]或者at(index)      返回索引为index的元素
 erase(pos)     删除pos位置处的数据                 erase(beg, end)          删除该区间的数据
 front()        返回首元素                         insert(pos, elem)        在pos处插入一个元素
 pop_back()     删除最后一个元素                    push_back(elem)          在元素末尾插入一个元素
 resize(num)    重新设置容器大小。                  begin()或者end()          返回容器首位元素的迭代器
 */
