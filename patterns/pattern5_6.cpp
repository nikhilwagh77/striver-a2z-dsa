#include<bits/stdc++.h>
using namespace std;

/*

****
***
**
*

*/

//pattern5

/*
void pattern(int n){
    for(int i=1;i<=n;i++){

        for(int j=0;j<n-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;

    }
}
*/


//pattern6
/*

1 2 3 4 5 6 
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/
void pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
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