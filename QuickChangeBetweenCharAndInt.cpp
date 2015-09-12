//Quick Change Between Char And Int
#include <string>
#include <map>
#include <iostream>
using namespace std;
int main()
{
	map<char,int> CharToInt;   //char to int
	for(int i=0;i<10;i++)
		CharToInt['0'+i]=i;
	map<int, char> IntToChar;   //int to char
	for(int i=0;i<10;i++)
		IntToChar[i]='0'+i;

    //example: char to int
	string ss="123";
	int sum=0;
	for(int i=0;i<ss.length();i++)
		sum += CharToInt[ss[i]];
	cout<<sum<<endl;
	//example: int to char
	int n=8;
	string s;
	cout<<s + IntToChar[n]<<endl;
	return 0;
} 
