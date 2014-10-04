//
//  main.cpp
//  L04CMethed
//
//  Created by hiquanta on 14-10-4.
//  Copyright (c) 2014年 hiquanta. All rights reserved.
//

#include <iostream>
class Object{
public:
    Object(){
        printf("Create Object\n");
    }
    ~Object(){
        printf("Delete Object\n");
    
    }
    
    
};
void RunObject(){
    {
    Object obj;
    }
    printf("RunObject\n");
}

int main(int argc, const char * argv[])
{
//    Object *obj=new Object();
//    delete obj;
    RunObject();
    printf("end");
    
    return 0;
}

