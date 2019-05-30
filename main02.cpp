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
    cout << "Please insert an positive integral number: ";
    int row;
    cin >> row;
    if (row % 2 == 1)
    {
        row++;
    }
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row - i; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i >= 2)
        {
            for (int j = 1; j <= 2 * i - 3; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= row - 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i <= row - 2)
        {
            for (int j = 1; j <= 2 * row - 3 - 2 * i; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
