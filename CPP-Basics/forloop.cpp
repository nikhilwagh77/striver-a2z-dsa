#include<iostream>
using namespace std;
int main(){
   /* int i;
    //for loop used for repetative execution
    for(i=0;i<=10;i++){
        cout<<i<<endl;
    }
        */



    //while loop
    //entry control loop which excutes after checking the condtion

    /**
    int b=1;
    while(b<=10) {
        cout<<"Hello cpp"<<endl;
        b=b+1;
    }
    */


    /*
    dowhile loop is exit control loop first it executes
    and then checks the condition. the code in do while exceutes at least on time*/
    int i=1;
    do{
        cout<<"hello cpp"<<endl;
        i=i+1;
    }while(i<=1);

    return 0;
}