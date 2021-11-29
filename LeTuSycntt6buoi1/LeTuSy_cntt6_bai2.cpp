#include<iostream>
using namespace std;

class SINHVIEN
{
public:
    string msv;
    string hoten;
    int tuoi;
    float diem;
    void xuatthongtin()
	{
        cout<<"\nMa sinh vien : "<<msv<<endl;
        cout<<"\nHo va ten : "<<hoten<<endl;
        cout<<"\nTuoi : "<<tuoi<<endl;
        cout<<"\nDiem : "<<diem<<endl;
    }
};

int main()
{
    SINHVIEN x,y;
    x.msv="123123";
    x.hoten= "nguyen van a";
    x.tuoi=19;
    x.diem=7;
    y.msv="456456";
    y.hoten= "tran van c";
    y.tuoi= 20;
    y.diem=9;
    cout<<"\n\t\t-------------HOC SINH X -----------------";
    x.xuatthongtin();
    cout<<"\n\t\t-------------HOC SINH B----------------";
    y.xuatthongtin();
    return 0;
}
