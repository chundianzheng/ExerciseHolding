//
//  main.cpp
//  Test_Please_Ignore
//
//  Created by Chundian Zheng on 6/4/19.
//  Copyright © 2019 Chundian Zheng. All rights reserved.
//

#include <iostream>
#include <unistd.h>    //Linux Function library
#include <stdlib.h>
#include <vector>
//#include <algorithm>

int main() {
    
    //start-------------------------------------------------------------------------
    
    std::cout << "👸 MY PRINCESS 👸\n" << std::endl;
    sleep(2);
    std::cout << "Press Return Key to Start!" << std::endl;
    getchar();
    std::cout << "Background: you are born in 2017\n" << std::endl;
    
    
    //initialization field----------------------------------------------------------
    
    std::string name, blood_type, constellation, title;
    int month_birthday, month_classifying ,day_birthday;
    int sum_of_ability = 0;
    int max_of_ability = 0;
    int health, intelligence, charm, self_esteem, morality, temperament, feeling, consideration, power, magic;
    //  体力      智力          魅力      自尊          道德      气质          感受      体贴          武术      魔法
    
    //name--------------------------------------------------------------------------
    
    std::cout << "Insert your name (only one word and no symbol): ";
    std::cin >> name;
    
    
    //birthday----------------------------------------------------------------------
    std::cout << "Type your birthday in accordance with the format MM/DD:" << "\n" << "Month: ";
    std::cin >> month_birthday;
    while ((month_birthday <= 0) || (month_birthday >= 13)){
        std::cout << "Wrong! Please retype the month of birthday between 1 and 12: ";
        std::cin >> month_birthday;}
    int & mb = month_birthday; // reference for month_birthday
    if ((mb == 1)||(mb == 3)||(mb == 5)||(mb == 7)||(mb == 8)||(mb == 10)||(mb == 12)){
        month_classifying = 1;} // 31 days per month
    else if(mb == 2){
        month_classifying = 2;} // 28 days per month
    else{
        month_classifying = 3;} // 30 days per month
    switch (month_classifying) {
        case 1:
            std::cout << "Day: ";
            std::cin >> day_birthday;
            while ((day_birthday <= 0) || (day_birthday >= 31)) {
                std::cout << "Wrong! Please retype the day of birthday between 1 and 31: ";
                std::cin >> day_birthday;}
            break;
        case 2:
            std::cout << "Day: ";
            std::cin >> day_birthday;
            while ((day_birthday <= 0) || (day_birthday >= 28)) {
                std::cout << "Wrong! Please retype the day of birthday between 1 and 28: ";
                std::cin >> day_birthday;}
            break;
        default:
            std::cout << "Day: ";
            std::cin >> day_birthday;
            while ((day_birthday <= 0) || (day_birthday >= 30)) {
                std::cout << "Wrong! Please retype the day of birthday between 1 and 30: ";
                std::cin >> day_birthday;}
            break;}
    int & db = day_birthday; // reference for day_birthday
    
    //constellation (initial abilities)-----------------------------------------------------------------
    int& he = health; int& in = intelligence; int& ch = charm; int& se = self_esteem; int& mo = morality; int& te = temperament;
    int & fe = feeling; int& co = consideration; int& po = power; int& ma = magic;  //reference
    if (((mb == 3) && (db >= 21)) || ((mb == 4) && (db >= 19))){
        he = 80; in = 15; ch = 15; se = 25; mo = 11; te = 21; fe = 21; co = 10; po = 40; ma = 35;
        constellation = "Aries";}
    else if (((mb == 4) && (db >= 20)) || ((mb == 5) && (db <= 20))){
        he = 46; in = 30; ch = 28; se = 35; mo = 20; te = 29; fe = 20; co = 23; po = 20; ma = 30;
        constellation = "Taurus";}
    else if (((mb == 5) && (db >= 21)) || ((mb == 6) && (db <= 21))){
        he = 50; in = 35; ch = 23; se = 26; mo = 8; te = 20; fe = 42; co = 12; po = 25; ma = 40;
        constellation = "Gemini";}
    else if (((mb == 6) && (db >= 22)) || ((mb == 7) && (db <= 22))){
        he = 40; in = 31; ch = 33; se = 23; mo = 17; te = 33; fe = 37; co = 14; po = 16; ma = 40;
        constellation = "Cancer";}
    else if (((mb == 7) && (db >= 23)) || ((mb == 8) && (db <= 22))){
        he = 85; in = 9; ch = 11; se = 28; mo = 20; te = 37; fe = 10; co = 12; po = 37; ma = 25;
        constellation = "Leo";}
    else if (((mb == 8) && (db >= 23)) || ((mb == 9) && (db <= 22))){
        he = 35; in = 28; ch = 36; se = 19; mo = 18; te = 40; fe = 30; co = 32; po = 10; ma = 33;
        constellation = "Virgo";}
    else if (((mb == 9) && (db >= 23)) || ((mb == 10) && (db <= 23))){
        he = 42; in = 33; ch = 35; se = 24; mo = 32; te = 28; fe = 29; co = 18; po = 20; ma = 30;
        constellation = "Libra";}
    else if (((mb == 10) && (db >= 24)) || ((mb == 11) && (db <= 22))){
        he = 50; in = 25; ch = 40; se = 20; mo = 18; te = 17; fe = 33; co = 10; po = 18; ma = 45;
        constellation = "Scorpio";}
    else if (((mb == 11) && (db >= 23)) || ((mb == 12) && (db <= 21))){
        he = 57; in = 31; ch = 15; se = 26; mo = 19; te = 20; fe = 20; co = 23; po = 26; ma = 34;
        constellation = "Sagittarius";}
    else if (((mb == 12) && (db >= 22)) || ((mb == 1) && (db <= 19))){
        he = 56; in = 21; ch = 16; se = 22; mo = 25; te = 23; fe = 17; co = 40; po = 20; ma = 31;
        constellation = "Capricornus";}
    else if (((mb == 1) && (db >= 20)) || ((mb == 2) && (db <= 18))){
        he = 43; in = 43; ch = 20; se = 27; mo = 23; te = 17; fe = 32; co = 11; po = 17; ma = 38;
        constellation = "Aquarius";}
    else{
        he = 41; in = 20; ch = 29; se = 25; mo = 23; te = 32; fe = 35; co = 20; po = 19; ma = 35;
        constellation = "Pisces";}
    
    //blood type--------------------------------------------------------------------
    std::cout << "Insert your blood type (A, B, O, or AB): ";
    std::cin >> blood_type;
    std::cout << std::endl;
    while ((blood_type != "A") && (blood_type != "B") && (blood_type != "O") && (blood_type != "AB")){
        std::cout << "The accepted blood types are A, B, O, and AB" << "\n" << "Please insert again: ";
        std::cin >> blood_type;}
    if (blood_type == "A"){
        in += 1200;}
    else if (blood_type == "B"){
        te += 1200;}
    else if (blood_type == "AB"){
        he += 1200;}
    else{
        mo += 1200;}
    
    
    
    
    
    
    
    //sum of abilities and title--------------------------------------------------------------
    int& soa = sum_of_ability;
    std::vector<int> ability_box = {he, in, ch, se, mo, te, he, fe, co, po, ma};
    for (int i = 0; i < ability_box.size(); i++){
        soa += ability_box[i];}
    max_of_ability = ability_box[0];
    for (int i = 1; i < ability_box.size(); i++){
        if (ability_box[i] > max_of_ability){
            max_of_ability = ability_box[i];}}
    if (soa >= 2000){
        title = "Queen";}
    else if ((soa < 2000) && (soa >= 1800)){
        title = "Imperial Concubine";}
    else if ((soa < 1800) && (soa >= 1600)){
        title = "Chief";}
    else if ((soa < 1600) && (soa >= 1200) && (max_of_ability == in) && (he >= mo)){
        title = "President of Royal College";}
    else if ((soa < 1600) && (soa >= 1200) && (max_of_ability == te) && (ch >= he)){
        title = "Princess";}
    else if ((soa < 1600) && (soa >= 1200) && (max_of_ability == he) && (te >= ch)){
        title = "Royal Knight";}
    else if ((soa < 1600) && (soa >= 1200) && (max_of_ability == mo) && (ch >= te)){
        title = "Flamen";}
    else if ((soa < 1600) && (soa >= 1200) && (max_of_ability == ch) && (te >= mo)){
        title = "Empress";}
    else {
        title = "Enchanter";}
    
    //print your personal information-----------------------------------------------
    std::cout << "------------------------------\nPersonal Information\n" << std::endl;
    std::cout << "Name:\t\t\t" << name << std::endl;
    std::cout << "Birthday:\t\t2017/" << month_birthday << "/" << day_birthday << std::endl;
    std::cout << "Constellation:\t" << constellation << std::endl;
    std::cout << "Blood Type:\t\t" << blood_type << std::endl;
    std::cout << "Title:\t\t\t" << title << "\n" << std::endl;
    std::cout << "Health:\t\t\t" << he << std::endl;
    std::cout << "Intelligence:\t" << in << std::endl;
    std::cout << "Charm:\t\t\t" << ch << std::endl;
    std::cout << "Self-esteem:\t" << se << std::endl;
    std::cout << "Morality:\t\t" << mo << std::endl;
    std::cout << "Temperament:\t" << te << std::endl;
    std::cout << "Feeling:\t\t" << fe << std::endl;
    std::cout << "Consideration:\t" << co << std::endl;
    std::cout << "Power:\t\t\t" << po << std::endl;
    std::cout << "Magic:\t\t\t" << ma << std::endl;
    std::cout << "------------------------------" << std::endl;
    
    //ending code-------------------------------------------------------------------
    
    return 0;
}
