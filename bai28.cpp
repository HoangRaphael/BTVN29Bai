#include <bits/stdc++.h>
using namespace std;

bool isSNT(int n){
    if (n < 2) {
        return false;
    }
    for (int j=2;j<=(int)sqrt(n);j++) {
        if (n%j==0) {
            return false;
        }
    }
    return true;
}

int main() 
{ 
    int i; 
    cout<<"Cac SNT be hon 1000 va la so sinh doi: ";
    for(i=3;i<=1000;i++){ 
            if(isSNT(i)==1&&isSNT(i-2)==1) 
                    cout<<i-2<<" "<<i<<endl;
                       }                                                     
} 
