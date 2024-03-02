//
//  Demo02.c
//  TestSDSC
//
//  Created by 唐鹏翔 on 2017/1/18.
//  Copyright © 2017年 pix. All rights reserved.
//

#include "Demo02.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void TestDataType()
{
    printf("FUNC TestDataType() Run...\n");
    int a ;  //告诉编译器分配4个字节的内存
    int b[10] = {0}; //告诉编译器分配40个字节的内存
    printf("b : %d ,b + 1 : %d,&b : %d,&b + 1 : %d \n",b,b+1,&b,&b + 1);
    
    printf("\nFUNC TestDataType() End...\n");
    
}

typedef struct _Teacher
{
    char name[64];
    int age;
} Teacher;

void TestDefineType()
{
    printf("FUNC TestDefineType() Run...\n");
    Teacher t1;
    t1.age = 25;
    printf("FUNC TestDefineType() End...\n");
}
