#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cha, con, nam=0;
    cout<<"Nhap tuoi Cha: ";cin>>cha;
    cout<<"Nhap tuoi Con: ";cin>>con;
    if(cha<con){
    cout<<"Vui long nhap tuoi Cha lon hon Con it nhat 2 lan";
    return false;}
    else
    while (con*2!=cha)
    {
        nam++;
        cha++;
        con++;
    }
    cout << "Sau: "<<nam<<" nam thi tuoi Cha gap 2 lan tuoi Con";
    return true;
}