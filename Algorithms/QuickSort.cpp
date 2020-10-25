#include<iostream>
using namespace std;

int partition(int a[],int low,int high)
{
	
	int pivot = a[high];
	int i;
	i=(low-1);
	int j;
	for(j=low;j<=high-1;j++)
	{
		if(a[j]<pivot)
		{
			i++;
			int tmp = a[j];
			a[j]=a[i];
			a[i] = tmp;
		}
	}
	int tmp = a[i+1];
	a[i+1] = a[high];
	a[high] = tmp;
	return (i+1);
	
}
void quickSort(int a[],int low,int high)
{
	if(low<high)
	{
		int pivotIndex = partition(a,low,high);
		quickSort(a,0,pivotIndex-1);
		quickSort(a,pivotIndex+1,high);
		
	}
}
int main()
{
	int n;
	cout<<"Enter size of the array"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	quickSort(a,0,n-1);
	cout<<"After sorting"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	
	return 0;
}
