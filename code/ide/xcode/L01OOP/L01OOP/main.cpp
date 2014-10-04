//
//  main.cpp
//  L01OOP
//
//  Created by hiquanta on 14-10-3.
//  Copyright (c) 2014年 hiquanta. All rights reserved.
//

#include <iostream>
#include "People.h"
//class People{
//
//public:
//    void sayHello(){
//    
//        printf("Hello CPP\n");
//    }
//};

int main(int argc, const char * argv[])
{
    People *p =new People();
    p->sayHello();
    delete p;

    // insert code here...
//    std::cout << "Hello, World!\n";
    return 0;
}

