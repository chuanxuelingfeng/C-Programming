//
//  People.cpp
//  L01OOP
//
//  Created by hiquanta on 14-10-3.
//  Copyright (c) 2014年 hiquanta. All rights reserved.
//

#include "People.h"
People::People(){
    this->age=10;
    this->sex=1;
};
People::People(int age,int sex){
    this->age=age;
    this->sex=sex;
}
int People::getAge(){
    return this->age;
}
int People::getSex(){
    return this->getSex();
}
void People::sayHello(){
    printf("Hello CPP\n");
};
