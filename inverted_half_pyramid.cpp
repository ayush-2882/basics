#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows : ";
    cin >>n;
/*
    for(int i=n;i>0;){

        for(int j=0;j<i;j++){
            cout<<"* ";
        }

        cout<<endl;
        n=n-1;
        i=n;
    }
*/
//love babbar 
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        cout<<endl;

    }
    return 0;
}