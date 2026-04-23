#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream file("data.txt");
    char ch;
    int characters=0, words=0,lines=0;
    while(file.get(ch)){
        characters++;
        if(ch == ' '||ch=='\n')
        words++;
        if(ch=='\n')
        lines++;
    } 
    words++;
    cout<<"Characters:"<<characters<<endl;
    cout<<"words:"<<words<<endl;
    cout<<"lines:"<<lines+1<<endl;
    file.close();
    return 0;
}