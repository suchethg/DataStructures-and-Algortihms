#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	int data;
	struct node *next;
}*top = NULL;
void push(int value)
{
	struct node *newNode;
	newNode = (struct node*)malloc(sizeof(struct node));
	newNode->data = value;
	if(top==NULL)
	{
		newNode->next = NULL;
	}
	else{
		newNode->next = top;
	}
		top = newNode;
}
void pop()
{
	
	if(top==NULL)
	{
		cout<<"Stack is empty"<<endl;
	}
	else{
		struct node *tmp = top;
		cout<<"Deleted element "<<tmp->data;
		top = tmp->next;
		free(tmp);	
	}
}
void display()
{
	if(top==NULL)
	{
		cout<<"Stack is empty"<<endl;
	}
	else{
		struct node *tmp = top;
		while(tmp->next!=NULL)
		{
			cout<<tmp->data<<"-->";
			tmp = tmp->next;
			
		}
		cout<<tmp->data<<"-->NULL"<<endl;
	}
}
int main()
{
	int choice,value;
	cout<<"Stack using Linkedlist"<<endl;
	while(1)
	{
		cout<<"1.push\n2.pop\n3.display\n4.exit"<<endl;
		cout<<"Enter your choice"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:cout<<"Enter value to be inserted"<<endl;
					cin>>value;
					push(value);
					break;
			case 2:pop();
					break;
			case 3:display();
					break;
			case 4:exit(0);
			default:cout<<"Wrong option entered"<<endl;
						break;
		}
	}
	return 0;
}
