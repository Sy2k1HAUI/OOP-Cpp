#include<iostream>
using namespace std;
   class tamthucbac2
   {
   	   private:
   	   	  float a,b,c;
   	  public:
   	  	  tamthucbac2()
   	  	  {
			   }
   	  	    tamthucbac2(float a,float b,float c)
		  {
		  	this->a=a;
		  	this->b=b;
		  	this->c=c;
		  }
	     friend ostream &operator<<(ostream &os, tamthucbac2 p);
	      tamthucbac2 operator-();
   	  	   tamthucbac2 operator+(tamthucbac2 p);
   	  	   tamthucbac2 operator-(tamthucbac2 z);
   };
	    ostream &operator<<(ostream &os, tamthucbac2 p)
   {
   	     os<<p.a<<"x2";
			if(p.b>=0)
			os<<" + ";  os<<p.b<<"x";
			if(p.c>=0)
			os<<" + ";  os<<p.c<<" =0 ";
   	    return os;
   }
     tamthucbac2 tamthucbac2::operator-()
	    {
	    	a = -a;
	    	b = -b;
	    	c = -c;
	    	return *this;
		}
     tamthucbac2 tamthucbac2::operator+(tamthucbac2 p)
     {
     	tamthucbac2 tong;
     	tong.a = this->a +p.a;
	 	tong.b = this->b +p.b;
	 	tong.c = this->c + p.c;
	 	return tong;
	 }
	   tamthucbac2 tamthucbac2::operator-(tamthucbac2 z)
	   {
	   	   tamthucbac2 hieu;
	   	   hieu.a = this->a - z.a;
	   	   hieu.b = this->b - z.b;
	   	   hieu.c = this->c - z.c;
	   	   return hieu;
	   }
	    
   int main()
   {
   	   tamthucbac2 q= tamthucbac2(1,2,3);
   	   cout<<-q<<endl;
      tamthucbac2 n= tamthucbac2(2,3,1);
      cout<<-n<<endl;
      tamthucbac2 t = q+n;
      tamthucbac2 h = q-n;
      cout<<"\nPhuong trinh tong la "<<endl;
      cout<<t;
      cout<<"\nPhuong trinh hieu la "<<endl;
      cout<<h;
   	   return 0;
   }
