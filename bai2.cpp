#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Nhap so nguyen: "; cin>>n;
    if(n==0) cout<<n<<" khong phai la mot so am hay so duong va la so chan";
    else {
    if(n%2==0){
        cout<<n<<" la so chan"<<endl;
    } else cout<<n<<" la so le"<<endl;
    if(n<0){ 
        cout<<n<< " la mot so am"<<endl;
    } else cout<<n<<" la mot so duong"<<endl;

}
}