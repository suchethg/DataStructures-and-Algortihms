#include<iostream>
using namespace std;

void insertionSort(int arr[],int len)
{
	for(int i=1;i<len;i++)
	{
		int key = arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
	for(int i=0;i<len;i++)
	{
		cout<<arr[i]<<endl;
	}
}



int main()
{
int arr[6] = {6,5,44,32,1,54};
insertionSort(arr,6);
return 0;	
}
