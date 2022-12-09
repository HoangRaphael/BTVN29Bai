#include <bits/stdc++.h>
using namespace std;

int MaxOfFour(int a, int b, int c, int d){
   int max = a;
   if(b > max){
      max = b;
   }
   if(c > max){
      max = c;
   }
   if(d > max){
      max = d;
   }
   return max;
}
int MinOfFour(int a, int b, int c, int d){
  int min = a;
   if(b < min){
      min = b;
   }
   if(c < min){
      min = c;
   }
   if(d < min){
      min = d;
   }
   return min;
}
int main(){
    int a,b,c,d;
    cout<<"Nhap A: "; cin>>a;
    cout<<"Nhap B: "; cin>>b;
    cout<<"Nhap C: "; cin>>c;
    cout<<"Nhap D: "; cin>>d;
 
    cout<<"Max: "<<MaxOfFour(a,b,c,d)<<endl;
    cout<<"Min: "<<MinOfFour(a,b,c,d);
    return 0;
}