#include<iostream>

using namespace std;
   class MATRIX
       {
       	private:
       	   	double  **arr;
       	   	int m,n;
       	public:
		       friend istream &operator>>(istream &is, MATRIX &B);
	         friend ostream &operator<<(ostream &os, MATRIX B); 	
	         MATRIX operator-();
	         MATRIX operator+(MATRIX B);
	         MATRIX operator-(MATRIX B);
	         
	};
	  istream &operator>>(istream &is, MATRIX &B)
	   {
	   	   cout<<"\nNhap so dong cua ma tran :";
	   	   is>>B.m;
	   	   cout<<"\nNhap so cot cua ma tran :";
	   	   is>>B.n;
	   	   B.arr = new double *[B.m];
	   	      for(int i=0; i<B.m; i++)
                 {
                      B.arr[i]= new double [B.n];
                           for(int j=0; j<B.n; j++)
                               {
                                 cout<<"\nNhap PT thu ["<<i+1<<"]["<<j+1<<"] = ";
                                  is>>B.arr[i][j];
                               }                
        }
			  return is;
	   }
	   	ostream &operator<<(ostream &os, MATRIX B)
		{
		    for(int i=0;i<B.m;i++)
		    {
		    	for(int j=0;j<B.n;j++)
		    	
		    		os<<B.arr[i][j]<<" ";
		    		os<<endl;
			}
			return os;
		}
	   MATRIX MATRIX::operator-()
	   {
	   	    for(int i=0; i<m; i++)
              for(int j=0; j<n; j++)
              {
              	arr[i][j]=-arr[i][j];
			  }
            return *this;
	   }
	   MATRIX MATRIX::operator+(MATRIX B)
	   {
	   	   MATRIX Tong;
            Tong.m=m;
              Tong.n=n;
         Tong.arr= new double*[m];
       for(int i=0; i<m; i++)
	   {
           Tong.arr[i]= new double [n];
            for(int j=0; j<n; j++)
               Tong.arr[i][j] = arr[i][j] + B.arr[i][j];
      }
        return Tong;
	   }
     	MATRIX MATRIX::operator-(MATRIX B)
   {
        MATRIX Hieu;
        Hieu.m=m;
        Hieu.n=n;
        Hieu.arr= new double*[m];
         for(int i=0; i<m; i++)
		 {
             Hieu.arr[i]= new double[n];
               for(int j=0; j<n; j++)
               {
               	  Hieu.arr[i][j] = arr[i][j] - B.arr[i][j];
			   }
         }
        return Hieu;
    }
  int main()
  {
       MATRIX M,N;
       cout<<"\nNhap Vao Ma Tran M ";
       cin>>M;
       cout<<"\nNhap vao Ma Tran N ";
       cin>>N;
       cout<<"\nMa Tran Doi Cua Ma Tran M La "<<endl;
       cout<<-M;
       cout<<"\nMa Tran Doi Cua Ma Tran N La "<<endl;
       cout<<-N;
       cout<<"\nMa Tran Tong La "<<endl;
       cout<<(M+N);
       cout<<"\nMa Tran Hieu La "<<endl;
       cout<<(M-N);
  	return 0;
  }
