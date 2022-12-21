#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <vector>
#include "thuvien.h"
#include <Windows.h>
#include <conio.h>
#include <math.h>
#include "kq.h"

using namespace std;


		//----------Thiet lap----------
Tinh_toan::Tinh_toan()
		{
		this->a="";
		this->b="";
		this->n=0;
		}
Tinh_toan::Tinh_toan(string a1,string b1,int n1)
		{
		this->a=a1;
		this->b=b1;
		this->c=a1;
		this->n=n1;
		}
		
		//----------Get	----------
string Tinh_toan::geta()
		{
		return this->a;
		}

string Tinh_toan::getb()
		{	
		return this->b;
		}

string Tinh_toan::getc()
		{
		return this->c;
		}

int Tinh_toan::getn()
		{
		return this->n;
		}

		//----------Set	----------
void Tinh_toan::seta(string x)
		{
		this->a=x;
		}

void Tinh_toan::setb(string x)
		{
			this->b=x;
		}

void Tinh_toan::setc(string x)
		{
		this->c=x;
		}
void Tinh_toan::setn(int x)
		{
		this->n=x;
		}
		//----------Input----------
void Tinh_toan::input(string x,string y,int z)
		{
		seta(x);
		setb(y);
		setc(x);
		setn(z);
}

		//----------Tinh toan----------
				//----------Giai thua n----------
void Tinh_toan::giaithua1(int n)
{
	long long A[50000],i,j,m=1;
    long long r=0,q;
    A[0]=1;
      
    for(i=2;i<=n;i++)
	{	
		for(j=0;j<m;j++)
		{
			q=r;
        	r=(A[j]*i+r)/10;
          	A[j]=(A[j]*i+q)%10;
   		}
     	while(r>0)
		 {
        	A[m]=r%10;
          	m++;
          	r=r/10;
          
   		}
 	}
 	
 	long long b[50000];
	for(int i=0;i<m;i++)
	{
		b[i]=A[m-i-1];
	}
	kqint(b,m);
} 
void Tinh_toan::giaithua2(int n)
{
	long long A[50000],i,j,m=1;
    long long r=0,q;
    A[0]=1;
      
    for(i=2;i<=n;i++)
	{	
		for(j=0;j<m;j++)
		{
			q=r;
        	r=(A[j]*i+r)/10;
          	A[j]=(A[j]*i+q)%10;
   		}
     	while(r>0)
		 {
        	A[m]=r%10;
          	m++;
          	r=r/10;
          
   		}
 	}
 	
 	long long b[50000];
	for(int i=0;i<m;i++)
	{
		b[i]=A[m-i-1];
	}
	
	
	for(int i=0;i<m;i++)
	{
		cout<<b[i];
	}
	
} 

				//----------Cong 2 so a va b	----------
string Tinh_toan::cong(string a,string b)
{
	string kq="";
	int nho=0;
	while(a.size()<b.size()) 
	{
		int t=b.size()-a.size();
		for(int i=1;i<=t;i++)
		{
			a = "0"+a;
		}
	}
	while(a.size()>b.size()) 
	{
	int t=a.size()-b.size();
		for(int i=1;i<=t;i++)
		{
			b = "0"+b;
		}
	}
	int s= a.size()-1;
	
	for(int i=s;i>=0;i--)
	{
		int so=int(a[i]-'0')+int(b[i]-'0')+nho;
		kq = char(so%10+'0') + kq;
		nho= so/10;
	}
	if(nho>0) kq = char(nho+'0')+kq;
	
	return kq;
}
				//----------Tru 2 so a va b	----------
string Tinh_toan::tru(string a,string b)
{
	int kt=0;
	string kq="";	
		
	if(a==b) kt=1;	
	if(kt==1) 
	{
	
		 kq="0";
	}
	else
	{
		int nho=0;
		while(a.size()<b.size()) 
		{
			int t=b.size()-a.size();
			for(int i=1;i<=t;i++)
			{
				a = "0"+a;
			}
		}
		while(a.size()>b.size()) 
		{
			int t=a.size()-b.size();
			for(int i=1;i<=t;i++)
			{
				b = "0"+b;
			}
		}
		bool t= false;
		if(a<b) 
		{
			a.swap(b);
			t=true;
		}
		int s= a.size()-1;	
		for(int i=s;i>=0;i--)
		{
			int so=int(a[i]-'0')-int(b[i]-'0')-nho;
			if(so<0)
			{
				kq = char(so+10+'0') + kq;
				nho=1;
			}
			else kq = char(so+'0') + kq;
		}
		while(kq[0] =='0') kq.erase(kq.begin());
		if(t==true) kq ="-"+kq;
		return kq;
	}	
	
}
				//----------Nhan 2 so a va b	----------
string Tinh_toan::nhan(string a,string b)
{
	if(b=="0" || a=="0")return "0";
	else
	{
	
	if(a.size()<b.size())
		a.swap(b);
		
	int l1=a.size();
	int l2=b.size();
	int l3=l1+l2;
	
	vector<int> s1,s2;
	for(int i=0;i<l1;i++)
	{
		s1.push_back(int(a[i]-'0'));
	}	
	for(int i=0;i<l1;i++)
	{
		s2.push_back(int(b[i]-'0'));
	}

	vector< vector<int> > res(l2);
	int index=0;
	
	for(int i=l2-1;i>=0;i--)
	{
		int t=0;
		while(t<index)
		{
			res[index].push_back(0);
			t++;
		}
		int nho=0,so=0;
		for(int j=l1-1;j>=0;j--)
		{
			so = s1[j]*s2[i] +nho;
			res[index].push_back(so%10);
			nho=so/10;
		}
		if(nho>0) res[index].push_back(nho);
		
		while(res[index].size()<l3)
			res[index].push_back(0);
		reverse(res[index].begin(),res[index].end());
		index++;
	}	
	
	
		int nho=0;
		string ans="";
		for(int j=res[0].size()-1;j>=0;j--)
		{
			int so=nho;
			for(int i=0;i<res.size();i++)
				so+= res[i][j];
			ans = char(so%10+'0')+ans;
			nho=so/10;		
		}
		
		if(nho>0) ans= char(nho+'0')+ans;
		while(ans[0]=='0') ans.erase(ans.begin());
		return ans;
	}
}
string Tinh_toan::division(string number, long long divisor)
{
   // to store the result
   string result;
   long long index = 0;
   // extracting the part that is greater than the given divisor
   long long dividend = number[index] - '0';
   while (dividend < divisor) {
      dividend = dividend * 10 + (number[++index] - '0');
   }
   // iterating until all digits participate in the division
   while (number.size() > index) {
      result += (dividend / divisor) + '0';
      // adding the next digit to the dividend
      dividend = (dividend % divisor) * 10 + number[++index] - '0';
   }
   if (result.length() == 0) {
      return "0";
   }
   return result;
}

string division(string a, long long b)
{
   string s;
   long long i = 0;
   long long D = a[i] - '0'; 
   while (D < b) {
      D = D * 10 + (a[++i] - '0');
   } 
   while (a.size() > i) {
      s += (D / b) + '0';
      D = (D % b) * 10 + a[++i] - '0';
   }
   if (s.length() == 0) {
      return "0";
   }
   return s;
}
				//----------Chia lau nguyen 2 so a va b	----------
string Tinh_toan::divi(string a,string b)
{
	
	if(tru(b,"2147483646")<="0")
	{
	long long  so= 0;
	long long mu=0;
	long long dem=0;
	for(int i=b.size()-1;i>=0;i--)
		{
			so=so+(b[i]-48)*pow(10,mu);
			mu++;
			while(so>2000000000)
			{
				so=so-1000000000;
				dem++;
			}
		}
		return division(a,so+dem*1000000000);
	}
	else 
	{
		while(tru(b,"2147483646") >"0")
		{
			b=division(b,1000000000);
			a=division(a,1000000000);
		}
		
	long long  so= 0;
	long long mu=0;
	long long dem=0;
	for(int i=b.size()-1;i>=0;i--)
		{
			so=so+(b[i]-48)*pow(10,mu);
			mu++;
			while(so>2000000000)
			{
				so=so-1000000000;
				dem++;
			}
		}
		a=division(a,(long long)(so+dem*1000000000));
	return a;
	}
}
				//----------Chia lay du 2 so a va b	----------
string Tinh_toan::modu(string a,string b)
{
	if(tru(a,b)<"0")
	return a;
	else
	{
	string ans= tru(a,b);
	while(tru(ans,b)>"0")
	{
		ans =tru(ans,b);
	}
	return ans;
	}
}
				//----------Kiem tra snt 2 so a va b	----------
string Tinh_toan::snt(string a)
{
	long long  so= 0;
	long long mu=0;
	long long dem=0;
	for(int i=a.size()-1;i>=0;i--)
		{
			so=so+(a[i]-48)*pow(10,mu);
			mu++;
			while(so>2000000000)
			{
				so=so-1000000000;
				dem++;
			}
		}
	if(so+dem*1000000000<10)
	{
		if(so==2||so==3||so==5||so==7)
		return "YES";
		else return "NO";
	}
	else if(so+dem*1000000000<2147483646)
	{
		int kt=0;
		for(int i =2 ;i<=sqrt(so+dem*1000000000);i++)
		{
				if((so+dem*1000000000)%i==0)
				kt=1;
		}
		if(kt==0) return "YES";
		else return "NO";											
	}		
}
void Tinh_toan::doiab(string x,string y)
{
	seta(x);
	setb(y);
}
void Tinh_toan::doin(int x)
{
	setn(x);
}
  double Tinh_toan::chia1(string a,string b)
{
	long long   so= 0;
	long long   mu=0;
	long long   dem=0;
	for(int i=a.size()-1;i>=0;i--)
		{
			so=so+(a[i]-48)*pow(10,mu);
			mu++;
			while(so>2000000000)
			{
				so=so-1000000000;
				dem++;
			}
		}	
	long long   so1= 0;
	long long  mu1=0;
	long long  dem1=0;
	for(int i=b.size()-1;i>=0;i--)
		{
			so1=so1+(b[i]-48)*pow(10,mu1);
			mu1++;
			while(so1>2000000000)
			{
				so1=so1-1000000000;
				dem1++;
			}
		}
	return (  double)(so+dem*1000000000)/(so1+dem1*1000000000);
}		
string Tinh_toan::luythua(string a,string b, string c)		
{
	long long sum=0;
	long long m=0;
	for(int i=b.size()-1;i>=0;i--)
	{
		sum=sum+(b[i]-48)*pow(10,m);
		m++;
	}
	
	if(sum<2147483646)
	{
		for(int i=1;i<sum;i++)
		{
			c=nhan(c,a);
		}
		return c;
	}
	else 
	{
		long long  so= 0;
		long long mu=0;
		long long dem = 0;
		for(int i=b.size()-1;i>=0;i--)
		{
			so=so+(b[i]-48)*pow(10,mu);
			mu++;
			while(so>2000000000)
			{
				so=so-1000000000;
				dem++;
			}
		}
		for(int i=1;i<=so;i++)
			{
				c=nhan(c,a);
			}
		for(int i=1;i<dem;i++)
		{
			for(int j=1;j<=1000000000;j++)
			{
				c=nhan(c,a);
			}
		}	
		return c;
	}
}
		
string Tinh_toan::chia(string a,string b)
{			
		long long   so1= 0;
		long long  mu1=0;
		long long  dem1=0;
		for(int i=b.size()-1;i>=0;i--)
		{
			so1=so1+(b[i]-48)*pow(10,mu1);
			mu1++;
			while(so1>2000000000)
			{
				so1=so1-1000000000;
				dem1++;
			}
		}

		
		 if(tru(a,"2147483640")>"0" && tru(b,"2147483640")<"0" )
		{
			return division(a,so1+dem1*1000000000);
		}
		else if(tru(a,"2147483640")>"0"&& tru(b,"2147483640")>"0" )
		{
			string warn = "Please change number B ! (B < 2147483646) ";
			return warn;
		}	
}	
istream &operator>>(istream & is, Tinh_toan& abc)
{
	getline(cin,abc.a);
	getline(cin,abc.b);
	is>>abc.n;
	return is;
}
ostream &operator<<(ostream & os, Tinh_toan& abc)
{
	os<<abc.a;
	os<<abc.b;
	os<<abc.n;
	return os;
}
