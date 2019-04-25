#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace::std;

main()
{
    int napi,ubah,a,b,c,d,e,f,i;
    string nama[20],nilai;
    cout<<"======================== PROGRAM DATA PENJARA NUSA KAMBANGAN ========================="<<endl<<endl;
    //insert data
    cout<<"masukkan jumlah nama narapidana :";
    cin>>napi;

    for(i=0;i<napi;i++)
    {
        cout<<"\n nama narapidana["<<i<<"]:";
        cin>>nama[i];
    }
    cout<<endl;
    // sorting data
    cout<<"\n masukkan nama napi yang ingin sorting :";
    cin>>nilai;

    //searching data
    for(f=0;f<napi;f++)
    {
        if(nama[f]==nilai)
    {
    cout<<"\nnama yang di searching terdapat pada indeks ke-"<<f;
}
}
//menghapus data
cout<<"\nmasukkan indeks yang ingin di hapus :";
cin>>d;
i=d;
cout<<"\nnama yang di hapus :";
cout<<""<<nama[i]<<"pada indeks ke-"<<i<<"\n";
cout<<"\nnama terisa :"<<endl;
for(f=d;f<napi;f++)
{
   nama[f]=nama[f+1];
}
for(e=0;e<napi-1;e++)
{
     cout<<"\nnarapidana["<<e<<"]="<<nama[e];
}
//ubah data
cout<<"\nmasukkan indks yang di ubah :";
cin>>c;
cout<<"\nmasukkan nama narapidana yang ingin di ubah :";
cin>>ubah;
a=c;
nama[a]=ubah;
cout<<"\nnama narapidana yang di ubah :\n";
system("CLS");
for(b=0;b<napi;b++)
{
cout<<"\nnarapidana["<<b<<"]:"<<nama[b];
}
getch();
}
