#include <iostream>

using namespace std;
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
cout<<"Nhap so a va b" <<endl;
cin>>a>>b;
cout<<"tich cua a va b la "<<tich(a,b)<<endl;
	system("pause");
	return 0;
}