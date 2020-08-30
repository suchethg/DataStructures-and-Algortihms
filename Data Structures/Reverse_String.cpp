#include<iostream>
#include<string>
#include<vector>
using namespace std;
void reverse(vector<char> str)
{
	if(str.size()<2)
	{
		cout<<"give another input";//as it consists of only one character 
	}
	int total = str.size()-1;
	vector<char> str1;
	for(int i=total;i>=0;i--)
	{
			str1.push_back(str[i]);
	}	
	for(int i=0;i<=total;i++)
	{
		cout<<str1[i];
	}
}
int main()
{
	string str;
	getline(cin,str); //using getline to include space in between the strings
	vector<char> getStr;
	for(int i=0;i<str.size();i++)
	{
		getStr.push_back(str[i]);
	}
	reverse(getStr);
	return 0;
}
