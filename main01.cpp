//
//  main.cpp
//  homework2
//
//  Created by Chundian Zheng on 5/26/19.
//  Copyright © 2019 Chundian Zheng. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int day;
    int dayofweek;
    cout << "Please type the total number of days of this month: ";
    cin >> day;
    cout << "What day is the first day of this month? Answer: ";
    cin >> dayofweek;
    
    if ((dayofweek >= 2) && (dayofweek <= 7))
    {
        cout << "Mon\t\tTue\t\tWed\t\tThu\t\tFri\t\tSat\t\tSun"<< endl;
        for (int i = 2; i <= dayofweek; i++)
        {
            cout << "\t\t";
        }
        
        for (int i = 1; i <= day; i++)
        {
            if (i % 7 == (8 - dayofweek))
            {
                cout << i << endl;
            }
            else
            {
                cout << i << "\t\t";
            }
        }
    }
    else if (dayofweek == 1)
    {
        cout << "Mon\t\tTue\t\tWed\t\tThu\t\tFri\t\tSat\t\tSun"<< endl;
        for (int i = 1; i <= day; i++)
        {
            if (i % 7 == 0)
            {
                cout << i << endl;
            }
            else
            {
                cout << i << "\t\t";
            }
        }
    }
    else
    {
        cout << "The day of week must be between 1 and 7!";
    }
    cout << endl;
    return 0;
}
