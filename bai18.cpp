#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s,f,a,b;
    cout<<"Cac so co Tich bang 2 lan Tong la: ";
    for(int n=10;n<100;n++){
       a=n/10; //chu so thu 1
       b=n%10; //chu so thu 2
       s=a+b;
       f=a*b;
        if(s*2==f){
    cout<<n<<" ";
       }
    }
}