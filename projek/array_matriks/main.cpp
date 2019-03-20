#include<iostream>
#include<iomanip>
using namespace std;
 #define BARIS 3
 #define KOLOM 4
 int main()
 {
	 int A[BARIS][KOLOM]={2,4,6,3,4,2,5,6,3,2,4,1};
	 int B[BARIS][KOLOM]={1,3,5,7,2,2,4,6,3,1,2,3};
	 int C[BARIS][KOLOM],i,j;
	 //jumlahkan matrik
	 for(i=0;i<=BARIS-1;i++)
	 for(j=0;j<=KOLOM-1;j++)
	 C[i][j]=A[i][j]+B[i][j];
	 //cetak matrik A
	 cout<<"MatrikA:"<<endl;
	 for(i=0;i<=BARIS-1;i++)
	 {
	 for(j=0;j<=KOLOM-1;j++)
	 cout<<setw(3)<<A[i][j]<<"";
	 cout<<endl;
	 }
	 //cetak matrik B
	 cout<<"MatrikB:"<<endl;
	 for(i=0;i<=BARIS-1;i++)
	 {
	 for(j=0;j<=KOLOM-1;j++)
	 cout<<setw(3)<<B[i][j]<<"";cout<<endl;
	 }
	 //cetak matrik C
	 cout<<"MatrikC:"<<endl;
	 for(i=0;i<=BARIS-1;i++)
	 {
	 for(j=0;j<=KOLOM-1;j++)
	 cout<<setw(3)<<C[i][j]<<"";
	 cout<<endl;
	 }
	 }
