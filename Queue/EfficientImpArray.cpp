#include<iostream>
#include<queue>
using namespace std;
struct Queue{
    int size,cap;
    int *arr;
    int front;
  
    Queue(int c)
    {
        cap =c;
        size =0;
        front =0;
        
    }
  bool isFull()
  {
    return cap==size;
  }
  bool isEmpty()
  {
    return size==0;
  }
  int getFront()
  {
    if(isEmpty())
    return -1;
    return front;
  }
  int getRear()
  {
    if(isEmpty())
    return -1;
    return (front+size-1)%cap;
  }
  void enqueue(int x)
  {
   
    if(isFull())
    return;
    int rear = getRear();
    rear = (rear+1)%cap;
    arr[rear] = x;
    size++;

  }
  void dequeue()
  {
    if(isEmpty())
    return;
    cout<<arr[front]<<endl;
    front = (front+1)%cap;
    size--;
  }
   
};
int main()
{
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.dequeue();
    q.dequeue();
    cout<<q.getFront()<<endl;
    cout<<q.getRear()<<endl;
    return 0;
}
