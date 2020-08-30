#include<iostream>
#define SIZE 3
using namespace std;
int queue[SIZE],rear=-1,front=-1;

void enqueue(int element)
{
	if(front==0 && rear==(SIZE-1))
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
	cout<<"element "<<queue[front]<<" Deleted"<<endl;
	int element;
	if(front==-1)
	{	
		cout<<"Queue is Empty"<<endl;
	
	}
	else 
	{
		element=queue[front];
		front++;
		 if (front >= rear) 
		 {
        		front = -1;
        		rear = -1;
      	}
	}

	
	
}
void display()
{
	if(front==-1)
	{
		cout<< "Empty Queue" << endl;
	}
	else
	{
		cout << endl
         << "Front index-> " << front;
      cout << endl
         << "Items -> ";
      for (int i = front; i <= rear; i++)
        cout << queue[i] << "  ";
      cout << endl
         << "Rear index-> " << rear << endl;
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
