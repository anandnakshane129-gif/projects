#include<iostream>
using namespace std;

template<class T>
class inventory{
       T item ;
       int quantity;
public:
 void set (T i,int q){
     item=i;
     quantity=q;

 }
 void display(){
    cout<<"Item:"<<item<<endl;
    cout<<"Quantity:"<<quantity<<endl;
 }
};
int main(){
    inventory<int>i1;
    i1.set(101,5);
    i1.display();
    cout<<endl;
    inventory<string>i2;
    i2.set("Pen",20);
    i2.display();
    return 0;
}
