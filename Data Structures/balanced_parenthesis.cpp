#include<iostream>
#include<string>
using namespace std;
int top;
void check(string str,int n,string stack)
{
	for(int i=0;i<n;i++)
	{
		if(str[i]=='(')
		{
			top++;
			stack[top]='(';	
		}
		else{
			if(str[i]==')')
			{
				if(top==-1)
				{
					top--; //if there is uneven closing we need top-- 
				
					break;
				}
				else
				{
					
					top--;
					
				}
			}
		}
	}
	if(top==-1)
	{
		cout<<"String is balanced";
	}
	else
	{
		cout<<"String is unbalanced";
	}
}
int main()
{
	top=-1;
	string str;
	string stack;
	cin>>str;
	check(str,str.size(),stack);
	return 0; 
}
