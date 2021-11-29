#include<iostream>  
#include<stdio.h>
#include<string.h>
  using namespace std;
    class STUDENT;
    class DIACHI
    {
       private:
         int sonha;
	     int soduong;
	     char tentp[30];	
	    public:
	    	void nhaptt();
	    	void xuattt();
	    	friend class STUDENT;
	    	friend void hienthi(STUDENT list[],int n);
	};
    class STUDENT
    { 
        private:
		  char msv[15];
		  char hoten[30];
		  DIACHI add;
		public:
		  void nhap();
		  void xuat();	
		  friend void sxtentangdan(STUDENT list[],int n);
		  friend void hienthi(STUDENT list[],int n);
	};
	  void STUDENT::nhap()
	  {
	  	 cout<<"\nNhap vao ma sinh vien : ";
	  	 fflush(stdin);
	  	 gets(msv);
	  	 cout<<"\nNhap vao ho ten sinh vien : ";
	  	 fflush(stdin);
	  	 gets(hoten);
	  	 cout<<"\nNhap vao so nha : ";
	  	 cin>>add.sonha;
	  	 cout<<"\nNhap vao so duong :";
	  	 cin>>add.soduong;
	  	 cout<<"\nNhap vao ten thanh pho : ";
	  	 fflush(stdin);
	  	 gets(add.tentp);
	  	 cout<<endl;
	  }
	    void STUDENT::xuat()
	    {
	    	cout<<"\nMa Sinh Vien :"<<msv;
	    	cout<<"\nHo Va Ten :"<<hoten;
	    	cout<<"\nSo Nha:"<<add.sonha;
	    	cout<<"\nSo Duong :"<<add.soduong;
	    	cout<<"\nTen Thanh Pho :"<<add.tentp;
	    	cout<<endl;
		}
		void sxtentangdan(STUDENT list[],int n)
		{
             for(int i=0;i<n;i++)
                {  
				   for(int j=i+1;j<n-1;j++)
                     if(stricmp ( list[i].hoten,list[j].hoten ) > 0)
                  {
                     STUDENT temp = list[i];
                      list[i] = list[j];
                       list[j] = temp;
                  }
		      }
		}
		void hienthi(STUDENT list[],int n)
		{
			for(int i=0;i<n;i++)
			{
				   if((list[i].add.sonha) < 100 || (list[i].add.soduong) > 40 || strcmp(list[i].add.tentp,"Da Nang")==0)
				   {
				   	  list[i].xuat();
				   }
				}
		}
  int main()
  {

      STUDENT list[5];
      for(int i=0;i<5;i++)
      { 
      	cout<<"\nNhap thong tin sinh vien thu :"<<i+1<<endl;
      	list[i].nhap();
	  }
      for(int i=0;i<5;i++)
      {
      	cout<<"========================="<<endl;
      	cout<<"\nThong tin sinh vien thu "<<i+1<<endl;
      	list[i].xuat();
	  }
	  sxtentangdan(list,5);
	  cout<<"\n\n\t\tTHONG TIN SINH VIEN SAU KHI SAP XEP LA ";
	   for(int i=0;i<5;i++)
      {
      	cout<<endl;
      	cout<<"\nTHONG TIN SINH VIEN THU  "<<i+1<<endl;
      	list[i].xuat();
	  }
	  cout<<"\n\n\t\tTHONG TIN SINH VIEN SAU KHI CHON LOC LA ";
	   hienthi(list,5);
  	return 0;
  }
