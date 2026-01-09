#include<bits/stdc++.h>
using namespace std;


/*
void printname(string name){
    cout<<"My name is="<<name<<endl;
}
int main(){
    string name;
    cin>>name;
    printname(name);
 */
 /*
 function is a block of code which performs something for you
 there are parametric , non parametric
 void- doesnt return anything
 functions increase code readability and reusablity
 */

 //void function
/*
void add(int a,int b){
        int c=a+b;
        cout<<"Addition ="<<c<<endl;
    }
*/


//integer function always returns something , similarly other functions also exist like float double long

int maxx(int c,int d){
    if(c>=d){
    return c;
    }
    else{
    return d;
    }
}

int main(){


   /* int num1,num2;
    cin>>num1>>num2;
    add(num1,num2);


    int num3,num4;
    cin>>num3>>num4;
    add(num3,num4);
    */
     
    int num5,num6;
    cin>>num5>>num6;
    int res= maxx(num5,num6);
    cout<<res<<endl; 
     
    
     
    return 0;
}