//
//  main.cpp
//  大数（正整数）的加减乘除
//
//  Created by Lei Huang on 15/9/18.
//  Copyright (c) 2015年 LeiHuang. All rights reserved.
//

#include <iostream>
#include <string>
#include <map>
using namespace std;

const int digit = 1000; //定义最大位数为1000位
int size_result=0,size_ans=0;

//void separate(int ans[], int number)
//{
//    for (int i = 0; i<digit; i++) {
//        ans[i]=0;
//    }
//    size_ans=0;
//    while (number!=0) {
//        ans[size_ans++]=number%10;
//        number=number/10;
//    }
//}

void separate(int ans[], string str)
{
    for (int i = 0; i<digit; i++) {
        ans[i]=0;
    }
    size_ans=0;
    
    map<char,int> CharToInt;   //字符转数字
    for(int i=0;i<10;i++)
        CharToInt['0'+i]=i;
    for (int i = str.length()-1; i>=0; i--) {
        ans[size_ans++]=CharToInt[str[i]];
    }
}


void add(int result[],int ans[])
{
    int carryDigit=0;//进位数
    int remainder=0;//余数
    size_result=0;
    while (size_result<size_ans) {
        remainder=result[size_result]+ans[size_result]+carryDigit;
        if (remainder>=10) {
            result[size_result]=remainder-10;
            carryDigit=1;
        }else{
            result[size_result]=remainder;
            carryDigit=0;
        }
        size_result++;
    }
    while (carryDigit==1) {
        result[size_result] = result[size_result]+1;
        if (result[size_result]>=10) {
            result[size_result]=result[size_result]-10;
            size_result++;
        }else{
            carryDigit=0;
        }
    }
    
}

void out(int result[])
{
    int k=digit-1;
    while (result[k]==0) {
        k--;
    }
    while (k>=0) {
        cout<<result[k--];
    }
}

int main(int argc, const char * argv[]) {
    //如果数输入时超过最大正整数，则用 str[ ] 读取，否则用 number[ ]
    
   // int number[2];
    string str[2];
    
    int result[digit],ans[digit];
    
    for (int i = 0; i<digit; i++) {
        result[i]=0;ans[i]=0;     //初始化
    }
    //大数的加法
    for (int i = 0; i<2; i++) {
        //cin>>number[i];
        cin>>str[i];
        //separate(ans, number[i]);
        separate(ans, str[i]);
        add(result, ans);
    }
    out(result);
    return 0;
}


