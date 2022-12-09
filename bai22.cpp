#include <bits/stdc++.h>
using namespace std;

int main(){
int n=1,b=1;
float s=0,f=0;
while(s<2.101999)
{
s=s+((float)1/(2*n-1));
n++;
}
cout<<"A, So nguyen duong lon nhat thoa man la: "<<n-1<<endl;
while (f<2000)
{
  f=f+exp(b)-1999*log10(b);
  b++;
}
cout<<"B, So nguyen duong lon nhat thoa man la: "<<b-3;
}
