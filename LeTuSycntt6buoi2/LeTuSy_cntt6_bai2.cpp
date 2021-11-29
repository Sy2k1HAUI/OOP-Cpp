#include<iostream>
#include<math.h>
  using namespace std;
    class Phuongtrinhbachai
    {
       private:
	     float a;
		 float b;
		 float c;
	   public:
	      void nhap();
		  void xuat();
		  float giai();
		  //ham tao khong doi
      Phuongtrinhbachai()
        {
   	      a=0;
   	      b=0;
   	      c=0;
         }
        //ham tao co doi
       Phuongtrinhbachai(float giatria,float giatrib,float giatric)
         {
     	     a=giatria;
     	     b=giatrib;
     	     c=giatric;
          }
		  
		  ~Phuongtrinhbachai();
		     	
	};
	   void Phuongtrinhbachai::nhap()
	   {
	   	    cout<<"\nNhap a : ";    cin>>a;
          cout<<"\nNhap b : ";    cin>>b;
		  cout<<"\nNhap c : ";    cin>>c;	   	    
	   }
	   void Phuongtrinhbachai::xuat()
	   {
	   	  cout<<"\nPhuong trinh bac hai la : "<<a<<"X2 "<<b<<"X +"<<c<<"=0";
	   }
    float Phuongtrinhbachai::giai()
       {
         if (a == 0) 
		  {
            if (b == 0) 
				{
                     cout<<"Phuong trinh vo nghiem ! ";
               } 
		    else 
		  {
               cout<<"Phuong trinh co mot nghiem duy nhat x = "<<(-c / b);
          }
        //return;
    }
        float delta = b*b - 4*a*c;
       float x1;
       float x2;
       if (delta > 0)
	    {
            x1 = (float) ((-b + sqrt(delta)) / (2*a));
            x2 = (float) ((-b - sqrt(delta)) / (2*a));
        cout<<"\nPhuong trinh co 2 nghiem la :"<< x1<< " va "<<x2;
       } 
	   else if (delta == 0) 
	   {
          x1 = (-b / (2 * a));
            cout<<"\nPhuong trinh co nghiem kep x1 = x2 = "<<x1;
      }  
	     else 
		 {
              cout<< "\nPhuong trinh vo nghiem ! ";
          }
	  }
	
	   Phuongtrinhbachai::~Phuongtrinhbachai()
	   {
	   	
	   }
  int main()
  {
  	Phuongtrinhbachai P(2,-7,3);
  	P.xuat();
  	P.giai();
  	Phuongtrinhbachai Q;
    Q.nhap();
  	Q.xuat();
  	Q.giai();
  	return 0;
  }  
