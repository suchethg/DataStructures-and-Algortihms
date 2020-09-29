#include<iostream>
using namespace std;
void swap(int arr[],int i,int j)
{
	int tmp  = arr[i];
	arr[i]  = arr[j];
	arr[j] = tmp;
}
int main()
{
	int arr[] = {5,4,3,2,1};
	for(int i=4;i>0;i--)
	{
		for(int j=0;j<i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr,j,j+1);
			}
		}
	}
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
