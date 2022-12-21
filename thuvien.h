#include <iostream>
#include <string.h>
#include <algorithm>
#include <math.h>
#include <Windows.h>
#include <vector>


using namespace std;

	class Tinh_toan
	{
	private :
		string a;
		string b;
		string c; 
		int n;
public :
	Tinh_toan();
	Tinh_toan(string,string,int);

	
	string geta();
	string getb();
	string getc();
	int getn();
	void seta(string);
	void setb(string);
	void setc(string);
	void setn(int);
	
	void input(string,string,int);
	
	void giaithua1(int n);
	void giaithua2(int n);
	void doiab(string,string);
	void doin(int);
	string cong(string, string);
	string tru(string, string);
	string nhan(string, string);
	string chia(string, string);
	double chia1(string, string);
	string division(string ,long long);
	string divi(string, string);
	string modu(string, string);
	string luythua(string,string,string);
	string snt(string);
	friend istream& operator>>(istream & , Tinh_toan&);
	friend ostream& operator<<(ostream & , Tinh_toan&);
};








			
