//
//  Demo01.c
//  TestSDSC
//
//  Created by 唐鹏翔 on 2017/1/17.
//  Copyright © 2017年 pix. All rights reserved.
//

#include "Demo01.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 方法定义
void PrintArr(int * arr,int len);
void SortArr(int * arr,int len);

/**
 不抽象方法，直接排序
 */
void TestSort01()
{
    printf("FUNC TestSort01() Run...\n");
    int arr [] = {22,33,5,23,14,8};
    int len = sizeof(arr) / sizeof(int);
    printf("排序前数据:");
    int i = 0;
    for (i = 0;i < len;i++)
    {
        printf("%d, ",arr[i]);
    
    }
    
    // 选择排序
    int j,k;
    for (j = 0; j < len; j++)
    {
        for (k = j+1 ;k < len ;k++)
        {
            int tmp = arr[j];
            if(arr[j] > arr[k])
            {
                arr[j] = arr[k];
                arr[k] = tmp;
            }
        }
    }
    printf("\n选择排序后数据:");
    int l = 0;
    for (l = 0;l < len ;l++)
    {
        printf("%d, ",arr[l]);
    }
    
    // TODO 冒泡排序
    
    printf("\nFUNC TestSort01() End...\n");
    
}

void TestSortFunc()
{
    printf("FUNC TestSortFunc() Run...\n");
    int arr[] = {22,33,5,23,14,8};
    printf("排序前打印:\n");
    PrintArr(&arr[0],sizeof(arr) / sizeof(int));
    //进行排序
    SortArr(&arr[0],sizeof(arr)/sizeof(int));
    
    printf("\n排序后打印:\n");
    PrintArr(&arr[0],sizeof(arr) / sizeof(int));
    
    printf("\nFUNC TestSortFunc() End...\n");
}

void PrintArr(int * arr,int len)
{
    if(arr == NULL || len <= 0)
    {
        return ;
    }
    int i = 0;
    for (i = 0;i < len;i++)
    {
        printf("%d ,",*(arr+i));
    }
}

void SortArr(int * arr,int len)
{
    if(NULL == arr || 0 >= len)
    {
        return ;
    }
    int i,j;
    int * tmpArr = arr;
    for (i = 0 ;i < len;i++)
    {
        for (j = i + 1;j < len;j++)
        {
            int tmp = *(tmpArr+i);
            if(*(tmpArr+i) > *(tmpArr +j))
            {
                *(tmpArr + i) = *(tmpArr +j);
                *(tmpArr + j) = tmp;
                
            }
        }
    }
}



