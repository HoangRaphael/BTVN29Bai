#include <bits/stdc++.h>
using namespace std;

long long nhiphan(int n)
{
    long long n2 = 0;
    int count=0;
    while (n>0){
        n2 += (n % 2) * pow(10, count);
        ++count;
        n /= 2;
    }
    return n2;
}
 
int main()
{
    int n;
    cout<<"Nhap N: ";
    cin>>n;
    cout<<"Dang nhi phan cua "<<n<<" la: "<<(nhiphan(n));
return true;
}