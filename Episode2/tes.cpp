#include<bits/stdc++.h>
using namespace std;
int solveusingRecursion(int n){
    if(n==0 || n==1){
        return n;
    }
    int ans=solveusingRecursion(n-1)+solveusingRecursion(n-2);
    return ans;
}
int main(){
    int n;
    cout<<"enter the Number:";
    cin>>n;
    int ans=solveusingRecursion(n);
    cout<<ans<<" ";
    return 0;
}