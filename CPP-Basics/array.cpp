 #include<iostream>
 using namespace std;
 //array use
 //
 int main(){
    //one dimentional array
    //array is an collection of similar datatype stored in consicutive memory locations
    
    
    /*
    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    cout<<arr[3];
    */


    /*2 dimentional array
    int arry[1][3];
    arry[0][1]=22;
    arry[0][3]+=12; 
    cout<<arry[0][3];
    cout<<arry[0][1];
    */

    string a="ShreeRam";
    cout<<a<<endl;
    int len=a.size();
    a[len-1]='z';
    a[1]='a';
    cout<<a;

    return 0;
 }