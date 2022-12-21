#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <vector>
#include <Windows.h>
#include <conio.h>
using namespace std;
void gotoxy12(int x, int y)
{
	
	HANDLE hConsoleOutput;
	COORD Cursor_an_Pos = {x-1,y-1};
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput, Cursor_an_Pos);
}
void inkq(int x,int y,long long a[],int i,int j)
{
	gotoxy12(x,y);
	for(int t=i;t<=j;t++)
	{
		cout<<a[t];
	}
}

void addkq(int key,long long b[])
{
	int line=1;
	
	while(line<=key)
	{
	
	if(line==1)	inkq(75,12,b,0,89);
	else if(line==2)	inkq(75,13,b,90,179);
	else if(line==3)	inkq(75,14,b,180,269);
	else if(line==4)	inkq(75,15,b,270,359);
	else if(line==5)	inkq(75,16,b,360,449);
	else if(line==6)	inkq(75,17,b,450,539);
	else if(line==7)	inkq(75,18,b,540,629);
	else if(line==8)	inkq(75,19,b,630,719);
	else if(line==9)	inkq(75,20,b,720,809);
	else if(line==10)	inkq(75,21,b,810,899);
		
	else if(line==11)	inkq(75,22,b,900,989);
	else if(line==12)	inkq(75,23,b,990,1079);	
	else if(line==13)	inkq(75,24,b,1080,1169);
	else if(line==14)	inkq(75,25,b,1170,1259);
	else if(line==15)	inkq(75,26,b,1260,1349);	
	else if(line==16)	inkq(75,27,b,1350,1439);
	else if(line==17)	inkq(75,28,b,1440,1529);
	else if(line==18)	inkq(75,29,b,1530,1619);
	else if(line==19)	inkq(75,30,b,1620,1709);
	else if(line==20)	inkq(75,31,b,1710,1799);
		
	else if(line==21)	inkq(75,32,b,1800,1889);
	else if(line==22)	inkq(75,33,b,1890,1979);
	else if(line==23)	inkq(75,34,b,1980,2069);
	else if(line==24)	inkq(75,35,b,2070,2159);
	else if(line==25)	inkq(75,36,b,2160,2249);
	else if(line==26)	inkq(75,37,b,2250,2339);
	else if(line==27)	inkq(75,38,b,2340,2429);
	else if(line==28)	inkq(75,39,b,2430,2519);
	else if(line==29)	inkq(75,40,b,2520,2609);
	else if(line==30)	inkq(75,41,b,2610,2699);
		
	else if(line==31)	inkq(75,42,b,2700,2789);
	else if(line==32)	inkq(75,43,b,2790,2879);
	else if(line==33)	inkq(75,44,b,2880,2969);
	else if(line==34)	inkq(75,45,b,2970,3059);
	else if(line==35)	inkq(75,46,b,3060,3149);
	else if(line==36)	inkq(75,47,b,3150,3239);
	else if(line==37)	inkq(75,48,b,3240,3329);
	else if(line==38)	inkq(75,49,b,3330,3419);
	else if(line==39)	inkq(75,50,b,3420,3509);
	else if(line==40)	inkq(75,51,b,3510,3599);
		
	else if(line==41)	inkq(75,52,b,3600,3689);
	else if(line==42)	inkq(75,53,b,3690,3779);
	else if(line==43)	inkq(75,54,b,3780,3869);
	else if(line==44)	inkq(75,55,b,3870,3959);
	else if(line==45)	inkq(75,56,b,3960,4049);
	else if(line==45)	inkq(75,57,b,4050,4139);
	else if(line==47)	inkq(75,58,b,4140,4229);
	else if(line==48)	inkq(75,59,b,4230,4319);
	else if(line==49)	inkq(75,60,b,4320,4409);
	else if(line==50)	inkq(75,61,b,4410,4499);
		
	else if(line==51)	inkq(75,62,b,4500,4589);
	else if(line==52)	inkq(75,63,b,4590,4679);
	else if(line==53)	inkq(75,64,b,4680,4769);
	else if(line==54)	inkq(75,65,b,4770,4859);
	else if(line==55)	inkq(75,66,b,4860,4949);
	else if(line==56)	inkq(75,67,b,4950,5039);
	else if(line==57)	inkq(75,68,b,5040,5129);
	else if(line==58)	inkq(75,69,b,5130,5219);
	else if(line==59)	inkq(75,70,b,5220,5309);
	else if(line==60)	inkq(75,71,b,5310,5399);
	
	line++;
	}
	
		
}

void kqint(long long b[],int m)
{
	if(m<=90)
		{
		inkq(75,12,b,0,m-1);
		}
    else if(m>90 && m<=180)
    {
 		addkq(1,b);
		inkq(75,13,b,90,m-1);
	}
	else if(m>180 && m<=270)
    {
 		addkq(2,b);
		inkq(75,14,b,180,m-1);
	}
	else if(m>270 && m<=360)
    {
 		addkq(3,b);
		inkq(75,15,b,270,m-1);
	}
	else if(m>360 && m<=450)
    {
 		addkq(4,b);
		inkq(75,16,b,360,m-1);	
	}
	else if(m>450 && m<=540)
    {
 		addkq(5,b);
		inkq(75,17,b,450,m-1);		
	}
	else if(m>540 && m<=630)
    {
 		addkq(6,b);
		inkq(75,18,b,540,m-1);		
	}
	else if(m>630 && m<=720)
    {
 		addkq(7,b);
		inkq(75,19,b,630,m-1);		
	}
	else if(m>720 && m<=810)
    {
 		addkq(8,b);
		inkq(75,20,b,720,m-1);				
	}
	else if(m>810 && m<=900)
    {
 		addkq(9,b);
		inkq(75,21,b,810,m-1);						
	}
	else if(m>900 && m<=990)
    {
 		addkq(10,b);
		inkq(75,22,b,900,m-1);						
	}
	else if(m>990 && m<=1080)
    {
 		addkq(11,b);
		inkq(75,23,b,990,m-1);						
	}
	else if(m>1080 && m<=1170)
    {
 		addkq(12,b);
		inkq(75,24,b,1080,m-1);						
	}
	else if(m>1170 && m<=1260)
    {
 		addkq(13,b);
		inkq(75,25,b,1170,m-1);						
	}
	else if(m>1260 && m<=1350)
    {
 		addkq(14,b);
		inkq(75,26,b,1260,m-1);						
	}
	else if(m>1350 && m<=1440)
    {
 		addkq(15,b);	
		inkq(75,27,b,1350,m-1);					
	}
	else if(m>1440 && m<=1530)
    {
 		addkq(16,b);
		inkq(75,28,b,1440,m-1);					
	}
	else if(m>1530 && m<=1620)
    {
 		addkq(17,b);
		inkq(75,29,b,1530,m-1);					
	}
	else if(m>1620 && m<=1710)
    {
 		addkq(18,b);
		inkq(75,30,b,1620,m-1);				
	}
	else if(m>1710 && m<=1800)
    {
 		addkq(19,b);
		inkq(75,31,b,1710,m-1);				
	}
	else if(m>1800 && m<=1890)
    {
 		addkq(20,b);
		inkq(75,32,b,1800,m-1);			
	}
	else if(m>1890 && m<=1980)
    {
 		addkq(21,b);
		inkq(75,33,b,1890,m-1);			
	}
	else if(m>1980 && m<=2070)
    {
 		addkq(22,b);
		inkq(75,34,b,1980,m-1);		
	}
	else if(m>2070 && m<=2160)
    {
 		addkq(23,b);
		inkq(75,35,b,2070,m-1);	
	}
	else if(m>2160 && m<=2250)
    {
 		addkq(24,b);
		inkq(75,36,b,2160,m-1);	
	}
	else if(m>2250 && m<=2340)
    {
	
 		addkq(25,b);
		inkq(75,37,b,2250,m-1);
	}
	else if(m>2340 && m<=2430)
    {
 		addkq(26,b);
		inkq(75,38,b,2340,m-1);
	}
	else if(m>2430 && m<=2520)
    {
 		addkq(27,b);
		inkq(75,39,b,2430,m-1);
	}
	else if(m>2520 && m<=2610)
    {
 		addkq(28,b);
		inkq(75,40,b,2520,m-1);
	}
	else if(m>2610 && m<=2700)
    {
 		addkq(29,b);
		inkq(75,41,b,2610,m-1);
	}
	else if(m>2700 && m<=2790)
    {
 		addkq(30,b);
		inkq(75,42,b,2700,m-1);
	}
	else if(m>2790 && m<=2880)
    {
 		addkq(31,b);
		inkq(75,43,b,2790,m-1);
	}
	else if(m>2880 && m<=2970)
    {
 		addkq(32,b);
		inkq(75,44,b,2880,m-1);
	}
	else if(m>2970 && m<=3060)
    {
 		addkq(33,b);
		inkq(75,45,b,2970,m-1);
	}
	else if(m>3060 && m<=3150)
    {
 		addkq(34,b);
		inkq(75,46,b,3060,m-1);
	}
}

