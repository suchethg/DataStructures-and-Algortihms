#include<iostream>
using namespace std;
class Stack
{
    public:
        int top;
        int array[10];
        Stack()
        {
            top=-1;
        }
    void push(int elem)
    {
        if(top==9)
        {
            cout<<"The Stack is full"<<endl;
        }
        else
        {
            top++;
            array[top]=elem;
        }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"The Stack is empty"<<endl;
        }
        else
        {
            top--;
        }    
    }
    void display()
    {
        if(top==-1)
        {
            cout<<"Stack is empty"<<endl;
        }
        else
        {       
            for(int i=top;i>=0;i--)
            {
                cout<<array[i]<<endl;
            }
        }
    }
};
int main()
{
    Stack s;
    s.push(100);
    s.push(200);
    s.push(100);
    s.push(200);
    s.pop();
    s.pop();
    s.display();
    return 0;
}
