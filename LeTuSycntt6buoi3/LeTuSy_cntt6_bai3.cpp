#include<iostream>
#include<string.h>
  using namespace std;
 class Doanhnghiep;
  class Date
  {
  	private:
  		int day;
  		int month;
  		int year;
  	public:
  		void nhap();
  		void xuat();
  		friend class Doanhnghiep;
  	friend void doanhthu_2015(Doanhnghiep list[],int n);
  };
  class  DiaChi
  {
  	  private:
  	  	char dienthoai[12];
  	  	char phuong[30];
  	  	char quan[30];
  	  	char thanhpho[30];
  	  public:
  	  	friend class Doanhnghiep;
  	  	friend void hienthi( Doanhnghiep list[],int n);
  	  	
  };
    class Doanhnghiep
    {
      private:
        int maDn;
        char tenDn[60];
        Date ngayTl;
        DiaChi diaChi;
		char Giamdoc[30];
		long doanhthu;
	 public:
	     void nhaptt();
		 void xuattt();	
		 friend void hienthi(Doanhnghiep list[],int n);
		 friend void doanhthu_2015(Doanhnghiep list[],int n);
	};
    void Date::nhap()
    {
      	cout<<"\nNhap vao ngay :";
     	cin>>day;
    	cout<<"\nNhap vao thang :";
    	cin>>month;
    	cout<<"\nNhap vao nam :";
    	cin>>year;
    	
	}
	void Date::xuat()
	{
		cout<<"\nNgay Thang Nam Thanh Lap :"<<day<<"-"<<month<<"-"<<year<<"-"<<endl;
	}
    void Doanhnghiep::nhaptt()
    {
    	cout<<"\nNhap vao ma doanh nghiep :";
    	cin>>maDn;
    	cout<<"\nNhap vao ten doanh nghiep :";
    	fflush(stdin);
    	gets(tenDn);
    	ngayTl.nhap();
       cout<<"\nNhap vao dien thoai :";
    	 fflush(stdin);
    	 gets(diaChi.dienthoai);
    	 cout<<"\nNhap vao phuong :";
    	 fflush(stdin);
    	 gets(diaChi.phuong);
    	 cout<<"\nNhap vao quan :";
    	 fflush(stdin);
    	 gets(diaChi.quan);
    	 cout<<"\nNhap vao thanh pho :";
    	 fflush(stdin);
    	 gets(diaChi.thanhpho);
    	 cout<<"\nNhap vao giam doc :";
    	 fflush(stdin);
    	 gets(Giamdoc);
    	 cout<<"\nNhap vao doanh thu :";
    	 cin>>doanhthu;
	}
	   void Doanhnghiep::xuattt()
    {
    	cout<<"\nMa Doanh Nghiep:"<<maDn<<endl;
    	cout<<"\nTen Doanh Nghiep :"<<tenDn<<endl;
        ngayTl.xuat();
    	 cout<<"\nDien Thoai :"<<diaChi.dienthoai<<endl;
    	 cout<<"\nTen Phuong :"<<diaChi.phuong<<endl;
    	 cout<<"\nTen Quan :"<<diaChi.quan<<endl;
    	 cout<<"\nTen Thanh Pho :"<<diaChi.thanhpho<<endl;
    	 cout<<"\nGiam Doc :"<<Giamdoc<<endl;
    	 cout<<"\nDoanh thu :"<<doanhthu<<endl;
    	 cout<<endl;
	}
	void hienthi(Doanhnghiep list[],int n)
	{
		for(int i=0;i<n;i++)
		{
			if(strcmp(list[i].diaChi.thanhpho,"Ha Noi")==0)
			{
				list[i].xuattt();
			}
		}
	}
	void doanhthu_2015(Doanhnghiep list[],int n)
	{
		float tong;
		for(int i=0;i<n;i++)
		{
			if(list[i].ngayTl.year ==2015)
			{
				tong +=list[i].doanhthu;
			}
	 	}
		cout<<"\nTong doanh thu cac doanh nghiep thanh lap nam 2015 la : "<<tong;
	}
  int main()
  {
  	float tong;
  		int n;
  	cout<<"\nNhap vao so luong doanh nghiep : ";
  	cin>>n;
  	  Doanhnghiep list[n];
  	 for(int i=0;i<n;i++)
      { 
      	cout<<"\n\n\t\t\tNHAP THONG TIN DOANH NGHIEP THU :"<<i+1<<endl;
      	list[i].nhaptt();
	  }
      for(int i=0;i<n;i++)
      {
      	cout<<"========================="<<endl;
      	cout<<"\n\n\t\tTHONG TIN DOANH NGHIEP THU "<<i+1<<endl;
      	list[i].xuattt();
	  }
	  cout<<"\n\n\t\t\tTHONG TIN CAC DOANH NGHIEP PHU HOP LA "<<endl;
	  hienthi(list,n);
	  doanhthu_2015(list,n);
	 
  	return 0;
  }
