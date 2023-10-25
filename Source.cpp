#include <iostream>

using namespace std;
int tong(int a, int b){
	return a+b;
};
int hieu(int a, int b)
{
	return a-b;
};
int tich(int a, int b){
	return a*b;
};
float thuong(int a, int b);
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int a,b;
	cout<<"\nNhap a: ";
	cin>>a;
	cout<<"\nNhap b: ";
	cin>>b;
	cout<<"\nTong a+b la: "tong(a,b);
	cout<<"\nHieu la: "hieu(a,b);
	cout<<"\nTich cua a va b la "<<tich(a,b)<<endl;
	system("pause");
	return 0;
}