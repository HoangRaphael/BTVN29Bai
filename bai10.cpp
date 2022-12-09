#include <bits/stdc++.h>
using namespace std;

bool checkYear(int year) 
{
    if (year % 400 == 0) 
        return true; 
    if (year % 4 == 0 && year % 100 != 0) 
        return true;
    return false; 
} 
int main()
{
    int day, month, year, DayMax, DayOfWeek;

    cout<<"Nhap Thang: "; cin>>month;
    cout<<"Nhap Ngay: "; cin>>day;
    cout<<"Nhap Nam: "; cin>>year;

 //Năm nhuận bắt đầu tính từ năm 1582 theo lịch Gregorian
    if(year<1582){
        cout<<"Nam khong hop le";
       return false;
    }
    if(month<1 || month>12){
        cout<<"Thang khong hop le!";
        return false;
    }

    switch(month)
    {
        case 1 :case 3: case 5: case 7: case 8: case 10: case 12:{
            DayMax=31;
            break;}
        case 4:case 6:case 9:case 11:{
            DayMax=30;
            break;}
        case 2:
           (checkYear(year) ? DayMax=29:DayMax=28);
            break;
    }

    if(day<1 || day>DayMax){
        cout<<"Ngay khong hop le!";
        return false;
    }

    // Cong thuc Zeller (Google)
    year -= (14-month)/12;
    month += 12*((14-month)/12)-2;
    DayMax = (day + year + year/4 - year/100 + year/400 + (31*month)/12)%7;

    if(!DayMax)
        cout<<"\nChu nhat";
    else cout<<"\nThu "<<DayMax+1;
 return true;
}