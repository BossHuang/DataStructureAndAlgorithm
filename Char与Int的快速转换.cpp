//整数和字符之间的快速转换
#include <string>
#include <map>
#include <iostream>
using namespace std;
int main()
{
	map<char,int> CharToInt;   //char型转换成int型
	for(int i=0;i<10;i++)
		CharToInt['0'+i]=i;
	map<int, char> IntToChar;   //int型转换成char型
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
	return 0;
} 
