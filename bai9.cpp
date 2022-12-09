#include <bits/stdc++.h>
using namespace std;

bool checkYear(int year) 
{
    if (year % 400 == 0) 
        return true; 
    if (year % 4 == 0 && year % 100 != 0||year>1582) 
    //Năm nhuận bắt đầu tính từ năm 1582 theo lịch Gregorian
        return true;
    return false; 
} 
int main()
{
    int month;
    int year;
    cout << "Nhap Thang: ";
    cin >> month;
    cout<<"Nhap Nam: ";
    cin>>year;

    cout<<"Nam: "<<year<<" la nam "<<(checkYear(year) ? "'Nhuan'":"'Khong Nhuan'")<<endl;
    switch (month)
    {
        case 2:
        {
            cout<<(checkYear(year) ? "29 Ngay":"28 Ngay");
            break;
        }
        case 1 :case 3: case 5: case 7: case 8: case 10: case 12:
        {
            cout << "Co: 31 Ngay" << endl;
            break;
        }
        case 4: case 6: case 9: case 11:
        {
            cout << "Co: 30 Ngay" << endl;
            break;
        }
        default:
        {
            cout << "Vui long nhap dung thang..." << endl;
        return false;
        }
    }

    return true;
}