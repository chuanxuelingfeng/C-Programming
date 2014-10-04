//
//  main.cpp
//  L02NS
//
//  Created by hiquanta on 14-10-3.
//  Copyright (c) 2014年 hiquanta. All rights reserved.
//

#include <iostream>
#include "People.h"
using namespace hiquanta;

int main(int argc, const char * argv[])
{
    People *P=new People();
    P->sayHello();
    delete P;
    // insert code here...
   // std::cout << "Hello, World!\n";
    return 0;
}

