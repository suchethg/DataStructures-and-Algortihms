//other way of implementing mergesort
#include<iostream>
using namespace std;

void merge(int arr[],int i1,int j1,int i2,int j2)
{
	int i=i1;
	int j=i2;
	int k=0;
	int temp[50];
	while(i<=j1 && j<=j2)
	{
		if(arr[i]<arr[j])
			temp[k++] = arr[i++];
		else
			temp[k++] = arr[j++];
		
	}
	while(i<=j1)
		temp[k++] = arr[i++];
	
	while(j<=j2)
		temp[k++] = arr[j++];	
	
	for(i=i1,j=0;i<=j2;i++,j++)
	{
		arr[i] = temp[j];
	}
}
void mergeSort(int arr[],int start,int end)
{
	int mid;
	
	if(start<end)
	{
		mid = (start+end)/2;
		mergeSort(arr,start,mid);
		mergeSort(arr,mid+1,end);
		merge(arr,start,mid,mid+1,end);
	}
}

int main()
{
	int arr[20],n;
	cout<<"Enter size"<<endl;
	cin>>n;
	cout<<"enter elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	mergeSort(arr,0,n-1);
		
	cout<<"after sorting"<<endl;
	
		for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	
	
	return 0;
}
