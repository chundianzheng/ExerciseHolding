//
//  main.cpp
//  Test_Please_Ignore
//
//  Created by Chundian Zheng on 6/10/19.
//  Copyright © 2019 Chundian Zheng. All rights reserved.
//

#include <iostream>
#include <unistd.h>    //Linux Function library
#include <cstdlib>
#include <vector>
#include <ctime>
#include <iomanip>
//#include <algorithm>
using namespace std;
double random(double, double);

int main() {
    
    //start-------------------------------------------------------------------------
    
    std::cout << "👸 MY PRINCESS 👸\n" << std::endl;
    sleep(2);
    std::cout << "Press Return Key to Start!" << std::endl;
    getchar();
    std::cout << "Background: you are born in 2019\n" << std::endl;
    
    
    //initialization field----------------------------------------------------------
    
    std::string Pause;
    std::string name, blood_type, constellation, title;
    int month_birthday, month_classifying ,day_birthday;
    int max_of_ability = 0;
    int sum_of_abilities = 0;
    int health, intelligence, charm, self_esteem, morality, temperament, feeling, consideration, power, magic;
    
    
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
    int& fe = feeling; int& co = consideration; int& po = power; int& ma = magic;  //reference
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
    
    
    //blood type---------------------------------------------------------------------------------
    
    std::cout << "Insert your blood type (A, B, O, or AB): ";
    std::cin >> blood_type;
    std::cout << std::endl;
    while ((blood_type != "A") && (blood_type != "B") && (blood_type != "O") && (blood_type != "AB")){
        std::cout << "The accepted blood types are A, B, O, and AB" << "\n" << "Please insert again: ";
        std::cin >> blood_type;}
    
    
    //sum of abilities and title--------------------------------------------------------------
    std::vector<int> ability_box = {he, in, ch, se, mo, te, he, fe, co, po, ma};
    for (int i = 0; i < ability_box.size(); i++){
        sum_of_abilities += ability_box[i];}
    max_of_ability = ability_box[0];
    for (int i = 1; i < ability_box.size(); i++){
        if (ability_box[i] > max_of_ability){
            max_of_ability = ability_box[i];}}
    if (sum_of_abilities >= 2000){
        title = "Queen";}
    else if ((sum_of_abilities < 2000) && (sum_of_abilities >= 1800)){
        title = "Imperial Concubine";}
    else if ((sum_of_abilities < 1800) && (sum_of_abilities >= 1600)){
        title = "Chief";}
    else if ((sum_of_abilities < 1600) && (sum_of_abilities >= 1200) && (max_of_ability == in) && (he >= mo)){
        title = "President of Royal College";}
    else if ((sum_of_abilities < 1600) && (sum_of_abilities >= 1200) && (max_of_ability == te) && (ch >= he)){
        title = "Princess";}
    else if ((sum_of_abilities < 1600) && (sum_of_abilities >= 1200) && (max_of_ability == he) && (te >= ch)){
        title = "Royal Knight";}
    else if ((sum_of_abilities < 1600) && (sum_of_abilities >= 1200) && (max_of_ability == mo) && (ch >= te)){
        title = "Flamen";}
    else if ((sum_of_abilities < 1600) && (sum_of_abilities >= 1200) && (max_of_ability == ch) && (te >= mo)){
        title = "Empress";}
    else {
        title = "Enchanter";}
    
    
    //print your personal information-----------------------------------------------
    
    std::cout << "\n------------------------------\nPersonal Information\n" << std::endl;
    std::cout << "Name:\t\t\t" << name << std::endl;
    std::cout << "Birthday:\t\t2019/" << month_birthday << "/" << day_birthday << std::endl;
    std::cout << "Constellation:\t" << constellation << std::endl;
    std::cout << "Blood Type:\t\t" << blood_type << std::endl;
    std::cout << "Title:\t\t\t" << title << "\n" << std::endl;  // below items need recalculation
    std::cout << "Initial Money:\t" << 500 << "\n" << std::endl;
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
    std::cout << "------------------------------\n" << std::endl;
    
    
    //Game Body---------------------------------------------------------------------
    
    //initialization
    int money = 500, age = 18; //initial money
    
    //Main loop
    for (int year = 2038; year <= 2038 + 7; year++){   //year augment gradually
        for (int month = (year == 2038) ? month_birthday : 1; month <= 12; month++){ //month circulation
            
            // Birthday Gift
            int choice = 0;
            if (month == month_birthday){
                std::cout << "\nToday is your birthday! Send a gift or not?\n" << "1.Yes\n" << "2.No\n" << std::endl;
                std::cin >> choice;
                for (int i = 0; i < INT_MAX; i++){
                    if (choice == 1){
                        if (money - 50 < 0){
                            std::cout << "You don't have enough money!" << std::endl;
                            break;}
                        else{
                        std::cout << "\nYou spend 50 coins to send a gift; the temperament and feeling increased\n" << std::endl;
                        money -= 50;
                        te += 5;
                        fe += 5;
                        break;}}
                    else if(choice == 2){
                        break;}
                    else{
                        std::cout << "Wrong! Please Retype!\n" << std::endl;
                        std::cin >> choice;}}}
            
            //Menu
            choice = 0;
            for (int i = 0; i < INT_MAX; i++){
                std::cout << "\nMenu\n1.Information\n2.Activities\n3.Conversation with Parents\n4.Archive\n5.Load\n" << std::endl;
                std::cin >> choice;
                //information
                if (choice == 1){
                    sum_of_abilities = in + he + ch + se + mo + te + fe + co + po + ma;
                    max_of_ability = in;
                    if (he > max_of_ability){
                        max_of_ability = he;}
                    if (ch > max_of_ability){
                        max_of_ability = ch;}
                    if (se > max_of_ability){
                        max_of_ability = se;}
                    if (mo > max_of_ability){
                        max_of_ability = mo;}
                    if (te > max_of_ability){
                        max_of_ability = te;}
                    if (fe > max_of_ability){
                        max_of_ability = fe;}
                    if (co > max_of_ability){
                        max_of_ability = co;}
                    if (po > max_of_ability){
                        max_of_ability = po;}
                    if (ma > max_of_ability){
                        max_of_ability = ma;}
                    if (sum_of_abilities >= 2000){
                        title = "Queen";}
                    else if ((sum_of_abilities < 2000) && (sum_of_abilities >= 1800)){
                        title = "Imperial Concubine";}
                    else if ((sum_of_abilities < 1800) && (sum_of_abilities >= 1600)){
                        title = "Chief";}
                    else if ((sum_of_abilities < 1600) && (sum_of_abilities >= 1200) && (max_of_ability == in) && (he >= mo)){
                        title = "President of Royal College";}
                    else if ((sum_of_abilities < 1600) && (sum_of_abilities >= 1200) && (max_of_ability == te) && (ch >= he)){
                        title = "Princess";}
                    else if ((sum_of_abilities < 1600) && (sum_of_abilities >= 1200) && (max_of_ability == he) && (te >= ch)){
                        title = "Royal Knight";}
                    else if ((sum_of_abilities < 1600) && (sum_of_abilities >= 1200) && (max_of_ability == mo) && (ch >= te)){
                        title = "Flamen";}
                    else if ((sum_of_abilities < 1600) && (sum_of_abilities >= 1200) && (max_of_ability == ch) && (te >= mo)){
                        title = "Empress";}
                    else {
                        title = "Enchanter";}
                    std::cout << "\n------------------------------\nPersonal Information\n" << std::endl;
                    std::cout << "Name:\t\t\t" << name << std::endl;
                    std::cout << "Birthday:\t\t2019/" << month_birthday << "/" << day_birthday << std::endl;
                    std::cout << "Constellation:\t" << constellation << std::endl;
                    std::cout << "Blood Type:\t\t" << blood_type << std::endl;
                    std::cout << "Title:\t\t\t" << title << "\n" << std::endl;  // below items need recalculation
                    std::cout << "Money:\t\t\t" << money << std::endl;
                    std::cout << "Date:\t\t\t" << year << "/" << month << std::endl;
                    std::cout << "Age:\t\t\t" << age << "\n" << std::endl;
                    cout << left;
                    std::cout << "Health:\t\t\t" << setw(8) << he;
                    double temp;
                    temp = he / 20;
                    if (temp > 10){
                        temp = 10;}
                    for (int i = 0; i < (int)temp; i++){
                        std::cout << "⬛️";}
                    for (int i = 0; i < 10 - (int)temp; i++){
                        std::cout << "⬜️";}
                    std::cout << std::endl;
                    std::cout << "Intelligence:\t" << setw(8) << in;
                    temp = in / 20;
                    if (temp > 10){
                        temp = 10;}
                    for (int i = 0; i < (int)temp; i++){
                        std::cout << "⬛️";}
                    for (int i = 0; i < 10 - (int)temp; i++){
                        std::cout << "⬜️";}
                    std::cout << std::endl;
                    std::cout << "Charm:\t\t\t" << setw(8) << ch;
                    temp = ch / 20;
                    if (temp > 10){
                        temp = 10;}
                    for (int i = 0; i < (int)temp; i++){
                        std::cout << "⬛️";}
                    for (int i = 0; i < 10 - (int)temp; i++){
                        std::cout << "⬜️";}
                    std::cout << std::endl;
                    std::cout << "Self-esteem:\t" << setw(8) << se;
                    temp = se / 20;
                    if (temp > 10){
                        temp = 10;}
                    for (int i = 0; i < (int)temp; i++){
                        std::cout << "⬛️";}
                    for (int i = 0; i < 10 - (int)temp; i++){
                        std::cout << "⬜️";}
                    std::cout << std::endl;
                    std::cout << "Morality:\t\t" << setw(8) << mo;
                    temp = mo / 20;
                    if (temp > 10){
                        temp = 10;}
                    for (int i = 0; i < (int)temp; i++){
                        std::cout << "⬛️";}
                    for (int i = 0; i < 10 - (int)temp; i++){
                        std::cout << "⬜️";}
                    std::cout << std::endl;
                    std::cout << "Temperament:\t" << setw(8) << te;
                    temp = te / 20;
                    if (temp > 10){
                        temp = 10;}
                    for (int i = 0; i < (int)temp; i++){
                        std::cout << "⬛️";}
                    for (int i = 0; i < 10 - (int)temp; i++){
                        std::cout << "⬜️";}
                    std::cout << std::endl;
                    std::cout << "Feeling:\t\t" << setw(8) << fe;
                    temp = fe / 20;
                    if (temp > 10){
                        temp = 10;}
                    for (int i = 0; i < (int)temp; i++){
                        std::cout << "⬛️";}
                    for (int i = 0; i < 10 - (int)temp; i++){
                        std::cout << "⬜️";}
                    std::cout << std::endl;
                    std::cout << "Consideration:\t" << setw(8) << co;
                    temp = co / 20;
                    if (temp > 10){
                        temp = 10;}
                    for (int i = 0; i < (int)temp; i++){
                        std::cout << "⬛️";}
                    for (int i = 0; i < 10 - (int)temp; i++){
                        std::cout << "⬜️";}
                    std::cout << std::endl;
                    std::cout << "Power:\t\t\t" << setw(8) << po;
                    temp = po / 20;
                    if (temp > 10){
                        temp = 10;}
                    for (int i = 0; i < (int)temp; i++){
                        std::cout << "⬛️";}
                    for (int i = 0; i < 10 - (int)temp; i++){
                        std::cout << "⬜️";}
                    std::cout << std::endl;
                    std::cout << "Magic:\t\t\t" << setw(8) << ma;
                    temp = ma / 20;
                    if (temp > 10){
                        temp = 10;}
                    for (int i = 0; i < (int)temp; i++){
                        std::cout << "⬛️";}
                    for (int i = 0; i < 10 - (int)temp; i++){
                        std::cout << "⬜️";}
                    std::cout << std::endl;
                    std::cout << "------------------------------\n" << std::endl;}
                
                //activities
                else if (choice == 2){
                    for (int i = 0; i < INT_MAX; i++){
                        int choice1, money_temp, temp1, temp2, temp3;
                        cout << "\n1.Learning Kung Fu\n2.Going to School\n3.Learning the Etiquette\n4.Practicing Out of the City\n5.Working\n" << endl;
                        cin >> choice1;
                        if (choice1 == 1){
                            if (money >= 60){
                            money_temp = (int)random(20, 60);
                            temp1 = (int)random(2, 10);
                            temp2 = (int)random(2, 10);
                            temp3 = (int)random(2, 10);
                            money -= money_temp;
                            he += temp1;
                            ch += temp2;
                            po += temp3;
                            cout << "\nYou cost " << money_temp << " golds to increase health(+" << temp1 << "), charm(+" << temp2 << "), and power(+" << temp3 << ")." << endl;
                            cout << "A Month Passed\n" << endl;
                            break;
                            }else{
                                cout << "\nYou don't have enough money to learn! The choice for working is the only available item.\n" << endl;}
                        }else if (choice1 == 2){
                            if (money >= 61){
                            money_temp = (int)random(19, 61);
                            temp1 = (int)random(2, 10);
                            temp2 = (int)random(2, 10);
                            temp3 = (int)random(2, 10);
                            money -= money_temp;
                            in += temp1;
                            se += temp2;
                            ma += temp3;
                            cout << "\nYou cost " << money_temp << " golds to increase intelligence(+" << temp1 << "), self esteem(+" << temp2 << "), and magic(+" << temp3 << ")." << endl;
                            cout << "A Month Passed\n" << endl;
                            break;
                            }else{
                                cout << "\nYou don't have enough money to learn! The choice for working is the only available item.\n" << endl;}
                        }else if (choice1 == 3){
                            if (money >= 62){
                            money_temp = (int)random(21, 62);
                            temp1 = (int)random(2, 10);
                            temp2 = (int)random(2, 10);
                            temp3 = (int)random(2, 10);
                            money -= money_temp;
                            ch += temp1;
                            mo += temp2;
                            co += temp3;
                            cout << "\nYou cost " << money_temp << " golds to increase charm(+" << temp1 << "), morality(+" << temp2 << "), cosideration(+" << temp3 << ")." << endl;
                            cout << "A Month Passed\n" << endl;
                            break;
                            }else{
                                cout << "\nYou don't have enough money to learn! The choice for working is the only available item.\n" << endl;}
                        }else if (choice1 == 4){
                            if (money >= 63){
                            money_temp = (int)random(22, 63);
                            temp1 = (int)random(2, 11);
                            temp2 = (int)random(2, 11);
                            temp3 = (int)random(2, 11);
                            money -= money_temp;
                            he += temp1;
                            te += temp2;
                            fe += temp3;
                            cout << "\nYou cost " << money_temp << " golds to increase health(+" << temp1 << "), temperament(+" << temp2 << "), feeling(+" << temp3 << ")." << endl;
                            cout << "A Month Passed\n" << endl;
                            break;
                            }else{
                                cout << "\nYou don't have enough money to learn! The choice for working is the only available item.\n" << endl;}
                        }else if (choice1 == 5){
                            money_temp = (int)random(50, 200);
                            money += money_temp;
                            cout << "\nYou earned " << money_temp << " golds by hard working!\n" << endl;
                            cout << "A Month Passed\n" << endl;
                            break;
                        }else{
                            cout << "\nWrong! Please insert again!\n" << endl;}}
                    break;}
                
                //Conversation with parents---------------------------------------------------------------------------
                else if (choice == 3){
                    for (int i = 0; i < INT_MAX; i++){
                    int choice2, temp1, temp2, temp3;
                    //conversation
                    cout << "\n1.Praise\n2.Strictly Rebuke\n" << endl;
                    cin >> choice2;
                        if (choice2 == 1){
                            temp1 = (int)random(0, 5);
                            temp2 = (int)random(0, 5);
                            temp3 = (int)random(0, 5);
                            ch += temp1;
                            te += temp2;
                            fe += temp3;
                            cout << "\nYou are praised by your parent yet; and gain additional boost in aspects of charm(+" << temp1 << "), temperament(+" << temp2 << "), and feeling(+" << temp3 << ").\n" << endl;
                            break;}
                        else if (choice2 == 2){
                            temp1 = (int)random(0, 5);
                            temp2 = (int)random(0, 5);
                            temp3 = (int)random(0, 5);
                            se += temp1;
                            mo += temp2;
                            co += temp3;
                            cout << "\nYou are strictly rebuked by your parent yet; and gain additional boost in aspects of self esteem(+" << temp1 << "), morality(+" << temp2 << "), and consideration(+" << temp3 << ").\n" << endl;
                            break;}
                        else{
                            cout << "\nWrong! Please insert again!\n" << endl;}}
                    break;}
                
                
                else if (choice == 4){
                    //archive (undeveloped)
                    break;
                }
                
                
                else if (choice == 5){
                    //load (undeveloped)
                    break;
                }
                
                
                else{
                    std::cout << "Wrong! Please Retype!\n" << std::endl;
                    std::cin >> choice;}}
            if (month == month_birthday){
                age++;}
            
        }
        
        
        //Blood type boost--------------------------------------------------------
        if (blood_type == "A"){
            in *= 1.07;}
        else if (blood_type == "B"){
            te *= 1.07;}
        else if (blood_type == "AB"){
            he *= 1.07;}
        else{
            mo *= 1.07;}}
    
    
    //ending code-------------------------------------------------------------------
    cout << "\n--------------------\n🌈ENDING🌈\n\nFinally, you got the place!\nMy " << title << "!\n" << "--------------------" << endl;
    
    return 0;
}


//random numbers generator----------------------------------------------------------
double random(double start, double end){
    return start + (end - start) * rand() / (RAND_MAX + 1.0);
}

