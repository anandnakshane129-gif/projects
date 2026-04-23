#include<iostream>
using namespace std;

class student{
    int roll;
    string name;
    float marks;
    public:
    void input(){
        cout<<"Enter Roll:";
        cin>>roll;
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Marks:";
        cin>>marks;
    }
  void display(){
    cout<<"\nRoll:"<<roll;
    cout<<"\nName:"<<name;
    cout<<"\nMarks:"<<marks;

  }
};
  int main(){
    student s;
    s.input();
    s.display();
    return 0;
  }
