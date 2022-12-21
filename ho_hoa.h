#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
#include <math.h>

//#include "thuvien.h"
using namespace std;

		string nd1 =" Nhap vao du lieu de xu li .";
		string nd2 =" Chon de bat dau chuong trinh .";
		string nd3 =" Nhap du lieu tu file .";
		
		string nd7 =" Giai thua cua n :n! ";
		string nd8 =" Cong 2 so a va b : a+b";
		string nd9 =" Tru 2 so a va b : a - b";
		string nd10 =" Nhan 2 so a va b : a x b";
		string nd11 =" Chia so b cho a : a / b";
		string nd12 = " Chia lay nguyen a va b : a div b";
		string nd13 = " Chia lay du a va b : a mod b";
		string nd14 = " Luy thua : a^b ";
		string nd15 = " Thay doi 2 so a va b ";
		string nd16 = " Thay doi n";
		string nd17= "Tro lai menu ";



void ShowCur(bool CursorVisibility)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursor = { 1, CursorVisibility };
	SetConsoleCursorInfo(handle, &cursor);
}

 //Ham thay doi kich co khung cmd voi tham so truyen vao la chieu rong , chieu cao
void resizeConsole(int  width, int height)
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console,r.left,r.top,width,height,TRUE);
}

// Ham to mau
void textcolor(int x)
{
	HANDLE mau;
	mau = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau,x);
}

// Ham dich chuyen con tro den toa do x,y
void gotoxy(int x, int y)
{
	HANDLE hConsoleOutput;
	COORD Cursor_an_Pos = {x-1,y-1};
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput, Cursor_an_Pos);
}

void gotoxy1(int x, int y,int mau)
{
	textcolor(mau);
	HANDLE hConsoleOutput;
	COORD Cursor_an_Pos = {x-1,y-1};
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput, Cursor_an_Pos);
}
// Ham xoa man hinh
void XoaManHinh()
{
	HANDLE hOut;
	COORD Position;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	Position.X = 0;
	Position.Y = 0;
	SetConsoleCursorPosition(hOut, Position);
}

// Ham lay thuc hien tu ban phim
void getkey()
{
	int x = 50;
    int y = 5;
    gotoxy(x, y);
    while (1)
	{
        if (GetAsyncKeyState(VK_LEFT) & 0x8000)  {  x--; }
        if (GetAsyncKeyState(VK_RIGHT) & 0x8000) {  x++; }
        if (GetAsyncKeyState(VK_UP) & 0x8000)    {  y--; }
        if (GetAsyncKeyState(VK_DOWN) & 0x8000)  {  y++; }
        
        system("cls");
        gotoxy(x, y);
        printf("0");
    }
}

// Ham dung khung 
void box(string ND,int x,int y,int width,int height,int vien_color,int background_color)
{
	// Mau nen
	textcolor(background_color);
	for(int iy=y+1;iy<y+height;iy++)
	{
		for(int ix=x+1;ix<x+width;ix++)
		{
			gotoxy(ix,iy);cout<<" ";
		}
	}
	
	//Mau khung vien
	textcolor(vien_color);
	if(height<=1 || width<=1) return;
	for(int ix=x;ix<=x+width;ix++)
	{
		gotoxy(ix,y);
		cout<<char(196);
		gotoxy(ix,y+height);
		cout<<char(196);
	}
	
	//Tao mau hinh khung
	for(int iy=y;iy<=y+height;iy++)
	{
		gotoxy(x,iy);
		cout<<char(179);
		gotoxy(x+width,iy);
		cout<<char(179);
	}
	gotoxy(x,y);				cout<<char(218);
	gotoxy(x+width,y+height);	cout<<char(217);
	gotoxy(x+width,y);			cout<<char(191);
	gotoxy(x,y+height);			cout<<char(192);
	
		
	//Mau chu	
	textcolor(7);
	int w = x+1;
	int h = y+1;
	gotoxy(w,h); cout<<ND;
}
void box1(string ND,int x,int y,int width,int height,int vien_color)
{
	//Mau khung vien
	textcolor(vien_color);
	if(height<=1 || width<=1) return;
	for(int ix=x;ix<=x+width;ix++)
	{
		gotoxy(ix,y);
		cout<<char(196);
		gotoxy(ix,y+height);
		cout<<char(196);
	}
	
	//Tao mau hinh khung
	for(int iy=y;iy<=y+height;iy++)
	{
		gotoxy(x,iy);
		cout<<char(179);
		gotoxy(x+width,iy);
		cout<<char(179);
	}
	gotoxy(x,y);				cout<<char(218);
	gotoxy(x+width,y+height);	cout<<char(217);
	gotoxy(x+width,y);			cout<<char(191);
	gotoxy(x,y+height);			cout<<char(192);
	
		
	//Mau chu
	textcolor(7);
	int w = x+1;
	int h = y+1;
	gotoxy(w,h); cout<<ND;
}

//Tao box menu
void n_box(int x,int y,int width,int height,int vien_color,int background_color,int sl,string ND1,string ND2,string ND3)
{
	box("\t\t   MENU",x,y,width,height,vien_color,background_color);
	
		box(ND1,x,y+(2),width,height,vien_color,0);
		box(ND2,x,y+(4),width,height,vien_color,0);
		box(ND3,x,y+(6),width,height,vien_color,0);
		
	
	for(int i=1;i<sl;i++)	
	{
		gotoxy(x,y+(i*2));cout<<char(195);
		gotoxy(x+width,y+(i*2));cout<<char(180);
	}
}
// Tao box con
void n_box1(int x,int y,int width,int height,int vien_color,int background_color,int sl,string nd7,string nd8,string nd9,string nd10,string nd11,string nd12,string nd13,string nd14,string nd15,string nd16,string nd17)
{
	
	
		box(nd7,x,y+(0),width,height,vien_color,0);
		box(nd8,x,y+(2),width,height,vien_color,0);
		box(nd9,x,y+(4),width,height,vien_color,0);
		box(nd10,x,y+(6),width,height,vien_color,0);
		box(nd11,x,y+(8),width,height,vien_color,0);
		box(nd12,x,y+(10),width,height,vien_color,0);
		box(nd13,x,y+(12),width,height,vien_color,0);
		box(nd14,x,y+(14),width,height,vien_color,0);
		box(nd15,x,y+(16),width,height,vien_color,0);
		box(nd16,x,y+(18),width,height,vien_color,0);
		box(nd17,x,y+(20),width,height,vien_color,0);
		
	
	for(int i=1;i<sl;i++)	
	{
		gotoxy(x,y+(i*2));cout<<char(195);
		gotoxy(x+width,y+(i*2));cout<<char(180);
	}
}
// Con chuot
void thanhsang(int x,int y,int w,int h,int color)
{
	textcolor(color);
	for(int iy=y+1;iy<y+h;iy++)
	{
		for(int ix=x+w-3;ix>x+w-5;ix--)
		{
			gotoxy(ix,iy);cout<<"<--";
		}
	}
}

//Box tieu de
void b_ox()
{
	box("Chuong trinh ket qua cua PBL 2\n\t\tDe tai 3 : XU LI SO LON\n\t\tTen SV1 : Nguyen Van Nhat\n\t\tTen SV2 :Truong Ngoc Son\n\t\tNguoi huong dan : Nguyen Van Nguyen",10,1,45,7,7,7);
	box1("",10,1,45,7,7);
}

//Tao box nho
void chuyenkq(string x)
{
	gotoxy(80,12);
	for(int i=0;i<=89;i++)
	{
		cout<<x[i];
	}
	gotoxy(80,12);
	for(int i=90;i<=179;i++)
	{
		cout<<x[i];
	}	
}
string reverse(string a)	
{
	string b;
	int n=a.size();
	for(int i=0;i<n;i++)
	{
		b[i]=a[n-i-1];
	}
	return b;
}	
int check(string a,int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i] < 48 || a[i] > 57)
		return 0;
	}
	return 1;
}

void light()
{
	n_box(5,9,40,2,11,0,3,nd1,nd2,nd3);
	thanhsang(5,9,40,2,0);
}
void resert_win(int x ,int y ,int w ,int h ,int vien_color ,int background_color,int sl ,string nd7,string nd8,string nd9,string nd10,string nd11,string nd12,string nd13, string nd14,string nd15,string nd16,string nd17,int key)	
{
	n_box1(x ,y ,w ,h ,vien_color ,background_color,sl ,nd7,nd8,nd9,nd10,nd11,nd12,nd13,nd14,nd15,nd16,nd17);
	thanhsang(x,y,w,h,background_color);
	if(key==1)
		light();
}	

void write(int x,int y,string a)
{
	gotoxy(x,y);cout<<a;
}

void box_ab(string a,string b)	
{
	system("cls");
	box("",70,9,100,30,4,0);
	box("",5,1,165,4,4,0);
	box("",5,5,165,4,4,0);
	write(10,3,"A = ");cout<<a;
	write(10,7,"B = ");cout<<b;
	}	
		
