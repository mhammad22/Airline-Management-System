#include<iostream>
#include<cmath>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
#include<string.h>
#include"colour.h";
using namespace std;
void menu();
void aeroplane();
char reserved(char arr[60][100]);
int flightlocal(int n, int z,int p);
int flightint(int n, int z,int q);
void flightroutes();
void aeroplane();
void restore(char a[60][100], int i)
{
	char s[100] = "RESERVED";
	if (strcmp(a[i], s) == 0)
	{
		strcpy_s(a[i], "AVAILABLE");
	}
}
void ticketlocal(int z, int ref, int ticket, char passport[100], char lname[100], char fname[100], char add[100], int d, char t2, int m, char t1, int y, char city1[100], char city2[100], double seniorprice, char str3[100], int t, int choice)
{
	ofstream fout3("ticketlocal.txt", ios::app);
	cout << "\n\n\n\n                                 +++ YOUR ONLINE BOOKED AIRLINE TICKET : +++       " << endl;
	Sleep(500);
	fout3 << "                                        +++ YOUR ONLINE BOOKED AIRLINE TICKET : +++       " << endl;
	cout << "                                                  *E-TICKETING*                           \n\n" << endl;
	Sleep(500);
	fout3 << "                                                  *E-TICKETING*                           \n\n" << endl;
	cout << "TICKET NO =  " << z << "                                                  " << "                 REFERENCE NUMBER = " << ref << endl;
	Sleep(500);
	fout3 << "TICKET NO = " << z << "                                                 " << "                 REFERENCE NUMBER = " << ref << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
	Sleep(500);
	fout3 << "-----------------------------------------------------------------------------------------------------------------" << endl;
	cout << "RESERVATION NUMBER =" << ticket << "                                                      PASSPORT NO = " << passport << endl;
	Sleep(500);
	fout3 << "RESERVATION NUMBER =" << ticket << "                                                      PASSPORT NO = " << passport << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
	Sleep(500);
	fout3 << "-----------------------------------------------------------------------------------------------------------------" << endl;
	cout << "PASSENGER INFORMATION : " << endl << endl;
	Sleep(500);
	fout3 << "PASSENGER INFORMATION : " << endl << endl;
	cout << "NAME : " << lname << "/" << fname << endl;
	Sleep(500);
	fout3 << "NAME : " << lname << "/" << fname << endl;
	Sleep(500);
	cout << "ADDRESS : " << add << endl;
	Sleep(500);
	fout3 << "ADDRESS : " << add << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
	Sleep(500);
	fout3 << "-----------------------------------------------------------------------------------------------------------------" << endl;
	cout << "FLIGHT INFORMATION : " << endl << endl;
	Sleep(500);
	fout3 << "FLIGHT INFORMATION : " << endl << endl;
	cout << "DATE =" << d << t1 << m << t2 << y << endl;
	Sleep(500);
	fout3 << "DATE =" << d << t1 << m << t2 << y << endl;
	cout << "FLIGHT NAME = BOEING 798" << endl;
	Sleep(500);
	fout3 << "FLIGHT NAME = BOEING 798" << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
	Sleep(500);
	fout3 << "-----------------------------------------------------------------------------------------------------------------" << endl;
	cout << "FLIGHT ROUTE : " << endl << endl;
	Sleep(500);
	fout3 << "FLIGHT ROUTE : " << endl << endl;
	cout << "DEPART : " << city1 << endl;
	Sleep(500);
	fout3 << "DEPART : " << city1 << endl;
	cout << "ARRIVAL : " << city2 << endl;
	Sleep(500);
	fout3 << "ARRIVAL : " << city2 << endl;
	cout << "PRICE : " << seniorprice << "$" << endl;
	Sleep(500);
	fout3 << "PRICE : " << seniorprice << "$" << endl;
	Sleep(500);
	cout << "LIMITED BAGGAGE LOAD ALOWED IN FLIGHT " << endl;
	fout3 << "LIMITED BAGGAGE LOAD ALOWED IN FLIGHT " << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
	Sleep(500);
	fout3 << "-----------------------------------------------------------------------------------------------------------------" << endl;
	cout << "TICKET INFORMATION : " << endl << endl;
	Sleep(500);
	fout3 << "TICKET INFORMATION : " << endl << endl;
	cout << "CLASS = ";
	Sleep(500);
	fout3 << "CLASS = ";
	if (choice == 1)
	{
		cout << " BUSSINESS CLASS " << endl;
		Sleep(500);
		fout3 << " BUSSINESS CLASS " << endl;
	}
	if (choice == 2)
	{
		cout << " ECONOMY CLASS " << endl;
		Sleep(500);
		fout3 << " ECONOMY CLASS " << endl;
	}
	cout << "STATUS = " << str3 << endl;
	Sleep(500);
	fout3 << "STATUS = " << str3 << endl;
	cout << "TIME OF FLIGHT = " << t << " PM " << endl;
	Sleep(500);
	fout3 << "TIME OF FLIGHT = " << t << " PM " << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
	Sleep(500);
	fout3 << "-----------------------------------------------------------------------------------------------------------------" << endl;
	cout << "                                           GOODBYE HAVE A SAFE JOURNEY                                           " << endl;
	Sleep(500);
	fout3 << "                                           GOODBYE HAVE A SAFE JOURNEY                                           " << endl;
}
void ticketlocal1(int z, int ref, int ticket, char passport[100], char lname[100], char fname[100], char add[100], int d, char t2, int m, char t1, int y, char city1[100], char city2[100], double seniorprice, char str3[100], int t, int choice)
{
	ofstream fout3("ticketlocal.txt");
	cout << "\n\n\n\n                                 +++YOUR ONLINE BOOKED AIRLINE TICKET : +++       " << endl;
	Sleep(500);
	fout3 << "                                        +++YOUR ONLINE BOOKED AIRLINE TICKET : +++       " << endl;
	cout << "                                                  *E-TICKETING*                           \n\n" << endl;
	Sleep(500);
	fout3 << "                                                  *E-TICKETING*                           \n\n" << endl;
	cout << "TICKET NO =  " << z << "                                                  " << "                 REFERENCE NUMBER = " << ref << endl;
	Sleep(500);
	fout3 << "TICKET NO = " << z << "                                                 " << "                 REFERENCE NUMBER = " << ref << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
	Sleep(500);
	fout3 << "-----------------------------------------------------------------------------------------------------------------" << endl;
	cout << "RESERVATION NUMBER =" << ticket << "                                                      PASSPORT NO = " << passport << endl;
	Sleep(500);
	fout3 << "RESERVATION NUMBER =" << ticket << "                                                      PASSPORT NO = " << passport << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
	Sleep(500);
	fout3 << "-----------------------------------------------------------------------------------------------------------------" << endl;
	cout << "PASSENGER INFORMATION : " << endl << endl;
	Sleep(500);
	fout3 << "PASSENGER INFORMATION : " << endl << endl;
	cout << "NAME : " << lname << "/" << fname << endl;
	Sleep(500);
	fout3 << "NAME : " << lname << "/" << fname << endl;
	cout << "ADDRESS : " << add << endl;
	Sleep(500);
	fout3 << "ADDRESS : " << add << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
	Sleep(500);
	fout3 << "-----------------------------------------------------------------------------------------------------------------" << endl;
	cout << "FLIGHT INFORMATION : " << endl << endl;
	Sleep(500);
	fout3 << "FLIGHT INFORMATION : " << endl << endl;
	cout << "DATE =" << d << t1 << m << t2 << y << endl;
	Sleep(500);
	fout3 << "DATE =" << d << t1 << m << t2 << y << endl;
	cout << "FLIGHT NAME = BOEING 798" << endl;
	Sleep(500);
	fout3 << "FLIGHT NAME = BOEING 798" << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
	Sleep(500);
	fout3 << "-----------------------------------------------------------------------------------------------------------------" << endl;
	cout << "FLIGHT ROUTE : " << endl << endl;
	Sleep(500);
	fout3 << "FLIGHT ROUTE : " << endl << endl;
	cout << "DEPART : " << city1 << endl;
	Sleep(500);
	fout3 << "DEPART : " << city1 << endl;
	cout << "ARRIVAL : " << city2 << endl;
	Sleep(500);
	fout3 << "ARRIVAL : " << city2 << endl;
	cout << "PRICE : " << seniorprice << "$" << endl;
	Sleep(500);
	fout3 << "PRICE : " << seniorprice << "$" << endl;
	cout << "LIMITED BAGGAGE LOAD ALOWED IN FLIGHT " << endl;
	Sleep(500);
	fout3 << "LIMITED BAGGAGE LOAD ALOWED IN FLIGHT " << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
	Sleep(500);
	fout3 << "-----------------------------------------------------------------------------------------------------------------" << endl;
	cout << "TICKET INFORMATION : " << endl << endl;
	Sleep(500);
	fout3 << "TICKET INFORMATION : " << endl << endl;
	cout << "CLASS = ";
	Sleep(500);
	fout3 << "CLASS = ";
	if (choice == 1)
	{
		cout << " BUSSINESS CLASS " << endl;
		Sleep(500);
		fout3 << " BUSSINESS CLASS " << endl;
	}
	if (choice == 2)
	{
		cout << " ECONOMY CLASS " << endl;
		Sleep(500);
		fout3 << " ECONOMY CLASS " << endl;
	}
	cout << "STATUS = " << str3 << endl;
	Sleep(500);
	fout3 << "STATUS = " << str3 << endl;
	cout << "TIME OF FLIGHT = " << t << " PM " << endl;
	Sleep(500);
	fout3 << "TIME OF FLIGHT = " << t << " PM " << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
	Sleep(500);
	fout3 << "-----------------------------------------------------------------------------------------------------------------" << endl;
	cout << "                                           GOODBYE HAVE A SAFE JOURNEY                                           " << endl;
	Sleep(500);
	fout3 << "                                           GOODBYE HAVE A SAFE JOURNEY                                           " << endl;
}
void ticketint(int z, int ref1, int ticket1, char passport1[100], char lname1[100], char fname1[100], char add1[100], int d, char t3, int m, char t4, int y, char city3[100], char city4[100], double seniorprice1, char str1[100], int t0, int choice1)
{
	ofstream fout4("ticketint.txt", ios::app);
	cout << "\n\n\n\n                                 +++YOUR ONLINE BOOKED AIRLINE TICKET : +++       " << endl;
	Sleep(500);
	fout4 << "                                        +++YOUR ONLINE BOOKED AIRLINE TICKET : +++       " << endl;
	cout << "                                                  *E-TICKETING*                           \n\n" << endl;
	Sleep(500);
	fout4 << "                                                  *E-TICKETING*                           \n\n" << endl;
	cout << "TICKET NO =  " << z << "                                             " << "                 REFERENCE NUMBER =  " << ref1 << endl;
	Sleep(500);
	fout4 << "TICKET NO =  " << z << "                                             " << "                 REFERENCE NUMBER =  " << ref1 << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
	Sleep(500);
	fout4 << "-----------------------------------------------------------------------------------------------------------------" << endl;
	cout << "RESERVATION NUMBER =" << ticket1 << "                                                      PASSPORT NO = " << passport1 << endl;
	Sleep(500);
	fout4 << "RESERVATION NUMBER =" << ticket1 << "                                                      PASSPORT NO = " << passport1 << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
	Sleep(500);
	fout4 << "-----------------------------------------------------------------------------------------------------------------" << endl;
	cout << "PASSENGER INFORMATION : " << endl << endl;
	Sleep(500);
	fout4 << "PASSENGER INFORMATION : " << endl << endl;
	cout << "NAME : " << lname1 << "/" << fname1 << endl;
	fout4 << "NAME : " << lname1 << "/" << fname1 << endl;
	Sleep(500);
	cout << "ADDRESS : " << add1 << endl;
	fout4 << "ADDRESS : " << add1 << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
	Sleep(500);
	fout4 << "-----------------------------------------------------------------------------------------------------------------" << endl;
	cout << "FLIGHT INFORMATION : " << endl << endl;
	Sleep(500);
	fout4 << "FLIGHT INFORMATION : " << endl << endl;
	cout << "DATE =" << d << t3 << m << t4 << y << endl;
	Sleep(500);
	fout4 << "DATE =" << d << t3 << m << t4 << y << endl;
	cout << "FLIGHT NAME = BOEING 798" << endl;
	Sleep(500);
	fout4 << "FLIGHT NAME = BOEING 798" << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
	Sleep(500);
	fout4 << "-----------------------------------------------------------------------------------------------------------------" << endl;
	cout << "FLIGHT ROUTE : " << endl << endl;
	Sleep(500);
	fout4 << "FLIGHT ROUTE : " << endl << endl;
	cout << "DEPART : " << city3 << endl;
	Sleep(500);
	fout4 << "DEPART : " << city3 << endl;
	cout << "ARRIVAL : " << city4 << endl;
	Sleep(500);
	fout4 << "ARRIVAL : " << city4 << endl;
	cout << "PRICE : " << seniorprice1 << "$" << endl;
	Sleep(500);
	fout4 << "PRICE : " << seniorprice1 << "$" << endl;
	cout << "LIMITED BAGGAGE LOAD ALOWED IN FLIGHT " << endl;
	Sleep(500);
	fout4 << "LIMITED BAGGAGE LOAD ALOWED IN FLIGHT " << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
	Sleep(500);
	fout4 << "-----------------------------------------------------------------------------------------------------------------" << endl;
	cout << "TICKET INFORMATION : " << endl << endl;
	Sleep(500);
	fout4 << "TICKET INFORMATION : " << endl << endl;
	cout << "CLASS = ";
	Sleep(500);
	fout4 << "CLASS = ";
	if (choice1 == 1)
	{
		cout << " BUSSINESS CLASS " << endl;
		Sleep(500);
		fout4 << " BUSSINESS CLASS " << endl;
	}
	if (choice1 == 2)
	{
		cout << " ECONOMY CLASS " << endl;
		Sleep(500);
		fout4 << " ECONOMY CLASS " << endl;
	}
	cout << "STATUS =  " << str1 << endl;
	Sleep(500);
	fout4 << "STATUS =  " << str1 << endl;
	cout << "TIME OF FLIGHT = " << t0 << " PM " << endl;
	Sleep(500);
	fout4 << "TIME OF FLIGHT = " << t0 << " PM " << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
	Sleep(500);
	fout4 << "-----------------------------------------------------------------------------------------------------------------" << endl;
	cout << "                                           GOODBYE HAVE A SAFE JOURNEY                                           " << endl;
	Sleep(500);
	fout4 << "                                           GOODBYE HAVE A SAFE JOURNEY                                           " << endl;
}
void ticketint1(int z, int ref1, int ticket1, char passport1[100], char lname1[100], char fname1[100], char add1[100], int d, char t3, int m, char t4, int y, char city3[100], char city4[100], double seniorprice1, char str1[100], int t0, int choice1)
{
	ofstream fout4("ticketint.txt");
	cout << "\n\n\n\n                                 +++YOUR ONLINE BOOKED AIRLINE TICKET : +++       " << endl;
	Sleep(500);
	fout4 << "                                        +++YOUR ONLINE BOOKED AIRLINE TICKET : +++       " << endl;
	cout << "                                                  *E-TICKETING*                           \n\n" << endl;
	Sleep(500);
	fout4 << "                                                  *E-TICKETING*                           \n\n" << endl;
	cout << "TICKET NO =  " << z << "                                             " << "                 REFERENCE NUMBER =  " << ref1 << endl;
	Sleep(500);
	fout4 << "TICKET NO =  " << z << "                                             " << "                 REFERENCE NUMBER =  " << ref1 << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
	Sleep(500);
	fout4 << "-----------------------------------------------------------------------------------------------------------------" << endl;
	cout << "RESERVATION NUMBER =" << ticket1 << "                                                      PASSPORT NO = " << passport1 << endl;
	Sleep(500);
	fout4 << "RESERVATION NUMBER =" << ticket1 << "                                                      PASSPORT NO = " << passport1 << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
	Sleep(500);
	fout4 << "-----------------------------------------------------------------------------------------------------------------" << endl;
	cout << "PASSENGER INFORMATION : " << endl << endl;
	Sleep(500);
	fout4 << "PASSENGER INFORMATION : " << endl << endl;
	cout << "NAME : " << lname1 << "/" << fname1 << endl;
	Sleep(500);
	fout4 << "NAME : " << lname1 << "/" << fname1 << endl;
	cout << "ADDRESS : " << add1 << endl;
	Sleep(500);
	fout4 << "ADDRESS : " << add1 << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
	Sleep(500);
	fout4 << "-----------------------------------------------------------------------------------------------------------------" << endl;
	cout << "FLIGHT INFORMATION : " << endl << endl;
	Sleep(500);
	fout4 << "FLIGHT INFORMATION : " << endl << endl;
	cout << "DATE =" << d << t3 << m << t4 << y << endl;
	Sleep(500);
	fout4 << "DATE =" << d << t3 << m << t4 << y << endl;
	cout << "FLIGHT NAME = BOEING 798" << endl;
	Sleep(500);
	fout4 << "FLIGHT NAME = BOEING 798" << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
	Sleep(500);
	fout4 << "-----------------------------------------------------------------------------------------------------------------" << endl;
	cout << "FLIGHT ROUTE : " << endl << endl;
	Sleep(500);
	fout4 << "FLIGHT ROUTE : " << endl << endl;
	cout << "DEPART : " << city3 << endl;
	Sleep(500);
	fout4 << "DEPART : " << city3 << endl;
	cout << "ARRIVAL : " << city4 << endl;
	Sleep(500);
	fout4 << "ARRIVAL : " << city4 << endl;
	cout << "PRICE : " << seniorprice1 << "$" << endl;
	Sleep(500);
	fout4 << "PRICE : " << seniorprice1 << "$" << endl;
	cout << "LIMITED BAGGAGE LOAD ALOWED IN FLIGHT " << endl;
	Sleep(500);
	fout4 << "LIMITED BAGGAGE LOAD ALOWED IN FLIGHT " << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
	Sleep(500);
	fout4 << "-----------------------------------------------------------------------------------------------------------------" << endl;
	cout << "TICKET INFORMATION : " << endl << endl;
	Sleep(500);
	fout4 << "TICKET INFORMATION : " << endl << endl;
	cout << "CLASS = ";
	Sleep(500);
	fout4 << "CLASS = ";
	if (choice1 == 1)
	{
		cout << " BUSSINESS CLASS " << endl;
		Sleep(500);
		fout4 << " BUSSINESS CLASS " << endl;
	}
	if (choice1 == 2)
	{
		cout << " ECONOMY CLASS " << endl;
		Sleep(500);
		fout4 << " ECONOMY CLASS " << endl;
	}
	cout << "STATUS =  " << str1 << endl;
	Sleep(500);
	fout4 << "STATUS =  " << str1 << endl;
	cout << "TIME OF FLIGHT = " << t0 << " PM " << endl;
	Sleep(500);
	fout4 << "TIME OF FLIGHT = " << t0 << " PM " << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
	Sleep(500);
	fout4 << "-----------------------------------------------------------------------------------------------------------------" << endl;
	cout << "                                           GOODBYE HAVE A SAFE JOURNEY                                           " << endl;
	Sleep(500);
	fout4 << "                                           GOODBYE HAVE A SAFE JOURNEY                                           " << endl;
}
char reserved(char arr[60][100])
{
	char str[100] = "AVAILABLE";
	for (int i = 0; i < 60; i++)
	{
		strcpy_s(arr[i], str);
	}
	return 0;
}
char check(char arr[60][100], int i,int p)
{
	char str[100] = "AVAILABLE";
	char str1[100] = "RESERVED";
	if (p == 0)
	{
		for (int i = 0; i < 60; i++)
		{
			strcpy_s(arr[i], str);
		}
	}
	if ((strcmp(arr[i],str)==0))
	{
		strcpy_s(arr[i],str1);
		return 0;
	}
	else
	{
		strcpy_s(arr[i], str);
		return 1;
	}
}
int main()                                                                   //main function
{
	system("cls");
	aeroplane();
	system("color F9");
	cout << endl << endl << endl << endl;
	Sleep(500);
	cout << "\t" << "                    ****    WELCOME TO AIR RESERVATION SYSTEM  *****          " << "\t"<<endl;
	int n,p=0, z = 1,q=0;
	Sleep(3000);
	system("cls");
m:
	{
		menu();
	}
	cin >> n;
	if (n == 1)
	{
		flightlocal(n, z,p);
	}
	else if (n == 2)
	{
		flightint(n, z,q);
	}
	else if (n == 3)
	{
		flightroutes();
	}
	char alp;
	p++,q++;
	cout << "press b to move to back menu : \n" << endl;
	cin >> alp;
	system("cls");
	z++;
	if (alp == 'B' || alp == 'b')
	{
		goto m;
	}
	else
	{
		cout << "       ----------------- GOODBYE FROM AIRLINE RESERVATION MANAGEMENT SYSTEM ----------------------";
	}
	char a1[10][100], a2[10][100];
	int pass1, pass2;
	system("cls");
	ifstream fin6("password.txt");
	cout << "*********************HERE IS SPECIAL FACILITY FOR ADMINS TO VIEW TICKET OFF ALL PASSENGERS************************ " << endl;
	fin6 >> a1[1];
	fin6 >> pass1;
	cout << "ENTER A ID NAME OF ADMIN = ";
	cin >> a2[1];
	cout << "ENTER A PASSWORD = ";
	cin >> pass2;
	if ((strcmp(a1[1], a2[1]) == 0) && pass1 == pass2)
	{
		ifstream fin5("ticketlocal.txt", ios::trunc);
		fin5.open("ticketlocal.txt");
		char a[10000];
		while (!fin5.eof())
		{
			fin5.get(a, 10000, '\0');
			cout << a;
		}
		ifstream fin6("ticketint.txt", ios::trunc);
		fin6.open("ticketint.txt");
		char a3[10000];
		while (!fin6.eof())
		{
			fin6.get(a3, 10000, '\0');
			cout << a3;
		}
	}
	else
	{
		cout << "  YOU HAVE ENTERED INCORRECT INFORMATION OF ADMIN  " << endl << endl;
	}
	Sleep(500);
	system("cls");
	cout << "HERE IS FACILITY TO PASSENGER TO VIEW TICKET BY REFERENCE NUMBER "<<endl<<endl;
	char r[100];
	cout << "   ENTER A REFERNCE NUMBER  = ";
	cin >> r;
	char a[100],b[100];
	ifstream fin8("reference.txt", ios::trunc);
	fin8.open("reference.txt");
	ifstream fin9("referenceint.txt", ios::trunc);
	fin9.open("referenceint.txt");
	while (!fin8.eof() || !fin9.eof())
	{
	      fin8>>a;
		  fin9 >> b;
		if ((strcmp(r,a)==0))
		{
			ifstream fin5("ticketlocal.txt", ios::trunc);
					fin5.open("ticketlocal.txt");
					char a[10000];
					while (!fin5.eof())
					{
						fin5.get(a, 10000, '\0');
						cout << a;
					}
		}
		else if ((strcmp(r, b) == 0))
		{
			ifstream fin6("ticketint.txt", ios::trunc);
			fin6.open("ticketlocal.txt");
			char a[10000];
			while (!fin6.eof())
			{
				fin6.get(a, 10000, '\0');
				cout << a;
			}
		}
		else
			cout << "       YOU HAV ENTERED AN INVALID NUMBER    " << endl;
	}
	system("pause");
}
void menu()
{
	cout << "                          +++++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << "                          +     AIRLINE TICKETING SYSTEM ONLINE     +" << endl;
	cout << "                          +      MENU   OF TICKETING                +" << endl;
	cout << "                          +              **     **                  +" << endl;
	cout << "                          +     PRESS 1 FOR LOCAL BOOKING           +" << endl;
	cout << "                          +     PRESS 2 FOR INTERNATIONAL BOOKING   +" << endl;
	cout << "                          +     PRESS 3 FOR SCHEDULE OF FLIGHTS     +" << endl;
	cout << "                          +     NOW ENTER YOUR CHOICE :             +" << endl;
	cout << "                          +++++++++++++++++++++++++++++++++++++++++++" << endl;
}
void flightroutes()
{
	ifstream fin("flightroutes.txt",ios::trunc);
	fin.open("flightroutes.txt");
	char a[10000];
	while (!fin.eof())
	{
		fin.get(a, 10000, '\0');
		cout << a;
	}
	cout << endl;
}
int flightlocal(int n, int z,int p)                                                    //local flight
{
	char a[10][100];
	int ref;
	ifstream fin("flight_name.txt");
	cout << "        IN WHICH AIRLINE YOU WANT OT TRAVEL ? " << endl << endl << endl;
	for (int i = 1; i <= 4; i++)
	{
		fin >> a[i];
	}
	for (int i = 1; i <= 4; i++)
	{
		cout << "  " << i << " - " << a[i] << endl;
		Sleep(1000);
	}
	cout << endl << endl;
	int ch;
	cout << "enter a choice = ";
	cin >> ch;
	if (ch == 1)
	{
		cout << "\n\n\n                                                WELCOME TO QATAR_AIRWAYS" << endl;
	}
	if (ch == 2)
	{
		cout << "\n\n\n                                                WELCOME TO PIA" << endl;
	}
	if (ch == 3)
	{
		cout << "\n\n\n                                                WELCOME TO AIRBLUE" << endl;
	}
	if (ch == 4)
	{
		cout << "\n\n\n                                                WELCOME TO EMIRATES" << endl;
	}
	cout << "\n                               ***THESE ARE THE LOCAL PLACES AVAILABLE*** \n\n\n";
	char des[10][100];
	ifstream fin1("destination.txt");
	for (int i = 1; i <= 5; i++)
	{
		fin1 >> des[i];
	}
	for (int i = 1; i <= 5; i++)
	{
		cout << " " << i << "- " << des[i] << endl;
		Sleep(1000);
	}
	fin1.close();
	cout << endl << endl;
	char az[60][100];
	int k;
	cout << " ENTER A SEAT NUMBER = ";
	cin >> k;
	int d=check(az, k,p);
	if (d == 0)
	{
		cout << "   SEAT AVAILABLE  " << endl;
		ofstream fout2("info.txt", ios::app);
		ofstream fout1("reference.txt");
		char fname[100] = { 0 }, f[100], lname[100], add[100];
		int ticket;
		char passport[100];
		cout << "                    :: ENTER THE DETAILS OF THE PASSENGER::" << endl << endl << endl;              //dteails of passsenegr
		cin.getline(f, 100);
		cout << "Enter the first name of passenger  = ";
		cin.getline(fname, 100);
		fout2 << fname << endl;
		cout << endl;
		Sleep(1000);
		cout << "Enter the last name of passenger  = ";
		cin.getline(lname, 100);
		fout2 << lname << endl;
		cout << endl;
		Sleep(1000);
		cout << "Enter the full address of passenger  = ";
		cin.getline(add, 100);
		fout2 << add << endl;
		cout << endl;
		Sleep(1000);
		cout << "Enter the passport number of ticket  = ";
		cin.getline(passport, 100);
		fout2 << passport << endl;
		cout << endl;
		Sleep(1000);
		cout << "Enter the reservation seat number of ticket(LESS THAN 50)  = ";
		cin >> ticket;
		fout2 << ticket << endl;
		cout << endl;
		//int i = 0;
		cout << "enter the reference number = ";
		cin >> ref;
		fout2 << ref << endl;
		fout1 << ref << endl;
		cout << endl;
		Sleep(1000);
		char city1[50], city2[50], c1[50], t1, t2;
		int flag = 0, d, m, y;
		cin.getline(c1, 50);                                                                             //film1
		cout << "Enter the current city of passenger(IN CAPITAL WORDS ONLY) = ";
		cin.getline(city1, 50);
		cout << endl << endl;
		cout << "Enter the destination city of passenger(IN CAPITAL WORDS ONLY) = ";
		cin.getline(city2, 50);
		cout << endl << endl;
		cout << "enter the date in format (DD-MM-YYYY) = ";
		cin >> d >> t1 >> m >> t2 >> y;
		cout << endl;
		for (int i = 1; i <= 5; i++)
		{
			if (strcmp(des[i], city1) == 0)
			{
				flag = 1;
			}
			if (strcmp(des[i], city2) == 0)
			{
				flag = 1;
			}
		}
		int time, t = 0;
		if (flag == 1)
		{
			cout << "FLIGHT ON THIS ROUTE AVAILABLE" << endl << endl << endl;
			cout << "        ***ON WHICH CLASS YOU WANT TO TRAVEL ?***" << endl << endl << endl << endl;
			cout << " CHOICES  OF SEAT IN CLASSES  :     " << endl << endl << endl << endl;                                //classes
			cout << "               ***********************************   " << endl;
			cout << "               *      1)- BUSINESS CLASS         *   " << endl;
			cout << "               *      2)- ECONOMY CLASS          *   " << endl;
			cout << "               ***********************************   " << endl << endl << endl << endl;
			int choice;
			cout << "ENTER A CHOICE = ";
			cin >> choice;
			if (choice == 1 || choice == 2)
			{
				cout << "SEAT AVAILABLE " << endl;
				cout << "ON WHICH TIME YOU WANT TO TRAVEL ?" << endl << endl;
				cout << "PRESS 1 FOR 9 PM" << endl;
				cout << "PRESS 2 FOR 1 PM" << endl;
				cout << "PRESS 3 FOR 12 PM" << endl << endl << endl;
				cout << "ENTER A CHOICE OF TIME = ";
				cin >> time;
				if (time == 1)
				{
					t = 9;
				}
				if (time == 2)
				{
					t = 1;
				}
				if (time == 3)
				{
					t = 12;
				}
			}
			double seniorprice = 50, disc = 0.25;
			char senior;
			cout << "\n\n ARE YOU SENIOR CITIZEN(  PRESS Y FOR YES) \n\n\n";
			cin >> senior;
			if (senior == 'y' || senior == 'Y')
			{
				double p = (seniorprice * disc);
				seniorprice = seniorprice - p;
			}
			cout << "\n\n **************************YOUR TICKET HAS BEEN BOOKED******************************************** \n\n";
			char str3[100] = "CONFIRMED";
			ticketlocal(z, ref, ticket, passport, lname, fname, add, d, t2, m, t1, y, city1, city2, seniorprice, str3, t, choice);
			char cancellation;
			cout << "\n YOU WANT OT CANCEL THE TICKET(PRESS C) ? \n";
			cin >> cancellation;
			if (cancellation == 'c' || cancellation == 'C')
			{
				restore(az, k);
				char str3[100] = "CANCELLED";
				cout << "YOUR TICKET HAS BEEN CANCELLED AND DETAILS ARE GIVEN BELOW  \n\n";
				ticketlocal1(z, ref, ticket, passport, lname, fname, add, d, t2, m, t1, y, city1, city2, seniorprice, str3, t, choice);

			}
		}
		else
		{
			cout << "SORRY NO ROUTE AVAILABLE RIGHT NOW " << endl << endl;
		}
	}
	else
		cout << "             SEAT NOT AVAIALABLE       "<<endl;

	return 0;
}
int flightint(int n, int z,int q)
{
	char arr[10][100];
	ifstream fin("flight_name.txt");
	cout << "        IN WHICH AIRLINE YOU WANT OT TRAVEL ? " << endl << endl << endl;
	for (int i = 1; i <= 4; i++)
	{
		fin >> arr[i];
		Sleep(1000);
	}
	for (int i = 1; i <= 4; i++)
	{
		cout << "  " << i << " - " << arr[i] << endl;
		Sleep(1000);
	}
	cout << endl << endl;
	int choosee;
	cout << "enter a choice = ";
	cin >> choosee;
	if (choosee == 1)
	{
		cout << "\n\n\n                                                WELCOME TO QATAR_AIRWAYS" << endl;
	}
	if (choosee == 2)
	{
		cout << "\n\n\n                                                WELCOME TO PIA" << endl;
	}
	if (choosee == 3)
	{
		cout << "\n\n\n                                                WELCOME TO AIRBLUE" << endl;
	}
	if (choosee == 4)
	{
		cout << "\n\n\n                                                WELCOME TO EMIRATES" << endl;
	}
	cout << "\n                               ***THESE ARE THE INTERNATIONAL PLACES AVAILABLE*** \n\n\n";
	char dest[10][100];
	ifstream fin2("int_destination.txt");
	for (int i = 1; i <= 5; i++)
	{
		fin2 >> dest[i];
	}
	for (int i = 1; i <= 5; i++)
	{
		cout << " " << i << "- " << dest[i] << endl;
		Sleep(1000);
	}
	cout << endl << endl;
	char p[60][100];
	int c;
	cout << " ENTER A SEAT NUMBER = ";
	cin >> c;
	int d = check(p, c, q);
	if (d == 0)
	{
		ofstream fout2("info.txt", ios::app);
		ofstream fout5("referenceint.txt");
		char fname1[100], f1[100], lname1[100], add1[100];
		int ticket1, ref1;
		char passport1[100];
		cout << "                    :: ENTER THE DETAILS OF THE PASSENGER::" << endl << endl << endl;              //dteails of passsenegr
		cin.getline(f1, 100);
		cout << "Enter the first name of passenger  = ";
		cin.getline(fname1, 100);
		fout2 << fname1 << endl;
		cout << endl;
		Sleep(1000);
		cout << "Enter the last name of passenger  = ";
		cin.getline(lname1, 100);
		fout2 << lname1 << endl;
		cout << endl;
		Sleep(1000);
		cout << "Enter the full address of passenger  = ";
		cin.getline(add1, 100);
		fout2 << add1 << endl;
		cout << endl;
		Sleep(1000);
		cout << "Enter the passport number of ticket  = ";
		cin.getline(passport1, 100);
		fout2 << passport1 << endl;
		cout << endl;
		Sleep(1000);
		cout << "Enter the seat number of ticket(LESS THAN 60)  = ";
		cin >> ticket1;
		fout2 << ticket1 << endl;
		cout << endl;
		//nt i = 0;
		cout << "Enter the reference number of ticket  = ";
		cin >> ref1;
		fout2 << ref1 << endl;
		fout5 << ref1 << endl;
		//i++;
		cout << endl;
		Sleep(1000);
		char city3[50], city4[50], c0[50], t3, t4;
		int flag1 = 0, d, m, y;
		cin.getline(c0, 50);                                                                             //film1
		cout << "Enter the current city of passenger(IN CAPITAL WORDS ONLY) = ";
		cin.getline(city3, 50);
		cout << endl << endl;
		cout << "Enter the destination city of passenger(IN CAPITAL WORDS ONLY) = ";
		cin.getline(city4, 50);
		cout << endl << endl;
		cout << "enter the date in format (DD-MM-YYYY) = ";
		cin >> d >> t3 >> m >> t4 >> y;
		cout << endl;
		for (int i = 1; i <= 5; i++)
		{
			if (strcmp(dest[i], city4) == 0)
			{
				flag1 = 1;
			}
		}
		int time1, t0 = 0;
		if (flag1 == 1)
		{
			cout << "FLIGHT ON THIS ROUTE AVAILABLE" << endl << endl << endl;
			cout << "        ***ON WHICH CLASS YOU WANT TO TRAVEL ?***" << endl << endl << endl << endl;
			cout << " CHOICES  OF SEAT IN CLASSES  :     " << endl << endl << endl << endl;                                //classes
			cout << "               ***********************************   " << endl;
			cout << "               *      1)- BUSINESS CLASS         *   " << endl;
			cout << "               *      2)- ECONOMY CLASS          *   " << endl;
			cout << "               ***********************************   " << endl << endl << endl << endl;
			int choice1;
			cout << "ENTER A CHOICE = ";
			cin >> choice1;
			if (choice1 == 1 || choice1 == 2)
			{
				cout << "SEAT AVAILABLE " << endl;
				cout << "ON WHICH TIME YOU WANT TO TRAVEL ?" << endl << endl;
				cout << "PRESS 1 FOR 9 PM" << endl;
				cout << "PRESS 2 FOR 1 PM" << endl;
				cout << "PRESS 3 FOR 12 PM" << endl << endl << endl;
				cout << "ENTER A CHOICE OF TIME = ";
				cin >> time1;
				if (time1 == 1)
				{
					t0 = 9;
				}
				if (time1 == 2)
				{
					t0 = 1;
				}
				if (time1 == 3)
				{
					t0 = 12;
				}
			}
			double seniorprice1 = 100, disc1 = 0.25;
			char senior1;
			cout << "\n\n ARE YOU SENIOR CITIZEN(  PRESS Y FOR YES) \n\n\n";
			cin >> senior1;
			if (senior1 == 'y' || senior1 == 'Y')
			{
				double p1 = (seniorprice1 * disc1);
				seniorprice1 = seniorprice1 - p1;
			}
			char str[100] = "CONFIRMED";
			cout << "\n\n **************************YOUR TICKET HAS BEEN BOOKED******************************************** \n\n";
			ticketint(z, ref1, ticket1, passport1, lname1, fname1, add1, d, t3, m, t4, y, city3, city4, seniorprice1, str, t0, choice1);
			char cancellation1;
			cout << "\n YOU WANT OT CANCEL THE TICKET(PRESS C) ? \n";
			cin >> cancellation1;
			if (cancellation1 == 'c' || cancellation1 == 'C')                                           //ticket generate
			{
				restore(p,c);
				char str1[100] = "CANCELLED";
				cout << "YOUR TICKET HAS BEEN CANCELLED AND DETAILS ARE GIVEN BELOW  \n\n";
				ticketint1(z, ref1, ticket1, passport1, lname1, fname1, add1, d, t3, m, t4, y, city3, city4, seniorprice1, str1, t0, choice1);
			}
		}
		else
			cout << "    SORRY NO ROUTE AVAILABLE  " << endl << endl;
	}
	else
		cout << "  SEAT IS ALREADY BOOKED OR RESERVED  " << endl;
		
	return 0;
}
void aeroplane()
{
	int i = 0;
	for (i; i < 300; i++)
	{
		line(80 + i, 300 - i, 260 + i, 300 - i, 255);
		line(150 + i, 340 - i, 200 + i, 340 - i, 255);
		line(150 + i, 340 - i, 100 + i, 400 - i, 255);
		line(200 + i, 340 - i, 100 + i, 400 - i, 255);
		line(40 + i, 380 - i, 115 + i, 380 - i, 255);
		line(132 + i, 380 - i, 250 + i, 380 - i, 255);
		line(250 + i, 380 - i, 320 + i, 352 - i, 255);                ////new
		line(100 + i, 270 - i, 150 + i, 300 - i, 255);
		line(100 + i, 270 - i, 200 + i, 300 - i, 255);
		line(80 + i, 300 - i, 65 + i, 260 - i, 255);
		line(40 + i, 380 - i, 40 + i, 260 - i, 255);
		line(40 + i, 260 - i, 65 + i, 260 - i, 255);
		line(261 + i, 352 - i, 320 + i, 352 - i, 255);
		line(261 + i, 300 - i, 261 + i, 350 - i, 255);
		//windows//
		rectangle(100 + i, 310 - i, 120 + i, 330 - i, 0, 0, 255, 0, 0, 255);
		rectangle(130 + i, 310 - i, 150 + i, 330 - i, 0, 0, 255, 0, 0, 255);
		rectangle(160 + i, 310 - i, 180 + i, 330 - i, 0, 0, 255, 0, 0, 255);
		rectangle(190 + i, 310 - i, 210 + i, 330 - i, 0, 0, 255, 0, 0, 255);
		rectangle(220 + i, 310 - i, 240 + i, 330 - i, 0, 0, 255, 0, 0, 255);
		//homes//
		line(0, 459, 679, 459, 255);
		rectangle(510 - i, 459, 550 - i, 430, 0, 0, 255, 0, 0, 0);
		rectangle(550 - i, 459, 610 - i, 430, 0, 0, 255, 0, 0, 0);
		line(530 - i, 410, 550 - i, 430, 255);
		line(530 - i, 410, 510 - i, 430, 255);
		line(590 - i, 410, 610 - i, 430, 255);
		line(590 - i, 410, 530 - i, 410, 255);
		rectangle(430 - i, 430, 490 - i, 459, 0, 0, 255, 0, 0, 0);
		rectangle(390 - i, 430, 430 - i, 459, 0, 0, 255, 0, 0, 0);
		line(410 - i, 410, 430 - i, 430, 255);
		line(410 - i, 410, 390 - i, 430, 255);
		line(410 - i, 410, 470 - i, 410, 255);
		line(470 - i, 410, 490 - i, 430, 255);
		Sleep(5);
		system("cls");
	}
}