#include<iostream>
using namespace std;
int main(){
    int age;
    cin>>age;
    if (age<18){
        cout<<"not eligible for jobs";
    }
    else if (age<=57){
        cout<<"eligible fro jobs";
        if(age<=54){
        cout<<"'eligible for jobs , but retirement soon";
    }
    }
    else{ 
        cout<<"retirement time";
    }
    

    return 0;
}