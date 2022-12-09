#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c, d, e, f;
  float D, Dx, Dy, x, y;
  cout<<"ax + by = c"<<endl;
  cout<<"dx + ey = f"<<endl;
  cout<<"------------------"<<endl;
  cout<<"Nhap a: ";cin>>a;
  cout<<"Nhap b: ";cin>>b;
  cout<<"Nhap c: ";cin>>c;
  cout<<"Nhap d: ";cin>>d;
  cout<<"Nhap e: ";cin>>e;
  cout<<"Nhap f: ";cin>>f;
  //tính D, Dx, Dy theo công thức
  D = a * e - d * b;
  Dx = c * e - f * b;
  Dy = a * f - d * c;
  if (D == 0) {
    //nếu D = 0 và Dx + Dy = 0 thì phương trình vô số nghiệm, ngược lại thì vô nghiệm
    if (Dx + Dy == 0)
      cout<<"Hpt co vo so nghiem";
    else
      cout<<"Hpt vo nghiem";
    }
  else {
    x = Dx / D;
    y = Dy / D;
    cout<<"Hpt co nghiem (x, y) = ("<<x<<","<<y<<")";
  }
}