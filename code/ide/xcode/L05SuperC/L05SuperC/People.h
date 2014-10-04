//
//  People.h
//  L01OOP
//
//  Created by hiquanta on 14-10-3.
//  Copyright (c) 2014年 hiquanta. All rights reserved.
//

#ifndef __L01OOP__People__
#define __L01OOP__People__

#include <iostream>
class People{
private: int age;
         int sex;
public:
    People();
    People(int age,int sex);
    int getAge();
    int getSex();
    void sayHello();
};

#endif /* defined(__L01OOP__People__) */
