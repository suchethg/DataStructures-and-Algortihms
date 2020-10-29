#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
   int data;
   struct node *previous, *next;
} *head = NULL;

void insertAtBeginning(int value)
{
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode -> data = value;
    newNode -> previous = NULL;
    if(head == NULL)
    {
       newNode -> next = NULL;
       head = newNode;
    }
    else
    {
       newNode -> next = head;
       head -> previous = newNode;
       head = newNode;
    }
	
cout<<"insertion succesfull"<<endl;
}
void insertAtEnd(int value)
{
	struct node *newNode;
	newNode = (struct node*)malloc(sizeof(struct node));
	newNode->data = value;
	newNode->next = NULL;
	if(head == NULL)
	{
		newNode->previous = NULL;
		head = newNode;
	 } 
	 else{
	 	struct node *tmp=head;
	 	while(tmp->next!=NULL)
	 	{
	 		tmp=tmp->next;
		 }
		 tmp->next = newNode;
		 newNode->previous = tmp;
		 
	 }
	cout<<"insertion succesfull"<<endl;
}
void insertAtPosition(int value,int pos)
{
	int i,flag =1;
	struct node *newNode,*tmp = head;
	newNode = (struct node*)malloc(sizeof(struct node));
	newNode->data = value;
	if(head == NULL)
	{
		newNode->previous = newNode->next = NULL;
		head = newNode;
	}else{
		for(i=0;i<pos-1;i++)
		{
			tmp = tmp->next;
			if(tmp->next==NULL)
			{
				flag = 0;
				break;
			}
		}
	}
	if(flag)
	{
		newNode->next = tmp->next;
		tmp->next->previous = newNode;
		tmp->next = newNode;
		newNode->previous = tmp;
		cout<<"insertion succesfull"<<endl;
		
	}
	else{
		cout<<"Insertion was unsuccesfull"<<endl;
	}
}
void deleteAtBeginning(){
	if(head == NULL)
	{
		cout<<"List is empty"<<endl;
	}
	else{
		struct node *tmp = head;
		if(tmp->previous  == tmp->next)
		{
			head =  NULL;
			free(tmp);
		}
		else{
			head = tmp->next;
			head->previous = NULL;
			free(tmp);
		}
	}
	cout<<"Deletion successful"<<endl;
}
void deleteEnd()
{
	if(head==NULL)
	{
		cout<<"List is Empty"<<endl;
	}
	else{
		struct node *tmp  = head;
		if(tmp->previous == tmp->next)
		{
			head = NULL;
			free(tmp);
		}
		else{
			while(tmp->next!=NULL)
			{
				tmp = tmp->next;
				tmp->previous->next = NULL;
				free(tmp);
			}
			cout<<"Deletion successful"<<endl;
		}
	}
}
void deleteSpecific(int delValue)
{
   if(head == NULL)
      printf("List is Empty");
   else
   {
      struct node *temp = head;
      while(temp -> data != delValue)
      {
         if(temp -> next == NULL)
         {
        		cout<<"\nGiven node is not found in the list";
        		
         }
         else
         {
            temp = temp -> next;
         }
      }
      if(temp == head)
      {
         head = NULL;
         free(temp);
      }
      else
      {
         temp -> previous -> next = temp -> next;
         free(temp);
      }
      cout<<"\nDeletion successful";
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
			case 4:deleteAtBeginning();
					break;
			case 5:deleteEnd();
					break;
			case 6:cout<<"Enter value which you want to delete"<<endl;
					cin>>value;
					deleteSpecific(value);
					break;
			case 7:display();
					break;
			case 8:exit(0);
			default:cout<<"Wrong input"<<endl;
		}
	}
	
	return 0;
}
