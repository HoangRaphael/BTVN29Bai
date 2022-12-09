#include <bits/stdc++.h>
using namespace std;

int main(){
int h=0, t=0, s=0;
char a[500];
cout << "Nhap day ki tu: " ;
cin.getline(a, 500);
for(int i=0;i<500;i++)
    if(int(a[i])==46) break;
     else {
            if(int(a[i])>=65 && int(a[i])<=90) h++;
            if(int(a[i])>=97 && int(a[i])<=122) t++;
            if(int(a[i])>=48 && int(a[i])<=57) s++; }
            
  cout << "so ki tu hoa la: " << h << endl;
  cout << "so ki tu thuong la: " << t << endl;
  cout << "so chu so la: " << s << endl;

if(h>t&&h>s) cout<<"Loai ki tu nhieu nhat la Chu Hoa";
else if(t>h&&t>s) cout<<"Loai ki tu nhieu nhat la Chu Thuong";
else if(s>h&&s>t) cout<<"Loai ki tu nhieu nhat la Chu So";
return true;
}