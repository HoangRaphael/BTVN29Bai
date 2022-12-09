#include <bits/stdc++.h>
using namespace std;

int main(){
  char n;
    cout << "Nhap ky tu: ";
    cin >> n;   
    if((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z')) {
        cout << n << " la chu cai";
    } else {
        cout << n << " khong phai la chu cai";
    }
    return 0;
}