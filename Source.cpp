#include <iostream>

using namespace std;
<<<<<<< HEAD
int tong(int a, int b);
<<<<<<< HEAD
int hieu(int a, int b);
int tich(int a, int b){
return a*b;
}
float thuong(int a, int b);
int main()
{
int a,b;
=======
=======
int tong(int a, int b){
	return a+b;
};
>>>>>>> d726f3cd085b44f38f73719b547ef8fe281b0f0c
int hieu(int a, int b)
{
	return a-b;
};
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	//tinh hieu
	hieu=a-b;
>>>>>>> refs/remotes/origin/main
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
<<<<<<< HEAD
cout<<"Nhap so a va b" <<endl;
cin>>a>>b;
cout<<"tich cua a va b la "<<tich(a,b)<<endl;
=======
	int a,b;
	cout<<"\nNhap a: ";
	cin>>a;
	cout<<"\nNhap b: ";
	cin>>b;
	cout<<"\nTong a+b la: "a+b;
>>>>>>> d726f3cd085b44f38f73719b547ef8fe281b0f0c
	system("pause");
	return 0;

	//tinh thuong
	thuong=a/b;
	system("pause");
	return 0;
}