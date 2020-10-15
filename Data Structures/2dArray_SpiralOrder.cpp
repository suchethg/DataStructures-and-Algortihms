#include<iostream>
using namespace std;

int main()
{
	int m,n;
	cout<<"Enter no of rows"<<endl;
	cin>>m;
	cout<<"Enter no of columns"<<endl;
	cin>>n;
	int A[m][n];
	cout<<"Enter 2d array"<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>A[i][j];
		}
	}
//	cout<<"output"<<endl;
//		for(int i=0;i<m;i++)
//	{
//		for(int j=0;j<n;j++)
//		{
//			cout<<A[i][j]<<endl;
//		}
//	}
	int L = 0,R=n-1,T=0,B=m-1,dir=0;
	while(L<=R && T<=B)
	{
		if(dir==0)
		{
			for(int i=L;i<=R;i++)cout<<A[T][i]<<" ";
			T++;
			
		}
		else if(dir==1)
		{
			for(int i=T;i<=B;i++)cout<<A[i][R]<<" ";
			R--;
			
		}
		else if(dir==2)
		{
			for(int i=R;i>=L;i--)cout<<A[B][i]<<" ";
				B--;
				
			
		}
		else if(dir==3)
		{
			for(int i=B;i>=T;i--)cout<<A[i][L]<<" ";
				L++;
			
		}
		dir=(dir+1)%4;
	 } 
	
	
	return 0;
}
