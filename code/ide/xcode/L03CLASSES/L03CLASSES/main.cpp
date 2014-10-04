//
//  main.cpp
//  L03CLASSES
//
//  Created by hiquanta on 14-10-3.
//  Copyright (c) 2014年 hiquanta. All rights reserved.
//

#include <iostream>
#include "Man.h"

int main(int argc, const char * argv[])
{
    Man *m=new Man();
    m->sayHello();
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

