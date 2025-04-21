#include<iostream>
#include<queue>
using namespace std;
struct Queue{
    int size, cap;// cap is defined to store the capacity of the queue and size is how much elements are present in the queue
    int *arr;
    Queue(int c){
        cap = c;
        size = 0;
        arr = new int[cap];
    }
    void enque(int x){
        if(size == cap)
            return;
        arr[size]=x;
        size++;
    }
    void deque(){
        if(size==0)
        return ;
        cout<<arr[0]<<endl;
        for(int i =0;i<size-1;i++)
        {
            arr[i]=arr[i+1];
        }
        size--;
    }
    int getFront()
    {
        if(size==0)
        return 0;
        return arr[0];
    }
    int getRear()
    {
        if(size==0)
        return 0;
        return arr[size-1];
    }
    bool isFull()
    {
        return size==cap;
    }
    bool isEmpty()
    {
        return size==0;
    }
    int sizeOfQueue()
    {
        return size;
    }
    void display()
    {
        for(int i =0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    Queue q(5);
    q.enque(10);
    q.enque(20);
    q.enque(30);
    q.enque(40);
    q.enque(50);
    q.deque();
    q.deque();
    q.enque(60);
    q.enque(70);
    q.display();
    cout<<endl;
    cout<<q.getFront()<<endl;
    cout<<q.getRear()<<endl;
    cout<<q.isFull()<<endl;
    cout<<q.isEmpty()<<endl;
    cout<<q.sizeOfQueue()<<endl;
    return 0;
}

