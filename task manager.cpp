#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    priority_queue<int> pq;
    for( int i=1;i<=3;i++){
    q.push(i*1);
    pq.push(i*1);
    }
    cout<<"FIFO scheduling:\n";
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<"\nPriority_queue:\n";
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();

    }
    return 0;
}