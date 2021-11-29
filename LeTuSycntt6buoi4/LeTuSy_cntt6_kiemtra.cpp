#include<iostream>
#include<string.h>
#include<stdio.h>
#include<iomanip>
using namespace std;
  class Phongmay;
  class Maytinh
  {
  	 private:
  	 	char mamay[10];
  	 	char tenmay[20];
  	 	float tocdo;
  	 	char hangsx[15];
  	 	char diachisx[30];
  		friend class Phongmay;
  		void friend sapxep(Phongmay a);
  		void friend hienthi(Phongmay a);
  	    void friend Locmaycpumax(Phongmay a);
  };
  class Phongmay
  {
  	private:
  		char tenphongmay[20];
  		char nguoiquanli[30];
  		Maytinh x[100];
  		int n;
  	public:
  		void nhap();
		 void xuat();
	  void friend sapxep(Phongmay a);
	  void friend hienthi(Phongmay a);
	  void friend Locmaycpumax(Phongmay a);
  };
     void Phongmay::nhap()
     {
     	cout<<"\nNhap vao ten phong may :";
     	fflush(stdin);
     	gets(tenphongmay);
     	cout<<"\nNhap vao ten nguoi quan li :";
     	fflush(stdin);
     	gets(nguoiquanli);
     		cout<<"\nNhap vao so luong may : ";
     	cin>>n;
     	for(int i=0;i<n;i++)
     	{
       	cout<<"\n\n\t\tNHAP VAO THONG TIN MAY TINH THU "<<i+1<<"\n";
        	cout<<"\nNhap vao ma may :";
        	fflush(stdin);
     	gets(x[i].mamay);
     	cout<<"\nNhap vao ten may :";
     	fflush(stdin);
     	gets(x[i].tenmay);
     	cout<<"\nNhap vao toc do may :";
     	cin>>x[i].tocdo;
     	cout<<"\nNhap vao ten hang san xuat :";
     	fflush(stdin);
     	gets(x[i].hangsx);
     	cout<<"\nNhap vao dia chi san xuat :";
     	fflush(stdin);
     	gets(x[i].diachisx);
		 }
    
     	cout<<endl;
	 }
     void Phongmay::xuat()
     {
     	  cout<<"\n\n\t\t--------THONG TIN PHONG MAY ----------\n";
    cout<<"\nTen Phong May : "<<tenphongmay;
    cout<<"\nNguoi Quan Li : "<<nguoiquanli;
    cout<<"\nSo Luong May Tinh : "<<n;
    cout<<"\n\n\t\t------------ DANH SACH CAC MAY TINH ------------\n";
    cout<<setw(10)<<left<<"Ma May"<<setw(20)<<"Ten May"<<setw(15)<<"Toc Do CPU";
    cout<<setw(15)<<"Hang San Xuat"<<setw(30)<<"Dia Chi San Xuat"<<endl;
    for(int i=0;i<n;i++){
        cout<<setw(10)<<x[i].mamay<<setw(20)<<x[i].tenmay<<setw(15)<<x[i].tocdo;
        cout<<setw(15)<<x[i].hangsx<<setw(30)<<x[i].diachisx<<endl;
    }
     	
	 }
	 void sapxep(Phongmay a)
	 {
	 	 for(int i=0;i<a.n-1;i++)
		  {
            for(int j=i+1;j<a.n;j++)
			{
              if(stricmp(a.x[i].tenmay,a.x[j].tenmay)>0)
			  {
                Maytinh temp = a.x[i];
                a.x[i] = a.x[j];
                a.x[j] = temp;
            }
          }
	 }
		 cout<<"\n\n\t\t----THONG TIN SAU KHI SAP XEP LA ----\n";
		  cout<<setw(10)<<left<<"Ma May"<<setw(20)<<"Ten May"<<setw(15)<<"Toc Do CPU";
        cout<<setw(15)<<"Hang San Xuat"<<setw(30)<<"Dia Chi San Xuat"<<endl;
		 for(int i=0;i<a.n;i++)
		 {
		 	 cout<<setw(10)<<a.x[i].mamay<<setw(20)<<a.x[i].tenmay<<setw(15)<<a.x[i].tocdo;
            cout<<setw(15)<<a.x[i].hangsx<<setw(30)<<a.x[i].diachisx<<endl;
		 }
	 }
	 void hienthi(Phongmay a)
{

        cout<<"\n\t\t------------ DANH SACH MAY TINH DELL DUOC SAN XUAT TAI HA NOI ------------\n";
         cout<<setw(10)<<left<<"Ma May"<<setw(20)<<"Ten May"<<setw(15)<<"Toc Do CPU";
       cout<<setw(15)<<"Hang San Xuat"<<setw(30)<<"Dia Chi San Xuat"<<endl;
         for(int i=0;i<a.n;i++)
		 {
            if(stricmp(a.x[i].hangsx,"Dell")==0 && stricmp(a.x[i].diachisx,"Ha Noi") == 0)
			{
                cout<<setw(10)<<a.x[i].mamay<<setw(20)<<a.x[i].tenmay<<setw(15)<<a.x[i].tocdo;
                cout<<setw(15)<<a.x[i].hangsx<<setw(30)<<a.x[i].diachisx<<endl;
            }
        }
    }
	 void Locmaycpumax(Phongmay a)
{
    float max = a.x[0].tocdo;
    for(int i=1;i<a.n;i++){
        if(max<a.x[i].tocdo)
            max= a.x[i].tocdo;
    }
    cout<<"\n\t\t------------DANH SACH MAY TINH CO TOC DO CPU CAO NHAT ------------\n";
     cout<<setw(10)<<left<<"Ma May"<<setw(20)<<"Ten May"<<setw(15)<<"Toc Do CPU";
    cout<<setw(15)<<"Hang San Xuat"<<setw(30)<<"Dia Chi San Xuat"<<endl;
    for(int i=0;i<a.n;i++)
	{
        if(a.x[i].tocdo==max){
            cout<<setw(10)<<a.x[i].mamay<<setw(20)<<a.x[i].tenmay<<setw(15)<<a.x[i].tocdo;
            cout<<setw(15)<<a.x[i].hangsx<<setw(30)<<a.x[i].diachisx<<endl;
        }
    }
}
  int main()
  {
  	int n;
  	Phongmay a;
  	a.nhap();
  	a.xuat();
   	sapxep(a);
   	hienthi(a);
   	Locmaycpumax(a);
   	return 0;
  }
