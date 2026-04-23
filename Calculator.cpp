#include<iostream>
using namespace std;

template<class T>
T add(T a,T b){
    return a+b;
}
template<class T>
T sub(T a,T b){
    return a-b;
}

template<class T>
T mul(T a,T b){
    return a*b;
}

template<class T>
T divi(T a,T b){
    return a/b;
}    

int main(){
    cout<<"Int add:"<<add(1,3)<<endl;
    cout<<"float add:"<<add(3.0,4.0)<<endl;
    cout<<"Sub:"<<sub(10,5)<<endl;    
    cout<<"Mul:"<<mul(2,3)<<endl;
    cout<<"Div:"<<divi(10,2)<<endl;
    return 0;
}