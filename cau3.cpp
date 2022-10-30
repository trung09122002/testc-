#include<bits/stdc++.h>
using namespace std;
void nhap(int &n)
{
	do
	{
		cout<<"\nnhap so nguyen duong n: ";cin>>n;
	}
	while(n<=0);
}
int kiemtra(int n)
{
	int max=0;
	int i;
	if(n==0)
		max=0;
	do
	{
		i=n%10;
		if(i>max)
			max=i;
	}
	while(n/=10);
return max;
}
main()
{
	int n;
	nhap(n);
	cout<<"\nchu so lon nhat trong so "<<n<<" la: "<<kiemtra(n);
}


