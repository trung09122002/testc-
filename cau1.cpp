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
	if(n<2) 
		return 0; 
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) 
			return 0;
return 1;
}
int snt(int n)
{
	int dem=0;
		for(int i=1;i<=n;i++)
			if(kiemtra(i)==1)
			dem++;	
	return dem;
}
main()
{
	int n;
	nhap(n);
	cout<<"\ntrong [0;"<<n<<"] co: "<<snt(n)<<" la so nguyen to";
}
