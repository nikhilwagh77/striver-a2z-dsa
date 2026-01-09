#include<bits/stdc++.h>
using namespace std;

//PASS BY VALUE
/*
when we pass a variable like int to a function as parameter it doesnt pass
actual variable it makes a copy and pass copy of it and pass copy to function
the actual variable stays at it is on the memory address it is already stored at

void dosomething(string s){
    s[0]='t';
    cout<<s<<endl;
}

int main(){
    string s="raj";
    dosomething(s);
    cout<<s;
    return 0;
}
*/




//PASS BY REFRENCE
/*
uisng & we can pass the actual address of variable to function
not the copy and the actual variable will get modified not the copy of it
this simply means original value is passed not an copy

*/

void dosomething(int &num){
    cout<<num<<endl;
    num+=5;

    cout<<num<<endl;
    num+=5;

    cout<<num<<endl;
    num+=5;
    
}

int main(){
    int num=5;
    dosomething(num);
    cout<<num<<endl;
    return 0;
}