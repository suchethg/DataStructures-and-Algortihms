#include<iostream>
using namespace std;

int main()
{
	int arr[] = {5,4,3,2,1};
		int largest = 0;
		int j = 0;
	for(int i = 4;i>0;i--)
	{
		largest = 0;
		for(j = 1;j<=i;j++)
		{
			if(arr[j]>arr[largest])
			{
				largest = j;
			}
		}
		int tmp = arr[i];
		arr[i] = arr[largest];
		arr[largest] = tmp; 
		
	}
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
