#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	struct node *next;
}*head=NULL;

void insertAtBeginning(int value)
{
	struct node *newNode;
	newNode = (struct node*)malloc(sizeof(struct node));
	newNode->data = value;
	if(head == NULL)
	{
		head = newNode;
		newNode->next = head;
		
	}
	else{
		struct node *tmp = head;
		while(tmp->next!= head)
		{
			tmp = tmp->next;
			
		}
		newNode->next = head;
		head = newNode;
		tmp->next = head;
	}
	cout<<"Insertion Succesfull"<<endl;
}
void insertAtEnd(int value)
{
	struct node *newNode;
	newNode = (struct node*)malloc(sizeof(struct node));
	newNode->data = value;
	if(head==NULL)
	{
		head = newNode;
		newNode->next = head;
	}
	else{
		struct node *tmp = head;
		while(tmp->next!=head)
		{
			tmp = tmp->next;
			
		}
		tmp->next = newNode;
		newNode->next = head;
	}
	
	cout<<"Insertion Successfull"<<endl;
	
}
void insertAtPosition(int value,int location)
{
	struct node *newNode;
	newNode = (struct node*)malloc(sizeof(struct node));
	newNode->data = value;
	if(head == NULL)
	{
		head = newNode;
		newNode->next = head;
	}
	else{
		struct node *tmp = head;
		while(tmp->data!=location)
		{
			if(tmp->next==head)
			{
				cout<<"Given node is not found in the list"<<endl;
			}
			else{
				tmp = tmp->next;
			}
		}
		newNode->next = tmp->next;
		tmp->next = newNode;
		cout<<"Insertion completed"<<endl;
	}
}

void removeBeginning()
{
	if(head == NULL)
	{
		cout<<"List is Empty"<<endl;
	}
	else{
		struct node *tmp = head,*last = NULL;
		if(tmp->next==head)
		{
			head =NULL;
			free(tmp);
		}
		else{
			while(tmp->next!=head)
			{
				tmp = tmp->next;
			}
			last =tmp;
			tmp = head;
			head = head->next;
			free(tmp);
			last->next = head;
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
		if(tmp1->next = head)
		{
			head = NULL;
			free(tmp1);
		}
		else{
			while(tmp1->next!=head)
			{
				
			tmp2 = tmp1;
			tmp1 = tmp1->next;
			}
			tmp2->next = head;
			free(tmp1);
			
		}
		cout<<"Deleted"<<endl;
	}
}
void deleteSpecific(int delValue)
{
   if(head == NULL)
      cout<<"List is Empty"<<endl;
   else
   {
      struct node *temp1 = head, *temp2;
      while(temp1 -> data != delValue)
      {
         if(temp1 -> next == head)
         {
            cout<<"\nGiven node is not found in the list"<<endl;
         }
         else
         {
            temp2 = temp1;
            temp1 = temp1 -> next;
         }
      }
      if(temp1 -> next == head){
         head = NULL;
         free(temp1);
      }
      else{
         if(temp1 == head)
         {
            temp2 = head;
            while(temp2 -> next != head)
               temp2 = temp2 -> next;
            head = head -> next;
            temp2 -> next = head;
            free(temp1);
         }
         else
         {
            if(temp1 -> next == head)
            {
               temp2 -> next = head;
            }
            else
            {
               temp2 -> next = temp1 -> next;
            }
            free(temp1);
         }
      }
      cout<<"\nDeletion successful"<<endl;
   }
}
void display()
{
	struct node *tmp;
	for(tmp=head;tmp->next!=head;tmp=tmp->next)
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
					deleteSpecific(pos);
					break;
			case 7:display();
					break;
			case 8:exit(0);
			default:cout<<"Wrong input"<<endl;
		}
	}
	
	return 0;
}
