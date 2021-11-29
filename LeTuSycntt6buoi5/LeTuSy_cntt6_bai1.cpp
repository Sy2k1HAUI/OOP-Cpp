#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
  class VEHICLE
	{
	    protected:
	    
		   char nhanhieu[20];
		   int namsx;
		   char hang[20];
		public:
		     void nhap();
			 void xuat();	
	};
	   void VEHICLE::nhap()
	     {
	     	cout<<"\nNhap vao nhan hieu cua xe :"<<endl;
	     	fflush(stdin);
	     	gets(nhanhieu);
	     	cout<<"\nNhap vao nam san xuat xe :"<<endl;
	     	cin>>namsx;
	     	cout<<"\nNhap vao hang xe :"<<endl;
	     	fflush(stdin);
	     	gets(hang);
	     	
		 }
		   void VEHICLE::xuat()
		   {
		   	   cout<<endl;
		   	   cout<<"\nNhan Hieu Xe :"<<nhanhieu<<endl;
		   	   cout<<"\nNam San Xuat :"<<namsx<<endl;
		   	   cout<<"\nHang Xe :"<<hang<<endl;
		   }
  class OTO : public VEHICLE
  {
  	 private:
  	 	int soghe;
  	 	float dungtich;
  	public:
  		void nhap();
  		void xuat();
  };
   void OTO::nhap()
   {
       cout<<"\n\n\t\t----------NHAP THONG TIN CUA XE OTO----------"<<endl;
       VEHICLE::nhap();
   	  cout<<"\nNhap vao so ghe ngoi : "<<endl;
   	  cin>>soghe;
   	  cout<<"\nNhap vao dung tich cua xe : "<<endl;
   	  cin>>dungtich;
   }
   void OTO::xuat()
   {
   	cout<<"\n\n\t\t----------THONG TIN CUA XE OTO----------"<<endl;
   	   VEHICLE::xuat();
       cout<<"\nSo Cho Ngoi :"<<soghe<<endl;
       cout<<"\nDung Tich Xe :"<<dungtich<<endl;
   }
     class MOTO : public VEHICLE
       {
       	  private:
       	  	float phankhoi;
       	  public:
       	  	  void nhap();
       	  	  void xuat();
	   };
	     void  MOTO::nhap()
	     {
	     	cout<<"\n\n\t\t----------NHAP THONG TIN CUA XE MOTO----------"<<endl;
	     	VEHICLE::nhap();
	     	cout<<"\nNhap so phan khoi cua xe moto :"<<endl;
	     	cin>>phankhoi;
		 }
		 void MOTO::xuat()
		 {
		 		cout<<"\n\n\t\t----------THONG TIN CUA XE MOTO----------"<<endl;
		 	VEHICLE::xuat();
		    cout<<"\nPhan Khoi Cua Xe : "<<phankhoi<<endl;
		 }
     int main()
     {
       OTO oto;
       MOTO moto;
       oto.nhap();
       moto.nhap();
       oto.xuat();
       moto.xuat();
       	return 0;
	 }
