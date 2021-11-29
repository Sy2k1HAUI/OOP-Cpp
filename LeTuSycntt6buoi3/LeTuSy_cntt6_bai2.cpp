#include<iostream>
#include<string.h>
  using namespace std;
  class XeHoi;
   class NhaSanXuat
   {
   	  private:
   	  	char manhasx[15];
   	  	char tennhasx[30];
   	  	char diachi[30];
   	 public:
   	  	friend class XeHoi;
   	  	friend void hienthi_hang_toyota(XeHoi list[],int n);
   	  	friend void hienthi_mauson_diachi(XeHoi list[],int n);
   };
   
  class XeHoi
  {
    private:
  	  	char nhanhieu[30];
  	  	NhaSanXuat nsx;
  	  	char mauson[15];
  	  	char xuatxu[30];
  	  	float gia;
  	public:
  		void nhap();
  		void xuat();
  		friend void hienthi_hang_toyota(XeHoi list[],int n);
  		friend void hienthi_mauson_diachi(XeHoi list[],int n);
  };
    void XeHoi::nhap()
    {
    	cout<<"\nNhap vao nhan hieu xe hoi :"<<endl;
    	fflush(stdin);
    	gets(nhanhieu);
    	cout<<"\nNhap vao ma nha san xuat :"<<endl;
    	fflush(stdin);
    	gets(nsx.manhasx);
       cout<<"\nNhap vao ten nha san xuat :"<<endl;
    	fflush(stdin);
    	gets(nsx.tennhasx);
		cout<<"\nNhap vao dia chi nha san xuat :"<<endl;
    	fflush(stdin);
    	gets(nsx.diachi);	
    	cout<<"\nNhap vao mau son :"<<endl;
    	fflush(stdin);
    	gets(mauson);
    	cout<<"\nNhap vao noi xuat xu :"<<endl;
    	fflush(stdin);
    	gets(xuatxu);
    	cout<<"\nNhap vao gia cua xe : "<<endl;
    	cin>>gia;
	}
	   void XeHoi::xuat()
	   {
	   	cout<<"\nNhan Hieu Xe Hoi :"<<nhanhieu<<endl;
    	cout<<"\nMa Nha San Xuat :"<<nsx.manhasx<<endl;
       cout<<"\nTen nha San Xuat :"<<nsx.tennhasx<<endl;
		cout<<"\nDia Chi Nha San Xuat : "<<nsx.diachi<<endl;	
    	cout<<"\nMau Son :"<<mauson<<endl;
    	cout<<"\nNoi Xuat Xu :"<<xuatxu<<endl;
    	cout<<"\nGia Cua Xe : "<<gia<<endl;
    	cout<<"----------"<<endl;
    	
	   }
	   void hienthi_hang_toyota(XeHoi list[],int n)
	   {
	   	  for(int i=0;i<n;i++)
	   	  {
	   	  	  if(strcmp(list[i].nhanhieu,"Toyota")==0 )
	   	  	  {
	   	  	  	  list[i].xuat();
			 }
		 }
	   }
	   void hienthi_mauson_diachi(XeHoi list[],int n)
	   {
	   	   for(int i=0;i<n;i++)
	   	   {
	   	   	   if(strcmp(list[i].mauson,"Green")==0 && strcmp(list[i].nsx.diachi,"Nhat Ban")==0)
	   	   	   {
	   	   	        list[i].xuat();  	   
				 }
			  }
	   }
  int main()
  {
  	int n;
  	cout<<"\nNhap vao so luong xe hoi : ";
  	cin>>n;
  	  XeHoi list[n];
  	 for(int i=0;i<n;i++)
      { 
      	cout<<"\n\n\t\tNHAP THONG TIN XE HOI THU :"<<i+1<<endl;
      	list[i].nhap();
	  }
      for(int i=0;i<n;i++)
      {
      	cout<<"========================="<<endl;
      	cout<<"\n\n\t\tTHONG TIN XE HOI THU "<<i+1<<endl;
      	list[i].xuat();
	  }
	  cout<<"\n\n\t\t\t DANH SACH XE HOI THEO YEU CAU  "<<endl;
	  hienthi_hang_toyota(list,n);
	  hienthi_mauson_diachi(list,n);
  	return 0;
  }
  
