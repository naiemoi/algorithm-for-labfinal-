#include<iostream>
using namespace std;
#define SIZE 5
 class Queue{
  private:
  int arr[SIZE];
  int front,rear;

  public:
  Queue(){
    front=-1;
    rear=-1;
  }

  void insert(int value){
    if(rear==SIZE-1){
        cout<<"Queue is overflow";
        return;
    }
    if(front==-1 )
    front=0;
        rear++;
        arr[rear]=value;
        cout << value << " inserted into queue." << endl;
    
  }
  void deleteItem(){
    if(front==-1 || front>rear){
        cout<<"queue is underflow";
        return;
    }
    cout<<arr[front]<<"delete from queue"<<endl;
    front++;
  }
  void display(){
    if(front==-1 || front>rear){
        cout<<"stack o=underflow";
        return;
    }
    cout<<"the queue element";
    for(int i=front;i<=rear;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
  }

 };
 int main(){
    Queue q;
    q.insert(10);
    q.insert(20);
    q.insert(30);
    q.display();

    q.deleteItem();
    q.display();
    return 0;
 }
