#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int nilai[20];
    int n,i,j,x,pos,tampung;
    cout<<"Masukan banyak inputan : "<<endl;
    cin>>n;
    cout<<"======================="<<endl;
    for (int i=0; i<n; i++)
   {
   cout<<"Nilai ke "<<(i+1)<<" : ";
   cin>>nilai[i];
   }
   cout<<endl;
   cout<<"Sebelum Sorting"<<endl;
   cout<<"====================="<<endl;
   for (int i=0; i<n; i++)
   {
   cout<<nilai[i]<<endl;
   }
   cout<<endl;

    for (int i=0;i<n-1;++i)
 {
  pos=i;
  for (int j=i+1;j<n;++j)
  {
   if (nilai[j]<nilai[pos])
   {
             pos=j;
   }
  }
  if (pos !=i)
  {
                tampung=nilai[pos];
    nilai[pos]=nilai[i];
    nilai[i]=tampung;
                }
  cout<<"langkah ke "<<i+1<<endl;
  cout<<"-----------------------"<<endl;
  for (int x=0;x<n;++x)
    {
  cout<<nilai[x]<<endl;

  }
  cout<<endl;
 }

    cout<<"Setelah sorting : \n";
    cout<<"======================="<<endl;
 for (int i=0;i<n;++i)
 {
  cout<<nilai[i]<<endl;
  }


getch();
}
