#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <string>
#include <iomanip>
#include "do_hoa.h"
#include "thuvien.h"
#include "kd1.h"
#include <fstream>
#include <unistd.h>
#pragma wanring(disable: 4996)
using namespace std;



void chucnang0()
{
	system("cls");
	gotoxy(50,9);
	string a = "";
	box1(a,50,9,100,30,4);
	gotoxy(94,9);cout<<"|| DE TAI 3 ||";
	gotoxy(60,14);cout<<"Viet chuong trinh cai dat thu vien so nguyen lon voi cac phep tinh so hoc thong thuong :";
	gotoxy(65,15);cout<<"- Cong, tru, nhan, chia. luy thua, mod, div.";
	gotoxy(65,16);cout<<"- Luy thua, mod, div";
	gotoxy(65,17);cout<<"- Sau do su dung lop so nguyen do de tinh 200!";
	gotoxy(60,21);cout<<"Yeu cau:";
	gotoxy(65,22);cout<<"- Chuong trinh toi thieu phai tinh duoc 200!.";
	gotoxy(65,23);cout<<"- Chuong trinh co the lam viec voi cac so co it nhat la 100 chu so";
	gotoxy(65,24);cout<<"- Chuong trinh co kha nang kiem tra mot so nguyen (co vai chuc so hang) ";
	gotoxy(65,25);cout<<"  co la so nguyen to hay khong ?.";
	gotoxy(65,26);cout<<"- Giao dien chuong trinh can tien loi cho nguoi dung";
	
}

int bn=1;
void Lap_Bang_Menu1(string nd7,string nd8,string nd9,string nd10,string nd11,string nd12,string nd13,string nd14,string nd15,string nd16,Tinh_toan abc,string a,string b,int n)
{
	b_ox();
	n_box(5,9,40,2,11,0,3,nd1,nd2,nd3);
	thanhsang(10,9,40,2,0);
	
	int x = 18, y = 20, w = 40, h = 2;
	int vien_color = 11, background_color =  0, color_h1 = 7;
	
	int sl = 11;
	string nd="HELLO";
	box("",8,20,8,10,11,0);
	write(10,22,"Chuong");
	write(10,24,"Trinh");
	write(10,26,"Tinh");
	write(10,28,"Toan");
	
	resert_win(x ,y ,w ,h ,vien_color ,background_color,sl ,nd7,nd8,nd9,nd10,nd11,nd12,nd13,nd14,nd15,nd16,nd17,1);
	
	int yt=y,xt=x;
	int xp=x, yp=y;
	int xcu=xp, ycu=yp;
	
	bool kt= true;
	while(true)
	{
		if(kt==true)
		{
			gotoxy(xcu,ycu);
			thanhsang(xcu,ycu,w,h,background_color);
			xcu=xp;
			ycu=yp;
			thanhsang(xp,yp,w,h,color_h1);
			kt=false;
		}
		
		
		if(_kbhit())
		{
			char c = _getch();
			if(c == 13)
			{
				kt = true;
				switch(bn)
				{
					case 1 :
						{
						if(n<=1000)
						{
							system("cls");
							box("",70,9,100,30,4,0);	write(130,9,"|| Giai thua ||");
							box("",70,5,50,4,4,0);		write(75,7,"N = ");
							cout<<abc.getn();
							
							abc.giaithua1(n);
							
							resert_win(x ,y ,w ,h ,vien_color ,background_color,sl ,nd7,nd8,nd9,nd10,nd11,nd12,nd13,nd14,nd15,nd16,nd17,1);
						}
						else 
						{
							box("",70,9,100,30,0,0);
							
							gotoxy(10,45);abc.giaithua2(n);
							
							resert_win(x ,y ,w ,h ,vien_color ,background_color,sl ,nd7,nd8,nd9,nd10,nd11,nd12,nd13,nd14,nd15,nd16,nd17,1);
						}
						
						break;
						}
					case 2 :
						{
							box_ab(abc.geta(),abc.getb());
							gotoxy(114,39);cout<<"|| Cong ||";
							
							if(check(a,a.size()) ==0 || check(b,b.size()) == 0 ) 
							{
								gotoxy(80,12);cout<<"Errol data! ";
								
								resert_win(x ,y ,w ,h ,vien_color ,background_color,
								sl ,nd7,nd8,nd9,nd10,nd11,nd12,nd13,nd14,nd15,nd16,nd17,0);
							}
							else
							{	
								string kq =abc.cong(a,b);
								kqstring(kq,kq.size());
								
								resert_win(x ,y ,w ,h ,vien_color ,background_color,
								sl ,nd7,nd8,nd9,nd10,nd11,nd12,nd13,nd14,nd15,nd16,nd17,0);
							}
							break;
						}
					case 3 :
						{
							box_ab(abc.geta(),abc.getb());
							gotoxy(114,39);cout<<"|| Tru ||";
							
							if(check(a,a.size()) ==0 || check(b,b.size()) == 0 ) 
							{
								gotoxy(80,12);cout<<"Errol data! ";
								resert_win(x ,y ,w ,h ,vien_color ,background_color,
								sl ,nd7,nd8,nd9,nd10,nd11,nd12,nd13,nd14,nd15,nd16,nd17,0);
							}
							else
							{	
								string kq=abc.tru(a,b);
								kqstring(kq,kq.size());
								
								resert_win(x ,y ,w ,h ,vien_color ,background_color,sl ,nd7,nd8,nd9,nd10,nd11,nd12,nd13,nd14,nd15,nd16,nd17,0);
							}
							break;
						}
					case 4 :
						{
							box_ab(abc.geta(),abc.getb());
							gotoxy(114,39);cout<<"|| Nhan ||";
							
							if(check(a,a.size()) ==0 || check(b,b.size()) == 0 ) 
							{
								gotoxy(80,12);cout<<"Errol data! ";
								
								resert_win(x ,y ,w ,h ,vien_color ,background_color,
								sl ,nd7,nd8,nd9,nd10,nd11,nd12,nd13,nd14,nd15,nd16,nd17,0);
							}
							else
							{	
								string kq=abc.nhan(a,b);
								kqstring(kq,kq.size());
							
								resert_win(x ,y ,w ,h ,vien_color ,background_color,
								sl ,nd7,nd8,nd9,nd10,nd11,nd12,nd13,nd14,nd15,nd16,nd17,0);
							}
							break;
						}
					case 5 :
						{
							box_ab(abc.geta(),abc.getb());
							gotoxy(114,39);cout<<"|| Chia ||";
							
							if(check(a,a.size()) ==0 || check(b,b.size()) == 0 ) 
							{
								gotoxy(80,12);cout<<"Errol data! ";
								
								resert_win(x ,y ,w ,h ,vien_color ,background_color,
								sl ,nd7,nd8,nd9,nd10,nd11,nd12,nd13,nd14,nd15,nd16,nd17,0);
							}
							else
							{
								long long sum=0;
								long long m=0;
								for(int i=b.size()-1;i>=0;i--)
								{
									sum=sum+(b[i]-48)*pow(10,m);
									m++;
								}
								if(sum==0)
								{	write(80,12,"ERROL NUMBER B !"); }
								else 
								{
									if(abc.tru(a,"2147483640")<"0" && abc.tru(b,"2147483640")<"0" )
									{
										gotoxy(80,12);
										cout<<abc.chia1(a,b);
									}
									else
									{
										string kq = abc.divi(a,b);
										string du = abc.modu(a,b);
										kqstring(kq,kq.size());
										
										textcolor(4);cout<<" + " ;
										textcolor(11);cout<<du;
										textcolor(1);cout<<"/";
										textcolor(11);cout<<abc.getb();
									}	
								}
							resert_win(x ,y ,w ,h ,vien_color ,background_color,sl ,nd7,nd8,nd9,nd10,nd11,nd12,nd13,nd14,nd15,nd16,nd17,0);
							}
							break;
						}	
					case 6 :
						{
							box_ab(abc.geta(),abc.getb());
							gotoxy(114,39);cout<<"|| Div ||";
							
							if(check(a,a.size()) ==0 || check(b,b.size()) == 0 ) 
							{
								write(80,12,"Errol data! ");
								
								resert_win(x ,y ,w ,h ,vien_color ,background_color,
								sl ,nd7,nd8,nd9,nd10,nd11,nd12,nd13,nd14,nd15,nd16,nd17,0);
							}
							else
							{
								string kq = abc.divi(a,b);
								kqstring(kq,kq.size());
							
								resert_win(x ,y ,w ,h ,vien_color ,background_color,
								sl ,nd7,nd8,nd9,nd10,nd11,nd12,nd13,nd14,nd15,nd16,nd17,0);
							}
							break;
						}	
					case 7 :
						{
							box_ab(abc.geta(),abc.getb());
							gotoxy(114,39);cout<<"|| Mod ||";
							
							if(check(a,a.size()) ==0 || check(b,b.size()) == 0 ) 
							{
								write(80,12,"Errol data! ");
								
								resert_win(x ,y ,w ,h ,vien_color ,background_color,
								sl ,nd7,nd8,nd9,nd10,nd11,nd12,nd13,nd14,nd15,nd16,nd17,0);
							}
							else
							{
								string kq = abc.modu(a,b);
								kqstring(kq,kq.size());
								
								resert_win(x ,y ,w ,h ,vien_color ,background_color,
								sl ,nd7,nd8,nd9,nd10,nd11,nd12,nd13,nd14,nd15,nd16,nd17,0);
							}
							break;
						}	
					case 9 :
						{
							system("cls");
							box("",70,9,100,30,4,0);
							write(114,9,"|| Change ||");
							
							string a1,b1;
							write(80,12,"Nhap gia tri A moi : ");
							fflush(stdin);
							gotoxy(105,12);getline(cin,a1);
							
							write(80,13,"Nhap gia tri B moi : ");
							fflush(stdin);
							gotoxy(105,13);getline(cin,b1);
							
							abc.input(a1,b1,n);
							
							bn=1;
							Lap_Bang_Menu1(nd7,nd8,nd9,nd10,nd11,nd12,nd13,nd14,nd15,nd16,abc,a1,b1,n);
							
							resert_win(x ,y ,w ,h ,vien_color ,background_color,
							sl ,nd7,nd8,nd9,nd10,nd11,nd12,nd13,nd14,nd15,nd16,nd17,0);
						
							break;
						}
					case 10 :
						{
							system("cls");
							box("",70,9,100,30,4,0);
							write(114,9,"|| Change ||");
							
							write(80,12,"Nhap gia tri N moi : ");
							
							int n1;
							gotoxy(105,12);cin>>n1;
							abc.input(a,b,n1);
							
							bn=1;
							Lap_Bang_Menu1(nd7,nd8,nd9,nd10,nd11,nd12,nd13,nd14,nd15,nd16,abc,a,b,n1);
							
							resert_win(x ,y ,w ,h ,vien_color ,background_color,
							sl ,nd7,nd8,nd9,nd10,nd11,nd12,nd13,nd14,nd15,nd16,nd17,0);
							
							break;
						}
									
					case 11 :
						{
							
							return;
							break;
						}	
					case 8 :
						{
							box_ab(abc.geta(),abc.getb());
							write(114,39,"|| Luy thua ||");
							
							if(check(a,a.size()) ==0 || check(b,b.size()) == 0 ) 
							{
								write(80,12,"Errol data! ");
								
								resert_win(x ,y ,w ,h ,vien_color ,background_color,
								sl ,nd7,nd8,nd9,nd10,nd11,nd12,nd13,nd14,nd15,nd16,nd17,0);
							}
							else
							{
								string kq = abc.luythua(a,b,a);
								if(kq.size()<2000)
								{
									kqstring(kq,kq.size());
								}
								else 
								{
									gotoxy(10,45);cout<<kq;
								}
								
								resert_win(x ,y ,w ,h ,vien_color ,background_color,
								sl ,nd7,nd8,nd9,nd10,nd11,nd12,nd13,nd14,nd15,nd16,nd17,0);
							}
							break;		
						}
			}
			}
			else if(c == -32)
			{
				kt= true;
				c = _getch();
				if(c==72 && yp !=y)
				{
					yp-=2;
					bn--;
				}
				else if(c == 80 && yp != y + h*(sl-1))
				{
					yp+=2;
					bn++;
				}
			}
		}	
	}
}


void chucnang1(Tinh_toan abc)
{
	system("cls");
	box1("",10,20,160,5,4);
	box1("",10,20,20,5,4);
	
	box1("",10,25,160,5,4);
	box1("",10,25,20,5,4);
	
	box1("",10,30,160,5,4);
	box1("",10,30,20,5,4);
	
	gotoxy1(30,20,4); cout<<char(194);
	gotoxy1(30,35,4);cout<<char(193);
	gotoxy1(10,25,4); cout<<char(195);
	gotoxy1(10,30,4); cout<<char(195);
	gotoxy1(30,25,4); cout<<char(197);
	gotoxy1(30,30,4); cout<<char(197);
	gotoxy1(170,25,4); cout<<char(180);
	gotoxy1(170,30,4); cout<<char(180);
	
	
	
	
	
}

void chucnang2(Tinh_toan abc,string a,string b,int n)
{
	system("cls");
	
	box1("",70,9,100,30,4);
	write(104,9,"|| Chuc nang ||");
	
	Lap_Bang_Menu1(nd7,nd8,nd9,nd10,nd11,nd12,nd13,nd14,nd15,nd16,abc,a,b,n);
	bn=1;
}


int cn=0;

void Lap_Bang_Menu(string nd1,string nd2,string a,string b,int n,Tinh_toan abc)
{	

	int x = 5,y = 9, w = 40, h = 2;
	int vien_color = 11, background_color =  0,color_h1 = 7;
	int sl = 4;
	string nd="HELLO";
	
	n_box(x ,y ,w ,h ,vien_color ,background_color,sl ,nd1,nd2,nd3);
	thanhsang(x,y,w,h,background_color);
	
	int yt=y,	xt=x;
	int xp=x, 	yp=y;
	int xcu=xp, ycu=yp;
	
	bool kt= true;
	while(true)
	{	
		if(kt==true)
		{
			gotoxy(xcu,ycu);
			thanhsang(xcu,ycu,w,h,background_color);
			xcu=xp;
			ycu=yp;
			thanhsang(xp,yp,w,h,color_h1);
			kt=false;
		}
		
		if(_kbhit())
		{
			char c = _getch();
			if(c == 13)
			{
				kt = true;
				switch(cn)
				{
					case 0 :
						{
					
							chucnang0();
							b_ox();
							n_box(x ,y ,w ,h ,vien_color ,background_color,sl ,nd1,nd2,nd3);
							thanhsang(x,y,w,h,background_color);
							break;
						}
					case 1 :
						{
							system("cls");
							chucnang1(abc);
							gotoxy1(20,23,7);cout<<"A";
							fflush(stdin);
							gotoxy(35,24);for(int i=1;i<=130;i++)cout<<"-";
							gotoxy(35,23);getline(cin,a);
	
							gotoxy1(20,28,7);cout<<"B";
							fflush(stdin);
							gotoxy(35,29);for(int i=1;i<=130;i++)cout<<"-";
							gotoxy(35,28);getline(cin,b);
	
	
							gotoxy1(20,33,7);cout<<"N";
							gotoxy(35,34);for(int i=1;i<=130;i++)cout<<"-";
							gotoxy(35,33);cin>>n;
							abc.input(a,b,n);
							
							b_ox();
							n_box(x ,y ,w ,h ,vien_color ,background_color,sl ,nd1,nd2,nd3);
							thanhsang(x,y,w,h,background_color);
							break;
						}
					
					case 2 :
						{
						
							chucnang2(abc,a,b,n);b_ox();
							n_box(x ,y ,w ,h ,vien_color ,background_color,sl ,nd1,nd2,nd3);
							thanhsang(x,y,w,h,background_color);
							break;
						}
					case 3 :
						{
							ifstream ifs("input.txt");
    						if(!ifs){
       						  gotoxy(50,16);cerr << "Error: file not opened." << endl;
        					
    							}
   						 else gotoxy(50,16);cerr<<"Completed data retrieval"<<endl;
    					ifs>>a;
    					ifs>>b;
    					ifs>>n;
    					ifs.close();
    					abc.seta(a);
    					abc.setb(b);
    					abc.setn(n);
							cn=0;	
							Lap_Bang_Menu( nd1, nd2, a,b, n, abc);
							n_box(x ,y ,w ,h ,vien_color ,background_color,sl ,nd1,nd2,nd3);
							thanhsang(x,y,w,h,background_color);
							break;
						}	
					
				}
			}
			else if(c == -32)
			{
				kt= true;
				c = _getch();
				if(c==72 && yp !=y)
				{
					yp-=2;
					cn--;
				}
				else if(c == 80 && yp != y + h*(sl-1))
				{
					yp+=2;
					cn++;
				}
			}
		}	
	}
}



void MENU()
{
	system("cls");
	b_ox();
	while(1)
	{
	Tinh_toan abc;
	string a;string b;int n;
	
		Lap_Bang_Menu(nd1,nd2,a,b,n,abc);
	}

}
int main()
{
	
	MENU();
	getch();
}	
