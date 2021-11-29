#include<iostream>
#include<string.h>
  using namespace std;
  	class NSX 
	{
		private:
			char tennhasx[30];
			char diachi[30];
		public:
			void nhap();
			void xuat();
			friend class HANG;
	};
	   void NSX::nhap()
	   {
	   	  cout<<"\nNhap vao ten nha san xuat :";
	   	  fflush(stdin);
	   	  gets(tennhasx);
	   	  cout<<"\nNhap vao dia chi nha san xuat :";
	   	  fflush(stdin);
	   	  gets(diachi);
	   }
	     void NSX::xuat()
	     {
	     	cout<<"\nTen Nha San Xuat :"<<tennhasx<<endl;
	     	cout<<"\nDia Chi Nha San Xuat :"<<diachi<<endl;
		 }
   class HANG
   {
   	  protected:
   	  	char tenhang[30];
   	  	NSX x;
   	  	float dongia;
   	public:
   		void nhap();
   		void xuat();
   };
      void HANG::nhap()
      {
      	 cout<<"\nNhap vao ten hang : ";
      	 fflush(stdin);
      	 gets(tenhang);
      	 x.nhap();
      	 cout<<"\nNhap vao don gia :";
      	 cin>>dongia;
	  }
	    void HANG::xuat()
	    {
	    	cout<<"\nTen Hang :"<<tenhang<<endl;
	         x.xuat();
	         cout<<"\nDon Gia Cua TiVi :"<<dongia<<endl;
		}
			class DATE 
	{
		private:
			int day;
			int month;
			int year;
		public:
			void nhap();
			void xuat();
			friend class TIVI;
	};
	   void DATE::nhap()
	   {
	   	    cout<<"\nNhap vao ngay :";  cin>>day;
	   	    cout<<"\nNhap vao thang :";  cin>>month;
	   	    cout<<"\nNhap vao nam :";  cin>>year;
	   }
	    void DATE::xuat()
	    {
	    	cout<<"\nNgay Nhap : "<<day<<"/"<<month<<"/"<<year<<endl;
		}
    class TIVI : public HANG
    {
        private:
		   float kichthuoc;
		   DATE NgayNhap;
		 public:
		   void nhap();
		   void xuat();	
	};
	  void TIVI::nhap()
	  {
	  	  cout<<"\n\n\t\t---------NHAP VAO THONG TIN CUA TIVI---------\n";
	  	  HANG::nhap();
	  	  cout<<"\nNhap vao kich thuoc tivi (inches):";
	  	  cin>>kichthuoc;
	  	  NgayNhap.nhap();
	  }
	   void TIVI::xuat()
	   {
	   	   cout<<"\n\n\t\t-----------THONG TIN CUA TIVI-----------\n";
	   	   HANG::xuat();
	   	   cout<<"\nKich Thuoc Cua Tivi La (inches):"<<kichthuoc<<endl;
	   	   NgayNhap.xuat();
	   }
  int main()
  {
  	TIVI tv;
  	tv.nhap();
  	tv.xuat();
  	return 0;
  }
