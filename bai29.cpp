#include <bits/stdc++.h>
using namespace std;

bool checkYear(int year) 
{ 
return (((year % 4 == 0) && (year % 100 != 0) && (year>1852)) || 
        ((year % 400 == 0) && (year>1852))); 
        //Năm nhuận bắt đầu tính từ năm 1582 theo lịch Gregorian
} 
int main(){
    int year = 2000;
    for(year=1000;year<=2000;year++){
    if(checkYear(year)==true)
    cout<<year<<" ";
    }

}