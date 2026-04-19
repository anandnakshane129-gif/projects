#include<iostream>
#include<queue>
using namespace std;
struct passenger{
        int id;
        string name;
};
int main(){
    
        queue<passenger> q;
        int choice,id=1;
        while(true){
            cout<<"\n===Railway Reservation===\n";
            cout<<"1.Add Passenger\n";
            cout<<"2.Book ticket(remove)\n";
            cout<<"3.Dispaly queue\n";
            cout<<"4.Exit\n";
            cin>>choice;
            if(choice==1){
                passenger p;
                p.id=id++;
                cout << "Enter name: ";
                cin >> p.name;
                q.push(p);
            }
            else if(choice==2){
                if(q.empty())
                cout<<"Empty\n";
                else{
                    passenger p=q.front();
                    cout<<p.name<<endl;
                    q.pop();
                }
            }
            else if(choice==3){
                if(q.empty()){
    cout<<"Queue is empty\n";
                }
         else { 
            queue<passenger> temp =q;
                while(!temp.empty ()){
                    cout<<temp.front ().id<<" "
                    <<temp.front().name<<endl;
                    temp.pop();
                
                }
            }
        }
            else if(choice==4)
            break;
        }
       return 0;

    }
    