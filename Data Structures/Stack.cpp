#include<iostream>
using namespace std;
int top=-1;
void push(int stack[],int x,int n)
{
	if(top==n-1) //If the top position is the last of position of the stack, this means that the stack is full.
	{
		cout << "Stack is full.Overflow condition!" ;
	}
	else
	{
		top++;//Incrementing the top position 
		stack[top] = x;//Inserting an element on incremented position
		
	}
}
bool isEmpty()
{
	if(top==-1)
	{
		return true;	
	}
	else
	{
		return false;
	}
}
void pop()
{
	if(isEmpty())
	{
		 cout << "Stack is empty. Underflow condition! " << endl ;
	}
	else
	{
		top--;//Decrementing top’s position will detach last element from stack     
		
	}
}
int size()
{
	return top+1;
}
int topElement(int stack[])
{
	return stack[top];
}

int main()
{
	int stack[3];
	push(stack,5,3);  // pushing element 5 in the stack 
	cout<< "Current size of stack is " << size ( ) << endl ;
	cout<<"The current top element in stack is "<<topElement(stack)<<endl;
	push(stack,10,3);
		cout<<"The current top element in stack is "<<topElement(stack)<<endl;
	 cout << "Current size of stack is " << size( ) << endl ;
	push(stack,24,3);

	//Accessing the top element
        cout << "The current top element in stack is " << topElement(stack) << endl;
        	 cout << "Current size of stack is " << size( ) << endl ;
        //Removing all the elements from the stack
        cout<<"After poping elements"<<endl;	
        for(int i = 0 ; i < 3;i++ )
            pop( );
             cout << "Current size of stack is " << size( ) << endl ;
	return 0;
}
