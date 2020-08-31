#include<iostream>
using namespace std;
class Queue
{
    public:
        int arr[5];
        int front;
        int rear;
        Queue()
        {
            front=-1;
            rear=-1;
        }
        void enqueue(int elem)
        {
            if(front==-1 && rear==-1)
            {
                front=0;
                rear=0;
                arr[rear]=elem;
            }
            else if(rear-front==4)
            {
                cout<<"Queue is full"<<endl;
            }
            else
            {
                rear++;
                arr[rear]=elem;
            }
        }
        void dequeue()
        {
            if(front==-1 && rear==-1)
            {
                cout<<"Queue is empty"<<endl;
            }
            else if(front == rear)
            {
                front=-1;
                rear=-1;
            }
            else
            {
                front++;
            }
        }
        void display()
        {
            for(int i=front;i<=rear;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};
int main()
{
    Queue q;
    q.enqueue(15);
    q.enqueue(20);
    q.enqueue(25);
    q.enqueue(100);
    q.enqueue(122);
    q.enqueue(1234);
    q.enqueue(12345);
    q.dequeue();
    q.dequeue();
    q.display();
    return 0;
}
