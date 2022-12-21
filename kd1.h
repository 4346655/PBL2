#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <vector>
#include <Windows.h>
#include <conio.h>
using namespace std;
void gotoxy10(int x, int y)
{
	
	HANDLE hConsoleOutput;
	COORD Cursor_an_Pos = {x-1,y-1};
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput, Cursor_an_Pos);
}
void inkqs(int x,int y,string a,int i,int j)
{
	gotoxy10(x,y);
	for(int t=i;t<=j;t++)
	{
		cout<<a[t];
	}
}

void addkqs(int key,string b)
{
	int line=1;
	
	while(line<=key)
	{
	
	if(line==1)	inkqs(75,12,b,0,89);
	else if(line==2)	inkqs(75,13,b,90,179);
	else if(line==3)	inkqs(75,14,b,180,269);
	else if(line==4)	inkqs(75,15,b,270,359);
	else if(line==5)	inkqs(75,16,b,360,449);
	else if(line==6)	inkqs(75,17,b,450,539);
	else if(line==7)	inkqs(75,18,b,540,629);
	else if(line==8)	inkqs(75,19,b,630,719);
	else if(line==9)	inkqs(75,20,b,720,809);
	else if(line==10)	inkqs(75,21,b,810,899);
		
	else if(line==11)	inkqs(75,22,b,900,989);
	else if(line==12)	inkqs(75,23,b,990,1079);	
	else if(line==13)	inkqs(75,24,b,1080,1169);
	else if(line==14)	inkqs(75,25,b,1170,1259);
	else if(line==15)	inkqs(75,26,b,1260,1349);	
	else if(line==16)	inkqs(75,27,b,1350,1439);
	else if(line==17)	inkqs(75,28,b,1440,1529);
	else if(line==18)	inkqs(75,29,b,1530,1619);
	else if(line==19)	inkqs(75,30,b,1620,1709);
	else if(line==20)	inkqs(75,31,b,1710,1799);
		
	else if(line==21)	inkqs(75,32,b,1800,1889);
	else if(line==22)	inkqs(75,33,b,1890,1979);
	else if(line==23)	inkqs(75,34,b,1980,2069);
	else if(line==24)	inkqs(75,35,b,2070,2159);
	else if(line==25)	inkqs(75,36,b,2160,2249);
	else if(line==26)	inkqs(75,37,b,2250,2339);
	else if(line==27)	inkqs(75,38,b,2340,2429);
	else if(line==28)	inkqs(75,39,b,2430,2519);
	else if(line==29)	inkqs(75,40,b,2520,2609);
	else if(line==30)	inkqs(75,41,b,2610,2699);
		
	else if(line==31)	inkqs(75,42,b,2700,2789);
	else if(line==32)	inkqs(75,43,b,2790,2879);
	else if(line==33)	inkqs(75,44,b,2880,2969);
	else if(line==34)	inkqs(75,45,b,2970,3059);
	else if(line==35)	inkqs(75,46,b,3060,3149);
	else if(line==36)	inkqs(75,47,b,3150,3239);
	else if(line==37)	inkqs(75,48,b,3240,3329);
	else if(line==38)	inkqs(75,49,b,3330,3419);
	else if(line==39)	inkqs(75,50,b,3420,3509);
	else if(line==40)	inkqs(75,51,b,3510,3599);
		
	else if(line==41)	inkqs(75,52,b,3600,3689);
	else if(line==42)	inkqs(75,53,b,3690,3779);
	else if(line==43)	inkqs(75,54,b,3780,3869);
	else if(line==44)	inkqs(75,55,b,3870,3959);
	else if(line==45)	inkqs(75,56,b,3960,4049);
	else if(line==45)	inkqs(75,57,b,4050,4139);
	else if(line==47)	inkqs(75,58,b,4140,4229);
	else if(line==48)	inkqs(75,59,b,4230,4319);
	else if(line==49)	inkqs(75,60,b,4320,4409);
	else if(line==50)	inkqs(75,61,b,4410,4499);
		
	else if(line==51)	inkqs(75,62,b,4500,4589);
	else if(line==52)	inkqs(75,63,b,4590,4679);
	else if(line==53)	inkqs(75,64,b,4680,4769);
	else if(line==54)	inkqs(75,65,b,4770,4859);
	else if(line==55)	inkqs(75,66,b,4860,4949);
	else if(line==56)	inkqs(75,67,b,4950,5039);
	else if(line==57)	inkqs(75,68,b,5040,5129);
	else if(line==58)	inkqs(75,69,b,5130,5219);
	else if(line==59)	inkqs(75,70,b,5220,5309);
	else if(line==60)	inkqs(75,71,b,5310,5399);
	
	line++;
	}
	
		
}

void kqstring(string b,int m)
{
	if(m<=90)
		{
		inkqs(75,12,b,0,m-1);
		}
    else if(m>90 && m<=180)
    {
 		addkqs(1,b);
		inkqs(75,13,b,90,m-1);
	}
	else if(m>180 && m<=270)
    {
 		addkqs(2,b);
		inkqs(75,14,b,180,m-1);
	}
	else if(m>270 && m<=360)
    {
 		addkqs(3,b);
		inkqs(75,15,b,270,m-1);
	}
	else if(m>360 && m<=450)
    {
 		addkqs(4,b);
		inkqs(75,16,b,360,m-1);	
	}
	else if(m>450 && m<=540)
    {
 		addkqs(5,b);
		inkqs(75,17,b,450,m-1);		
	}
	else if(m>540 && m<=630)
    {
 		addkqs(6,b);
		inkqs(75,18,b,540,m-1);		
	}
	else if(m>630 && m<=720)
    {
 		addkqs(7,b);
		inkqs(75,19,b,630,m-1);		
	}
	else if(m>720 && m<=810)
    {
 		addkqs(8,b);
		inkqs(75,20,b,720,m-1);				
	}
	else if(m>810 && m<=900)
    {
 		addkqs(9,b);
		inkqs(75,21,b,810,m-1);						
	}
	else if(m>900 && m<=990)
    {
 		addkqs(10,b);
		inkqs(75,22,b,900,m-1);						
	}
	else if(m>990 && m<=1080)
    {
 		addkqs(11,b);
		inkqs(75,23,b,990,m-1);						
	}
	else if(m>1080 && m<=1170)
    {
 		addkqs(12,b);
		inkqs(75,24,b,1080,m-1);						
	}
	else if(m>1170 && m<=1260)
    {
 		addkqs(13,b);
		inkqs(75,25,b,1170,m-1);						
	}
	else if(m>1260 && m<=1350)
    {
 		addkqs(14,b);
		inkqs(75,26,b,1260,m-1);						
	}
	else if(m>1350 && m<=1440)
    {
 		addkqs(15,b);	
		inkqs(75,27,b,1350,m-1);					
	}
	else if(m>1440 && m<=1530)
    {
 		addkqs(16,b);
		inkqs(75,28,b,1440,m-1);					
	}
	else if(m>1530 && m<=1620)
    {
 		addkqs(17,b);
		inkqs(75,29,b,1530,m-1);					
	}
	else if(m>1620 && m<=1710)
    {
 		addkqs(18,b);
		inkqs(75,30,b,1620,m-1);				
	}
	else if(m>1710 && m<=1800)
    {
 		addkqs(19,b);
		inkqs(75,31,b,1710,m-1);				
	}
	else if(m>1800 && m<=1890)
    {
 		addkqs(20,b);
		inkqs(75,32,b,1800,m-1);			
	}
	else if(m>1890 && m<=1980)
    {
 		addkqs(21,b);
		inkqs(75,33,b,1890,m-1);			
	}
	else if(m>1980 && m<=2070)
    {
 		addkqs(22,b);
		inkqs(75,34,b,1980,m-1);		
	}
	else if(m>2070 && m<=2160)
    {
 		addkqs(23,b);
		inkqs(75,35,b,2070,m-1);	
	}
	else if(m>2160 && m<=2250)
    {
 		addkqs(24,b);
		inkqs(75,36,b,2160,m-1);	
	}
	else if(m>2250 && m<=2340)
    {
	
 		addkqs(25,b);
		inkqs(75,37,b,2250,m-1);
	}
	else if(m>2340 && m<=2430)
    {
 		addkqs(26,b);
		inkqs(75,38,b,2340,m-1);
	}
	else if(m>2430 && m<=2520)
    {
 		addkqs(27,b);
		inkqs(75,39,b,2430,m-1);
	}
	else if(m>2520 && m<=2610)
    {
 		addkqs(28,b);
		inkqs(75,40,b,2520,m-1);
	}
	else if(m>2610 && m<=2700)
    {
 		addkqs(29,b);
		inkqs(75,41,b,2610,m-1);
	}
	else if(m>2700 && m<=2790)
    {
 		addkqs(30,b);
		inkqs(75,42,b,2700,m-1);
	}
	else if(m>2790 && m<=2880)
    {
 		addkqs(31,b);
		inkqs(75,43,b,2790,m-1);
	}
	else if(m>2880 && m<=2970)
    {
 		addkqs(32,b);
		inkqs(75,44,b,2880,m-1);
	}
	else if(m>2970 && m<=3060)
    {
 		addkqs(33,b);
		inkqs(75,45,b,2970,m-1);
	}
	else if(m>3060 && m<=3150)
    {
 		addkqs(34,b);
		inkqs(75,46,b,3060,m-1);
	}
}

