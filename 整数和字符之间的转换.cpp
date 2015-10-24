//
//  main.cpp
//  整数和字符之间的转换
//
//  Created by Lei Huang on 15/10/24.
//  Copyright (c) 2015年 LeiHuang. All rights reserved.
//


//整数和字符之间的快速转换
#include <string>
#include <map>
#include <iostream>
using namespace std;
int main()
{
    //char型转换成int型
    map<char,int> CharToInt;
    for(int i=0;i<10;i++)
        CharToInt['0'+i]=i;
    
    //int型转换成char型
    map<int, char> IntToChar;
    for(int i=0;i<10;i++)
        IntToChar[i]='0'+i;
    
    
    //案例：char转成int
    string ss="123";
    int sum=0;
    for(int i=0;i<ss.length();i++)
        sum += CharToInt[ss[i]];
    cout<<sum<<endl;
    
    //案例：int转成char
    int n=8;
    string s;
    cout<<s + IntToChar[n]<<endl;
    
    
    //传统方式：用char
    // char to Int
    string str="123";
    int strToInt[10];
    int j=0;
    for (int i = str.length()-1; i>=0; i--) {
        strToInt[j++]=str[i]-'0';
    }
    for (int i = str.length()-1; i>=0; i--) {
        cout<<strToInt[i];
    }
    cout<<'\n';
    
    
    //Int to char
    int number = 123;
    char intTostr[100];
    int i=0;
    while (number!=0) {
        intTostr[i++]='0'+number%10;
        number = number/10;
    }
    for (i=i-1; i>=0; i--) {
        cout<<intTostr[i];
    }
    return 0;
} 
