#include<iostream>
#include<iomanip>

using namespace std;
    class Hanghoa
    {
        private:
		   char mahang[12];
		   char tenhang[30];
		   float gia;
		   int soluong;
		public:
		    void nhap();
			void xuat();
			float thanhtien();
		Hanghoa();
		~Hanghoa();	
	};
	 void Hanghoa::nhap()
	    {
	    	fflush(stdin);
	        cout<<"\nNhap vao ma hang : "<<endl;
			gets(mahang);
			fflush(stdin);
			cout<<"\nNhap vao ten hang : "<<endl;
			gets(tenhang);
			cout<<"\nNhap vao don gia cua mat hang : "<<endl;
			cin>>gia;
			cout<<"\nNhap vao so luong hang :";
			cin>>soluong;
		}	 
	  void Hanghoa::xuat()
	  {
	  	    cout<<left<<setw(15)<<mahang;
  	        cout<<setw(15)<<tenhang;
  	        cout<<setw(15)<<gia;
  	        cout<<setw(15)<<soluong;
  	       cout<<setw(15)<<soluong*gia<<endl;
	  }
	 
	  Hanghoa::Hanghoa()
	  {
	  	
	  }
	  Hanghoa::~Hanghoa()
	  {
	  	
	  }
  int main()
  {
  	int n;
  	  cout<<"\nNhap vao so luong mat hang :";
  	  cin>>n;
     Hanghoa x[20];	
     for(int i=0;i<n;i++)
     {
     	  	cout<<"Nhap thong tin mat hang thu "<<i+1<<endl;
     	  	x[i].nhap();
     }
         cout<<"\n\n\t\t=========THONG TIN MAT HANG===========";
	    cout<<left<<setw(15)<<"\nMA HANG ";
		cout<<setw(15)<<"TEN HANG ";
		cout<<setw(15)<<"DON GIA ";
		cout<<setw(15)<<"SO LUONG ";		
		cout<<setw(15)<<"THANH TIEN "<<endl;
		for(int i=0;i<n;i++)
	{
			     x[i].xuat();
			    
	}
  	return 0;
  }
