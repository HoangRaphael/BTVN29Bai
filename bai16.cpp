#include <bits/stdc++.h>
using namespace std;

float Baia(int n, float s, float a){
for(int i=1;i<=n;i++){
    s=s+i;}
    a=s/n;
    return a;
}

float Baib(int n, float f){
    for(int i=1;i<=n;i++)
    f=f+i*i;
    return f;
}

/*float Baic(){
    Không hiểu câu C
}
*/

int main(){
    int n;
    float s=0;
    float f=0;
    cout<<"Nhap N: "; cin>>n;
 float a=s/n;
 cout<<"Ket qua cau A: "<<Baia(n,s,a)<<endl;
 cout<<"Ket qua cau B: "<<sqrt(Baib(n,f));
}