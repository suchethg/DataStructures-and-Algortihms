//single linked list

#include<iostream>
#include<stdlib.h>
using namespace std;

	struct node{
	int data;
	struct node *next;	
	
	}node;
	struct node *head = NULL;
void insertAtBeginning(int value)
{
	struct node *newNode;
	newNode = (struct node*)malloc(sizeof(struct node));
	newNode->data = value;
	if(head==NULL)
	{
		newNode->next = NULL;
		head= newNode;
	}
	else{
		newNode->next = head;
		head= newNode;
	}
	cout<<"\nNode inserted successfully at beginning"<<endl;
}
void insertAtEnd(int value)
{
	struct node *newNode;
	newNode  = (struct node*)malloc(sizeof(struct node));
	newNode->data  = value;
	if(head==NULL)
	{
		head = newNode;
	}
	else{
		struct node *tmp  = head;
		while(tmp->next!=NULL)
		{
			tmp = tmp->next;
			tmp->next = newNode;
		}
	}
	cout<<"\nNode inserted succesfully at end"<<endl;
}
void insertAtPosition(int value,int pos)
{
	struct node *newNode;
	int i=0;
	newNode = (struct node*)malloc(sizeof(struct node));
	newNode->data = value;
	if(head==NULL)
	{
		newNode->next = NULL;
		head = newNode;
	}
	else{
		struct node *tmp = head;
		for(i=0;i<pos-1;i++)
		{
			tmp = tmp->next;
		
		}
		newNode->next = tmp->next;
		tmp->next = newNode;
	}
	cout<<"\nNode inserted successfully"<<endl;
}
void removeBeginning()
{
	if(head==NULL)
	{
		cout<<"List is already Empty"<<endl;
	}
	else{
		struct node *tmp  = head;
		if(head->next==NULL)
		{
			head = NULL;
			free(tmp);
		}
		else{
			head = tmp->next;
			free(tmp);
			cout<<"\nNode deleted at beginning"<<endl;
		}
	}
}
void removeEnd()
{
	if(head==NULL)
	{
		cout<<"List is Empty"<<endl;
	}
	else{
		struct node *tmp1 = head,*tmp2;
		if(head->next==NULL)
		{
			head = NULL;
			
		}
		else{
			while(tmp1->next!=NULL)
			{
				tmp2 = tmp1;
				tmp1 = tmp1->next;
			}
			tmp2->next=NULL;
		}
		free(tmp1);
		cout<<"\nNode deleted at the end"<<endl;
	}
}
void removePostion(int pos)
{
	int i,flag =0;
	struct node *tmp1 = head,*tmp2;
	if(pos==1)
	{
		head = tmp1->next;
		free(tmp1);
		cout<<"Node deleted";
	}
	else{
		for(i=0;i<pos-1;i++)
		{
			if(tmp1->next!=NULL)
			{
				tmp2 = tmp1;
				tmp1 = tmp1->next;
				
			}
			else{
				flag=1;
				break;
			}
			
		}
		if(flag==0)
		{
			tmp2->next = tmp1->next;
			free(tmp1);
			cout<<"\nNode deleted"<<endl;
			
		}
		else{
			cout<<"position exceeds linked list.please try again"<<endl;
		}
	}
}
void display()
{
	struct node *tmp;
	for(tmp=head;tmp!=NULL;tmp=tmp->next)
	{
		cout<<tmp->data<<endl;
	}
}
int main()
{
	int choice,value,choice1,pos,del1;
	while(1)
	{
		cout<<"----Menu-----"<<endl;
		cout<<"1.insert at beginning\n2.insert at the end\n3.insert at location\n4.delete at beginning\n5.Delete at end\n6. Delete at location\n7.Display\n8.Exit\n\nEnter ur choice"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:cout<<"Enter the value"<<endl;
					cin>>value;
					insertAtBeginning(value);
					break;
			case 2:cout<<"Enter the value"<<endl;
					cin>>value;
					insertAtEnd(value);
					break;
			case 3:cout<<"Enter the value"<<endl;
					cin>>value;
					cout<<"Enter position after which you want to insert"<<endl;
					cin>>pos;
					insertAtPosition(value,pos);
					break;
			case 4:removeBeginning();
					break;
			case 5:removeEnd();
					break;
			case 6:cout<<"Enter position after which you want to delete"<<endl;
					cin>>pos;
					removePostion(pos);
					break;
			case 7:display();
					break;
			case 8:exit(0);
			default:cout<<"Wrong input"<<endl;
		}
	}
	
	return 0;
}
