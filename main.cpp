//
//  main.cpp
//  prog1
//
//  Created by Chundian Zheng on 5/20/19.
//  Copyright © 2019 Chundian Zheng. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // insert code here...
    cout << fixed << setprecision(2);
    cout << "名称：德玛西亚之力•盖伦" << endl;
    float damage = 57.88f, damage_plus = 4.50f;
    int range = 172;
    cout << "伤害：" << damage << "(+" << damage_plus << ")\t\t" << "攻击距离：" << range << endl;
    double defense = 27.54, defense_plus = 3.00, magic_resist = 32.10, magic_resist_plus = 1.25;
    cout << "护甲：" << defense << "(+" << defense_plus << ")\t\t" << "魔抗：" << magic_resist << "(+" << magic_resist_plus << ")" << endl;
    float health = 616.28f, health_plus = 84.25f, health_healing = 7.84f, health_healing_plus = 0.50f;
    cout << "生命：" << health << "(+" << health_plus << ")\t\t" << "生命回复：" << health_healing << "(+" << health_healing_plus << ")" << endl;
    float mana = 0.00f, mana_plus = 0.00f, mana_healing = 0.00f, mana_healing_plus = 0.00f;
    cout << "法力：" << mana << "(+" << mana_plus << ")\t\t\t" << "法力回复：" << mana_healing << "(+" << mana_healing_plus << ")" << endl;
    long speed = 340;
    cout << "移速：" << speed << "\t\t\t\t\t定位：上单 辅助 打野" << endl;
    short cost = 450, golden_coin_cost = 1000;
    cout << "点券：" << cost << "\t\t\t\t\t金币：" << golden_coin_cost << endl;
    
    /*输出double类型数据
    cout << fixed; //强制控制小数位数
    cout << setprecision(9);//控制有效位数
    double doubleNum = 10.0 / 3.0;
    cout << doubleNum << endl;
    */
    
    
  /*宏定义方式
    const float PI = 3.14f;
    float radius = 4.5f;
    float height = 90.0f;
    double volume = PI * pow(radius, 2) * height;
    cout << "体积是：" << volume << endl;
   */
    return 0;
} 
