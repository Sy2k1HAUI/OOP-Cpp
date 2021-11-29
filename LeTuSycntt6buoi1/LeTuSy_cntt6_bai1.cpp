#include<iostream>
#define PI 3.14
  using namespace std;
  class Hinhtron
  {
  	public:
  		float R;
  float chuvi()
  {
        return 2*PI*R;
    }
    float dientich()
	{
        return PI*R*R;
    }
  };
  int main()
  {
  	Hinhtron Tinh;
  	cout<<"\nNhap vao ban kinh hinh tron la:";
  	cin>>Tinh.R;
  	cout<<"\nChu vi hinh tron la: "<<Tinh.chuvi();
  	cout<<"\nDien tich hinh tron la: "<<Tinh.dientich();
  	return 0;
//  	 Hinhtron a;
//    cout<<"\nNhap ban kinh hinh tron a : "; cin>>a.r;
//    cout<<"\nChi vi = "<<a.chuvi();
//    cout<<"\nDien tich = "<<a.dientich();
//    return 0;
  }
