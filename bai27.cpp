#include <bits/stdc++.h>
using namespace std;

bool isSNT(int n){
    if (n < 2) {
        return false;
    }
    for (int i=2;i<=(int)sqrt(n);i++) {
        if (n%i==0) {
            return false;
        }
    }
    return true;
}
int main() {
    cout << "Cac so nguyen to nho hon 1000 la: "<<endl;
    for (int i = 0; i < 1000; i++) {
        if (isSNT(i)) 
            cout << i << " ";
    } 
}
