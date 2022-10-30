#include<bits/stdc++.h>
using namespace std;
void nhap(int &x, int &y, int &z, int &t)
{
	do
	{
		cout<<"\nma tran A: ";
		cout<<"\nnhap so hang cua ma tran A: ";cin>>x;
		cout<<"\nnhap so cot cua ma tran A: ";cin>>y;
		cout<<"\nma tran B: ";
		cout<<"\nnhap so hang cua ma tran B: ";cin>>z;
		cout<<"\nnhap so cot cua ma tran B: ";cin>>t;
	}while(x<=0||y<=0||z<=0||t<=0);
}
void nhapmang(int **a,int x,int y)
{
	for(int i=0;i<x;i++)
		for(int j=0;j<y;j++)
		{
			cout<<"a["<<i<<"]["<<j<<"]=";
			cin>>a[i][j];
		}
			
}
void xuatmang(int **a,int x,int y)
{	
	
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
			cout<<a[i][j]<<"\t";
			cout<<endl;
	}
}
void tich(int **a,int **b,int x, int y,int z,int t)
{
	int **c;
	c=new int*[x];
	for(int i=0;i<x;i++)
		c[i]=new int[t];
	if(y==z)
	{
		for(int i=0;i<x;i++)
			for(int j=0;j<t;j++)
			{
				int sum=0;
				for(int k=0;k<y;k++)
					sum=sum+a[i][k]*b[k][j];
				c[i][j]=sum;
			}
		xuatmang(c,x,t);
	}
	else
	{
		cout<<"\n khong the nhan 2 ma tran";
	}
}
void chuyenvi(int **a, int x,int y)
{
	for(int j=0;j<y;j++)
	{
		for(int i=0;i<x;i++)
			cout<<a[i][j]<<"\t";
			cout<<endl;
	}
}
main()
{
	int x,y,z,t;
	int **a; int **b;
	nhap(x,y,z,t);
	a=new int*[x];
	b=new int*[z];
	for(int i=0;i<x;i++)
		a[i]=new int[y];
	for(int i=0;i<z;i++)
		b[i]=new int[t];
	cout<<"Nhap ma tran A: "<<endl;
	nhapmang(a,x,y);
	cout<<"Nhap ma tran B: "<<endl;
	nhapmang(b,z,t);
	cout<<"Ma tran A: "<<endl;
	xuatmang(a,x,y);
	cout<<"Ma tran B: "<<endl;
	xuatmang(b,z,t);
	cout<<"tich 2 ma tran A va B: "<<endl;
	tich(a,b,x,y,z,t);
	cout<<"\nma tran chuyen vi cua ma tran A: "<<endl;
	chuyenvi(a,x,y);
	cout<<"\nma tran chuyen vi cua ma tran B: "<<endl;
	chuyenvi(b,z,t);
}
