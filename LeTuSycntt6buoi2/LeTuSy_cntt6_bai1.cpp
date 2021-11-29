#include<iostream>
#define PI 3.14;
using namespace std;
     class Hinhchunhat
     {
        private:
		   float dai;
		   float rong;
		public:
		   void nhap();
		   void ve();
		   float dientich();
		   float chuvi(); 	
		   Hinhchunhat();
		   ~Hinhchunhat();
	 };
	      void Hinhchunhat::nhap()
		  {
		  	   cout<<"\nNhap vao chieu dai hinh chu nhat: "<<endl;
		  	   cin>>dai;
		  	   cout<<"Nhap vao chieu rong hinh chu nhat :";
		  	   cin>>rong;
		   } 
		   void Hinhchunhat::ve()
		   {
		   	  for(int i=0;i<rong;i++)
		   	  {
		   	  	   for(int j=0;j<dai;j++)
		   	  	   {
		   	  	   	   if(i==0 || i==rong-1 || j==0 || j==dai-1)
		   	  	   	   {
		   	  	          cout<<" * ";  	   	   
					   }
					   else
					   {
					   	   cout<<"   ";
					   }
					}
					cout<<endl;
				 }
		   }
		   float Hinhchunhat::dientich()
		   {
		   	  return dai*rong;
		   }
		   float Hinhchunhat::chuvi()
		   {
		   	  return dai+rong;
		   }
		Hinhchunhat::Hinhchunhat()
		{
			
		}
		Hinhchunhat::~Hinhchunhat()
		{
			
		}
  int main()
  {
      Hinhchunhat x;
    	x.nhap();
    	x.ve();
        cout<<"\nDien tich hinh chu nhat la : "<<x.dientich()<<endl;
        cout<<"\nChu vi hinh chu nhat la : "<<x.chuvi();
  	  return 0;
  }
