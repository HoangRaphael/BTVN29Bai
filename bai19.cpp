#include <bits/stdc++.h>
using namespace std;

bool checkSHC(int n){
    int sum = 0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0) 
            sum+=i;
    }
    if(sum==n) return true;
    return false;
}
int main(){
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    if(checkSHC(n))
        cout<<n<<" la so hoan chinh.";
    else
        cout<<n<<" khong la so hoan chinh.";
    return true;
}