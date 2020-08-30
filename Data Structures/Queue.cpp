#include<iostream>
#define SIZE 3
using namespace std;
int queue[SIZE],rear=-1,front=-1;

void enqueue(int element)
{
	if(rear==(SIZE-1))
	{
		cout<<"Queue is full"<<endl;
	}
	else
	{
	
		if(front==-1)front=0;
	
		rear++;
		queue[rear]=element;
		cout<<"inserted "<<queue[rear]<<endl;
	}
}
void dequeue()
{	

	if(front==rear)
	{
		front=-1;
		rear=-1;
		cout<<"Queue is Empty"<<endl;
	}
	else
	{
		cout<<"element "<<queue[front]<<" Deleted"<<endl;
		front++;
		if(front>=rear)
		{
			front=-1;
			rear=-1;	
		}	// Q has only one element, so we reset the queue after deleting it.
		
		

	}
}
void display()
{

	for(int i=front;i<=rear;i++)
	{
		cout<<queue[i]<<endl;
		
	}
}
int main()
{
	int val,choice;
	cout<<"Choose the following options"<<endl;
	cout<<"1.insertion"<<endl<<"2.deletion"<<endl<<"3.display"<<endl<<"4.exit"<<endl;
	while(true)
	{
		cin>>choice;
		switch(choice)
		{
			case 1:cout<<"Enter the item"<<endl;
					cin>>val;
					enqueue(val);
					break;
			case 2:dequeue();
					break;
			case 3: display();
					break;
			case 4:exit(0);
			default:cout<<"Select correct options"<<endl;
		}
	}
	return 0;
}
