//
//  main.cpp
//  Test_Please_Ignore
//
//  Created by Chundian Zheng on 7/3/19.
//  Copyright © 2019 Chundian Zheng. All rights reserved.
//

#include <iostream>

using namespace std;

string chatTo(const string& toName, const string& content);
string chatFrom(const string& fromName, const string& content);

int main(){
    int trans;
    cout << "1. 发送消息\n2. 接收消息\n" << endl;
    cin >> trans;
    for (int i = 0; i < INT_MAX; i++){
        if (trans == 1){
            cout << "请输入好友名称：";
            string toName, content, toMsg;
            cin >> toName;
            cout << "请输入聊天内容：";
            cin >> content;
            toMsg = chatTo(toName, content);
            cout << toMsg << endl;
            break;
        }else if (trans == 2){
            cout << "请输入好友名称：";
            string fromName, content, toMsg;
            cin >> fromName;
            cout << "请输入聊天内容：";
            cin >> content;
            toMsg = chatFrom(fromName, content);
            cout << toMsg << endl;
            break;
        }else{
            cout << "请重新输入：";
            cin >> trans;
        }
    }
}

string chatTo(const string& toName, const string& content)
{
    string msg = "❇︎ 你悄悄地对「" + toName + "」说：" + content;
    return msg;
}

string chatFrom(const string& fromName, const string& content)
{
    string msg = "❇︎ 「" + fromName + "」悄悄地对你说：" + content;
    return msg;
}
