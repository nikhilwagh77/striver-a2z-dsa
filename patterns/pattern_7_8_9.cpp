#include<bits/stdc++.h>
using namespace std;

//pattern7
/*
void pattern(int n){
    for(int i=0;i<n;i++){

        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<2*i+1;j++){
            cout<<" *";
        }
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        cout<<endl;
    
    }
}
*/

//pattern8
/*
void pattern(int n){
    for(int i=0;i<n;i++){

        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        } 
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }

        cout<<endl;
    
    }
}
    */

//pattern9

void pattern(int n){
    for(int i=0;i<n;i++){

        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        cout<<endl;
    
    }
}

void pattern2(int n){
    for(int i=0;i<n;i++){

        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        } 
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }

        cout<<endl;
    
    }
}

int main(){
    int n;
    cin>>n;  
    pattern(n);
    pattern2(n);
    return 0;
}