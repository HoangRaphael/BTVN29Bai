#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c;
  cout<<"Nhap a: ";
  cin>>a;
  cout<<"Nhap b: ";
  cin>>b;
  cout<<"Nhap c: ";
  cin>>c;
  if( a<b+c && b<a+c && c<a+b ){
    //điều kiện tam giác vuông (định lý pitago)
    if( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b)
      cout<<"Day la mot tam giac vuong";
    //điều kiện tam giác đều 
    else if(a==b && b==c)
      cout<<"Day la mot tam giac deu";
    //điều kiện tam giác cân 
    else if(a==b || a==c || b==c)
      cout<<"Day la mot tam giac can";
    //điều kiện tam giác vuông cân
    else if(a+b==c||a+c==b||a+c==b)
      cout<<"Day la mot tam giac vuong can";
      else cout<<"Day la mot tam giac thuong";
    }
    else cout<<"Ba canh A, B, C khong phai la mot tam giac";
}