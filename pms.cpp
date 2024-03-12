#include<iostream.h>
#include<dos.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<iomanip.h>
#include<stdlib.h>
#include<fstream.h>
#include<math.h>
#include<graphics.h>
static int p=0;
class crime
{
	private:
		int i,j,c,ch1,ch2,ch3,n,a,ch;
  char name[20],firno[20],fname[20],ename[20],num[20];
  char sex[3],nps[20],dis[20],nat[10],id[20],post[20];
  char age[4],dates[20],cadd[20],act[20],dob[10];
  char address[50],idno[20],dobs[10],add[20],doj[20];
 public:
	void addnew();     //police information
	void update();     //employee detail update
	void show();       //employee detail show
	void showfir();    //show fir
	void delet();      //delete employee detail
	void login();      //
	void FIR();       //criminal record
	void vline(char); //for vertical line
	void menu();      //for selection the best choice
	void welcome();

}b[10],d[10];             //object to store information

void crime::vline(char ch)
{
	for(i=40;i>0;i--)
	{
		cout<<ch;
		delay(10);
	}
}

void crime::FIR()
{
	 cout<<"\n";
	 vline('-');
	 cout<<"\nDate: ";
	 cin>>d[p].dates;
	 cout<<"FIR no.: ";
	 cin>>d[p].firno;
	 cout<<"A) Information Receive at";
	 cout<<"\nName of police sation: ";
	 cin>>d[p].nps;
	 cout<<"B) Place of occurence: ";
	 cout<<"\n i)Distance from police station: ";
	 cin>>d[p].dis;
	 cout<<"ii)Address   :";
	 cin>>d[p].cadd;
	 cout<<"C) Complaint /Informat :";
	 cout<<"\n i) Name(Name of Informat): ";
	 cin>>d[p].name;
	 cout<<"ii) Father's Name/Husband's Name:";
	 cin>>d[p].fname;
	 cout<<"iii) Date Of Birth: ";
	 cin>>d[p].dobs;
	 cout<<"iv) Nationality: ";
	 cin>>d[p].nat;
	 cout<<"v) ID Number: ";
	 cin>>d[p].idno;
	 cout<<"D) Act and Section: ";
	 cin>>d[p].act;
		p++;
	}

void crime::addnew()
{
	cout<<"\nPolice employee ID:       ";
	cin>>b[p].id;
	cout<<"Police Employee Name:       ";
	cin>>b[p].ename;
	cout<<"Police Employee_Cr Address: ";
	cin>>b[p].add;
	cout<<"Date Of Joining :           ";
	cin>>b[p].doj;
	cout<<"Type of Post:               ";
	cin>>b[p].post;
}

//show employee function
void crime::show()
{
	cout<<"\nEnter Employee ID: ";
	cin>>num;
	for(n=0;n<=p;n++)
	{
		 if(strcmp(b[n].id,num)==0)
		 break;
	}
	if(n>p)
	  cout<<"Enter correct ID: ";
	else
	{
		vline('*');
		cout<<"\n1. ID              : "<<b[n].id<<"\n2. Name          : "<<b[n].ename;
		cout<<"\n3. DOB             : "<<b[n].dob<<"\n4. Address      :"<<b[n].add;
		cout<<"\n5. Date of joining : "<<b[n].doj<<"\n6. TYPE of POST : "<<b[n].post;
	}
}
void crime::update()
{
	cout<<"\n\n";
	cout<<"\nEnter Employee ID: ";
	cin>>num;
	for(n=0;n<=p;n++)
	{
		 if(strcmp(b[n].id,num)==0);
		  break;
	}
	if(n>p)
	  cout<<"Enter corect ID: ";
	else
	{
		do
		{
		cout<<"\n1. ID              : "<<b[n].id<<"\n2. Name          : "<<b[n].ename;
		cout<<"\n3. DOB             : "<<b[n].dob<<"\n4. Address      :"<<b[n].add;
		cout<<"\n5. Date of joining : "<<b[n].doj<<"\n6. TYPE of POST : "<<b[n].post;
		cin>>c;

		switch(c)
		{
			case 1:
				cout<<"\nOld ID   :"<<b[n].id;
				cout<<"\nEnter Nwe ID: ";
				cin>>b[n].id;
				break;
			case 2:
				cout<<"\nOld Name: "<<b[n].ename;
				cout<<"\nEnter New Name: ";
				cin>>b[n].ename;
				break;
			case 3:
				cout<<"\n Old Dob: "<<b[n].dob;
				cout<<"\n Enter New DOB: ";
				cin>>b[n].dob;
				break;
				case 4:
					cout<<"\nOld Address: "<<b[n].add;
					cout<<"\n Enter New Address: ";
					cin>>b[n].add;
					break;
				case 5:
					cout<<"\n Old Date Of Joining: "<<b[n].doj;
					cout<<"\n Enter New Date Of Joining: ";
					cin>>b[n].doj;
					break;
				case 6:
					cout<<"\n Old Type Of post: "<<b[n].post;
					cout<<"\n Enter New Type Of Post: ";
					cin>>b[n].post;
					break;

				default:
					cout<<"\nPlease Select Correct Option";

		}
		}while(c!=1 && c!=2 && c!=3 && c!=4 &&c!=5 && c!=6);
		cout<<"\nRecord is Updated";

	}
}
void crime::delet()
{
	cout<<"\n\n";
	cout<<"Enter Employee ID: ";
	cin>>num;
	for(n=0;n<=p;n++)
	{
		if(strcmp(b[n].id,num)==0)
		break;
	}
	if(n>p)
	 cout<<"Enter correct id...";
	else
	{
		a=n;
		while(a<p)
		 {
			b[a]=b[a+1];
			a++;
			}
			p--;
			cout<<"\nRecord is Deleted...";
	}
}
void crime::showfir()
{
	cout<<"\nEnter FIR ID: ";
	cin>>num;
	for(n=0;n<=p;n++)
	{
		if(strcmp(d[n].firno,num)==0)
		break;
	}
	if(n>p)
	  cout<<"Enter Correct FIR ID ";
	else
	{
		cout<<"\n";
		vline('-');
		cout<<"\n\nDATE    :"<<d[n].dates;
		cout<<"\t\tFIR No. :"<<d[n].firno;
		cout<<"\n";
		vline('-');
		cout<<"A) Information Receive at";
	 cout<<"\nName of police sation           : "<<d[n].nps;
	 cout<<"B) Place of occurence: ";
	 cout<<"\n i)Distance from police station : "<<d[n].dis;
	 cout<<"ii) Address                       :"<<d[n].cadd;
	 cout<<"C) Complaint /Informat :";
	 cout<<"\n i) Name(Name of Informat)      : "<<d[n].name;
	 cout<<"ii) Father's Name/Husband's Name  :"<<d[n].fname;
	 cout<<"iii) Date Of Birth                : "<<d[n].dobs;
	 cout<<"iv) Nationality                   : "<<d[n].nat;
	 cout<<"v) ID Number                      : "<<d[n].idno;
	 cout<<"D) Act and Section                : "<<d[n].act;
  cout<<"\n";
		vline('-');
	}
}
void crime::menu()
{
    //	cleardevice();
	clrscr();
	textmode(C40);
	textcolor(LIGHTGREEN);        //to set the color of the text
	gotoxy(8,8);
	do
	{
	s1:
	gotoxy(1,3);
	cprintf("\n    Select Any ONE");
	gotoxy(9,7);
	textcolor(WHITE);
	cprintf("1.Police Employement Details");
	gotoxy(9,8);
	cprintf("2.FIR system");
	gotoxy(9,9);
	cprintf("3.Thank u message");
	gotoxy(9,10);
	cprintf("4.Exit");
	gotoxy(9,12);
	cin>>ch1;
	closegraph();
	switch(ch1)
     {
	case 1:
	do
	{
	s:
	cout<<"\n\n\n\t1.ADD NEW \t3.VIEW";
	cout<<"\n\n\n\t2.UPDATE \t4.DELETE";
	cout<<"\n\n\n\t5.GO BACK\t";
	cin>>ch2;
	switch(ch2)
	{
	case 1:
	 clrscr();
	cout<<"\n\n\t\t\t* ADD NEW *";
	addnew();
	getch();
	goto s;
	case 2:
	clrscr();
	cout<<"\n\n\t\t\t* UPDATE *";
	update();
	getch();
	clrscr();
	goto s;
	case 3:
	clrscr();
	cout<<"\n\n\t\t\t* SHOW *";
	show();
	getch();
	clrscr();
	goto s;
	case 4:
	cout<<"\n\n\t\t\t* DELETE *";
	delet();
	getch();
	clrscr();
	goto s;
	case 5:
	clrscr();
	goto s1;
	default:
	cout<<"\nSorry your Selection is wrong \n Please select the correct option\n";
	break;
	}
      }while(ch2!=1 && ch2!=2 && ch2!=3 && ch2!=4 && ch2!=5);
     getch();
     clrscr();

  break;
  case 2:
  do
  {
  s2:
  clrscr();
  cout<<"\n\n\n\t\t1. ADD REPORT\n\n\n\n\t\t2.VIEW REPORT";
  cout<<"\n\n\n\t\t3. GO BACK\t";
  cin>>ch3;
  textcolor(WHITE);
  switch(ch3)
  {
  case 1:
    clrscr();
    cout<<"\n\\n\t * ADD REPORT *";
    FIR();
    getch();
    clrscr();
    goto s2;

  case 2:
  clrscr();
  cout<<"\n\n\t *VIEW REPORT *";
  showfir();
   getch;
   clrscr();
  goto s2;

  case 3:
  clrscr();
  goto s1;

  default:
  cout<<"\nSorry your Selection is wrong \n Please select the coerrect option\n";
	break;
  }
  }while(ch3!=1 && ch3!=2 && ch3!=3);
	 getch();

	 break;

    case 3:
   textmode(C40);
  textcolor(LIGHTGREEN);
  gotoxy(10,17);
  cprintf("Thanks...");
  gotoxy(10,18);
  textcolor(LIGHTCYAN);
  cprintf("PROJECT MADE BY");
  gotoxy(3,21);
  textcolor(LIGHTMAGENTA);
   cprintf("*Rishita*,");
 break;

 case 4:
	printf("\n Exiting.....");
  break;


  default:
  clrscr();
  cout<<"\nSorry your Selection is wrong \n Please select the coerrect option\n";
  break;
  }
}while(ch1!=4);
getch();
}

void crime::login()
{
	clrscr();
	textmode(C80);
	g:
		int i=0,k=0,y=35;
		char a,b[15],c[15]="zeroattendance";
		clrscr();
		textbackground(BLACK);
		gotoxy(25,10);
		printf("        ENTER PASSWORD:            ");
		textbackground(BLACK);
		textbackground(YELLOW);
		textcolor(CYAN);
		gotoxy(32,14);
		cprintf("                          ");
		gotoxy(32,15);
		cprintf("                         ");
		gotoxy(32,16);
		cprintf("                         ");
		gotoxy(35,15);
		fflush(stdin);
		while((a=getch())!='\r')

		{
			if(a==8 && y>35)
			{
				y--;
				i--;
				b[i]=NULL;
				gotoxy(y,15);
				printf("  ");
			}
			else
			{
				b[i]=a;
				gotoxy(y,15);
				printf("*");
				i++;
				y++;
			}
		}
		getch();
		b[i]='\0';
		if(strcmp(b,c))
		{
			printf("LOADING.....");
			menu();
			getch();
		}
		else
		{
			k++;
			gotoxy(31,18);
			textcolor(RED);
			textbackground(10);
			cprintf("                ");
			gotoxy(31,19);
			cprintf("Sorry Wrong Password!   ");
			gotoxy(31,20);
			cprintf("                     ");
			textcolor(15);
			textbackground(BLACK);
			getch();
			cleardevice();
			goto g;
		}
}
void crime::welcome()
{
	clrscr();
	int i ;
	 textmode(C40);
	 textcolor(LIGHTGREEN);
	 gotoxy(10,8);
	 cprintf("Welcome to our  project");
	 textmode(C40);
	 gotoxy(15,13);
	 textcolor(YELLOW);
	 cprintf("POLICE FIR");
	 gotoxy(19,15);
	 cprintf("&");
		gotoxy(9,17);
		cprintf("CRIME MANAGEMENT SYSTEM");
		fflush(stdin);
		getch();
}
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");
	gotoxy(0,500);
	crime c;
	c.welcome();
       c.login();
       getch();
}