#include<bits/stdc++.h>
using namespace std;

//pattern2
/*
void pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}
 */


//pattern3
/*
 void pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }

} 
*/

//pattern4

void pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<< i ;
        }
        cout<<endl;
    }
}


int main(){
    int n;
    cin>>n;
    pattern(n);
    return 0;
}