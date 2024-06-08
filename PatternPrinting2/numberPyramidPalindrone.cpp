#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a num:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int q =i-1;q>=1;q--){
            cout<<q;
        }
        cout<<endl;
    }

}