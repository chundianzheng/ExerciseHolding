//
//  main.cpp
//  Function02
//
//  Created by Chundian Zheng on 6/13/19.
//  Copyright © 2019 Chundian Zheng. All rights reserved.
//

#include <iostream>
#include "Header.h"

int main() {

    int values[5];
    int len = sizeof(values)/sizeof(int);
    input(values, &len);
    output(values, values + len - 1);
    
    return 0;
}
