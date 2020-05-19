/*
	POS System
	Created by: pkhaan
	Date Created: Thursday, March 18, 2010, 9:20:22 AM
*/
#include<iostream>
#include<conio.h>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#define textcolor SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE)
using namespace std;
int gotoxy(int x,int y){
 HANDLE handle;
 handle=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD c;
	c.X=x;
	c.Y=y;
	cout << endl;
	SetConsoleCursorPosition(handle, c);
    return 0;	
} 
void emblem(){
	system("cls");
	textcolor, 14);
	gotoxy(60,8);
	cout<<"P O S";
	gotoxy(60,10);
	cout<<"S Y S T E M";
    //gotoxy(56,12);
	//cout<<"Rosendal, JM";
	//gotoxy(56,13);
	//cout<<"Engay, Edward";
	// agent_suwastica

	gotoxy(3,3);
	textcolor, 6+218);
	textcolor, 3+219);
	cout<<endl<<endl<<endl<<endl;
     	cout<<"\n\n\t                                        ";
	    cout<<"\n  \tлл ллл лл    лллллллллллллллллллллл     ";
	cout<<endl<<"  \tлл ллл лл    лл                         ";
	cout<<endl<<"  \tлл ллл лл    лл ллллллллллллллллллл     ";
	cout<<endl<<"  \tлл ллл лл    лл ллллллллллллллллллл     ";
	cout<<endl<<"  \tлл ллл лл    лл ллл                     ";
	cout<<endl<<"  \tлл ллл лл    лл ллл ллллллллллллллл     ";
	cout<<endl<<"  \tлл ллл лл    лл ллл лл                  ";
	cout<<endl<<"  \tлл ллл лл    лл ллл лл                  ";
	cout<<endl<<"  \tлл ллл лл    лл ллл лл                  ";
	cout<<endl<<"  \tлл ллл лл    лл ллл лл                  ";
	cout<<endl<<"  \tлл ллл лллллллл ллл ллллллллллллллл     ";
   	cout<<endl<<"  \tлл ллл          ллл              лл     ";
	cout<<endl<<"  \tлл ллллллллллллллллллллллллллллл лл     ";
	cout<<endl<<"  \tлл ллллллллллллллллллллллллллллл лл     ";
	cout<<endl<<"  \tлл              ллл          ллл лл     ";
	cout<<endl<<"  \tллллллллллллллл ллл лллллллл ллл лл     ";
	cout<<endl<<"  \t             лл ллл лл    лл ллл лл     ";
	cout<<endl<<"  \t             лл ллл лл    лл ллл лл     ";
	cout<<endl<<"  \t             лл ллл лл    лл ллл лл     ";
	cout<<endl<<"  \t             лл ллл лл    лл ллл лл     ";
	cout<<endl<<"  \tллллллллллллллл ллл лл    лл ллл лл     ";
	cout<<endl<<"  \t                ллл лл    лл ллл лл     ";
	cout<<endl<<"  \tллллллллллллллллллл лл    лл ллл лл     ";
	cout<<endl<<"  \tллллллллллллллллллл лл    лл ллл лл     ";
	cout<<endl<<"  \t                    лл    лл ллл лл     ";
	cout<<endl<<"  \tлллллллллллллллллллллл    лл ллл лл     ";
	cout<<endl<<"\t                                        ";
    	cout<<endl<<endl;
          cout<<"     лл  ллл  лл  л  л ллл /л";
	cout<<endl<<"    л    л л л  л л  л л л  л";
	cout<<endl<<"    л лл ллл л  л л  л ллл  л";
	cout<<endl<<"    л  л лл  л  л л  л л    л";
	cout<<endl<<"    лллл л л  лл   лл  л   ллл";
	cout<<endl<<endl;
	cout<<endl;
	getch();
}
interfaced(){
	textcolor, 14);
	textcolor, 14);
	system("cls");
cout<<"                      лллллллллллллллллллллллллллллллллллллл                  \n";
cout<<"                     л                                      л                       \n";
cout<<"                     л                                      л                       \n";
cout<<"                   ллл           л лл   лл  л л л           ллл                     \n";
cout<<"                  л    ллл       лл  л л  л л л л              л                    \n";
cout<<"                  л   ллллл      л   л лллл л л л              л                    \n";
cout<<"                  л  ллл лл      л   л л    л л л     лллллл   л                    \n";
cout<<"                  л ллл ллл      л   л  лл   л л     лллллллл  л                    \n";
cout<<"                  л лл ллл                          лллллллллл л                    \n";
cout<<"                  л ллллл     л л     л           л  л      л  л                    \n";
cout<<"                  л  ллл     л  л                лл лллллллллл л                    \n";
cout<<"                  л         л   л     л л лл      л  лллллллл  л                    \n";
cout<<"                  л         лллллл лл л лл  л лл  л   лллллл   л                    \n";
cout<<"                  л             л     л л   л     л            л                    \n";
cout<<"                  л             л     л л   л     л            л                    \n";
cout<<"                  л                                            л                    \n";
cout<<"                  л                                            л                    \n";
cout<<"                  л ллллллллллл                   лллллллллллл л                   \n";
cout<<"                  л  л        л                   л         л  л                    \n";
cout<<"                  л   л       л                   л        л   л                    \n";
cout<<"                  л    л  ллллллллллллллллллллллллллллл   л    л                    \n";
cout<<"                  л     л л                           л  л     л                    \n";
cout<<"                  л     л л л            лл   лл      л  л     л                    \n";
cout<<"                  л    л  л л  л  л л л л  л л  л л л л   л    л                    \n";
cout<<"                  л   л   л лл л  л лл   ллл лллл лл  л    л   л                    \n";
cout<<"                  л  л    л л л лл  л      л л    л   л     л  л                    \n";
cout<<"                  л ллллллл лл      л    лл   лл  л   лллллллл л                    \n";
cout<<"                  л       л                           л        л                    \n";
cout<<"                  л       ллллллллллллллллллллллллллллл        л                    \n";
cout<<"                  л                                            л                    \n";
cout<<"                   ллл                                      ллл                     \n";
cout<<"                     л                                      л                       \n";
cout<<"                     л                                      л                       \n";
cout<<"                      лллллллллллллллллллллллллллллллллллллл      \n";
}
void help(){
	int c;
	cout<<endl;
	getch();
	system("cls");
   gotoxy(12,15);
   cout<<"Do You Want To See Mechanics in using this program(Y/N):";
in:
   cout<<endl;
   c=getch();
   switch(c){
     case 'y':
	 case 'Y': goto help;break;
	 case 'n':
	 case 'N': goto end;break;
	 default: gotoxy(0,0); goto in;break;
   }
help:



   cout<<"Help   \n";
   cout<<"First,simply understand the questions and follow the instructions\n\n";
   cout<<"that are displayed by the computer.\n\n";
cout<<"The keys that are applicable for the used of costumers are:  'w' for 'UP' ,\n\n";
cout<<" 's' for 'DOWN' , 'backspace' to 'BACK' , 'enter' to 'ENTER'.\n\n";
cout<<"Our computer's are properly secured because it can only be open  by the\n\n";
cout<<" personnel that is responsible to it and the person's that know the correct\n\n";
cout<<" username and the corresponding password.\n\n";
cout<<"While the computer is in the process of loading please wait it until\n\n it will finished and be patient.\n\n";




   cout<<endl;
   getch();
end:
   cout<<endl;
   gotoxy(13,44);
   system("pause");
}
int border(){
	int i;
	 textcolor, 7);
  for(i=1;i<=79;i++){
  gotoxy(i,1);
  cout<<"л";}
  for(i=1;i<=49;i++){
  	gotoxy(79,i);
  	cout<<"л";
  }
  for(i=79;i>=1;i--){
  	gotoxy(i,49);
  	cout<<"л";
  }
  for(i=49;i>=1;i--){
  	gotoxy(0,i);
  	cout<<"л";
  }
  textcolor, 8);
  for(i=2;i<=78;i++){
  	gotoxy(i,2);
  	cout<<"л";
  }
  for(i=2;i<=48;i++){
  	gotoxy(78,i);
  	cout<<"л";
  }
  for(i=78;i>=2;i--){
  	gotoxy(i,48);
  	cout<<"л";
  }
  for(i=48;i>=2;i--){
  	gotoxy(1,i);
  cout<<"л";
  }
  textcolor, 7);
 for(i=4;i<=76;i++){
 	gotoxy(i,4);
 	cout<<"л";
 }
 for(i=4;i<=7;i++){
 	gotoxy(76,i);
 cout<<"л";
 }
 for(i=76;i>=4;i--){
 	gotoxy(i,8);
 	cout<<"л";
 }
 for(i=8;i>=4;i--){
 	gotoxy(4,i);
 	cout<<"л";
 }
 return 0;
}
int ctc(int n){
	if(n==0)
     	textcolor, 14+128);
	else
	    textcolor, 14);
	return 0;
}
long Qty(long qty){
     long i;
	 int c;
	 if(qty>0)
		 i=1;
	 else{
       textcolor, 2);
	   gotoxy(50,44);
	   cout<<"Invalid, not available!"<<endl;
	   getch();
	   gotoxy(50,44);
	   cout<<"                       ";
	   return 0;
	 }
	 textcolor, 14);
	 gotoxy(20,38);
	 cout<<"How many?";
	 gotoxy(25,40);
	 cout<<i;
in:
	 cout<<endl;
	 c=getch();
	 switch(c){
	 case 'w':
	 case 'W': if(i<qty){
		 i++;
			   }
		 gotoxy(25,40);
		 cout<<"          ";
		 gotoxy(25,40);
		 cout<<i;
         goto in;break;
     case 's':
	 case 'S': if(i>=2)
				   i--;
		 		gotoxy(25,40);
		 cout<<"          ";
		 gotoxy(25,40);
		 cout<<i;
         goto in;break;
	 case '\b': return 0;break;
	 case '\r': return i; break;
	 default: gotoxy(0,0);goto in;break;

	 }
 
}
long counter(){
   long i;
   int c;
   textcolor, 14);
   i=0;
   gotoxy(20,40);
   cout<<"How many?";
   textcolor, 14+128);
   gotoxy(25,44);
   cout<<i;
in:
   cout<<endl;
   c=getch();
   switch(c){
   case 'w':
   case 'W': i++;gotoxy(25,44);cout<<"      ";
	   gotoxy(25,44);
	   cout<<i;goto in;break;
   case 's':
   case 'S': if(i>=2)
				 i--;
	   gotoxy(25,44);cout<<"      ";
	   gotoxy(25,44);
	   cout<<i;goto in;break;
   case '\b': return 0;break;
   case '\r': return i;break;
   default: gotoxy(0,0);goto in;break;

   }

}

int signininventoryexitmain2(){
	char un[50],str[100];
	int a=0,n,c,na[20],attempts=3;
    long qty=0,xxx=0,i=0,xx=0;
	float price=0,wasteprod=0,qtyprod=0,totalsales=0,total=0,cash=0,origtp=0,aaa=0,discount=0,change=0;
	float mcdo[4][3]={{0,73,0},{0,73,0},{0,88,0},{0,43,0}};
	float mb[3][3]={{0,33,0},{0,31,0},{0,23,0}};
	float bm[2][3]={{0,21.50,0},{0,28,0}};
	float jollibee[4][3]={{0,97.00,0},{0,52,0},{0,69,0},{0,28,0}};
	float extras[3][3]={{0,8,0},{0,5,0},{0,6,0}};
	float jm=0,dhie=0,bed_fighter=0,benjie=0,flicks=0,vic=0;
	textcolor, 6+219);
first:
	system("cls");
	textcolor, 14+777);
	gotoxy(40,14);
	cout<<"         ";
	gotoxy(40,17);
	cout<<"         ";
	gotoxy(40,20);
	cout<<"         ";
s:
	textcolor, 14+777);
	gotoxy(40,14);
	cout<<"SIGN IN";
inps:
	cout<<endl;
	c=getch();
	switch(c){
	case 'W':
	case 'w': gotoxy(40,14);ctc(1);
		cout<<"         ";
		goto e;break;
	case 'S':
	case 's': gotoxy(40,14);ctc(1);
	cout<<"         ";
		goto i;break;
	case '\r': ss:gotoxy(15,40);
		cout<<"Sure?(Y/N): ";
		cout << endl;
		c=getch();
		switch(c){
		case 'Y':
		case 'y': goto signin;break;
		case 'n':
		case 'N': gotoxy(15,40);cout<<"                         ";goto inps;break;
		default: gotoxy(0,0);goto ss;break;
		}
		break;
	default: gotoxy(0,0); goto inps;break;
	}
i:
	textcolor, 14+777);
	gotoxy(40,17);
	cout<<"INVENTORY";
inpi:
   cout<<endl;
	c=getch();
	switch(c){
			case 'W':
	case 'w': gotoxy(40,17);ctc(1);
		cout<<"         ";
		goto s;break;
			case 'S':
	case 's': gotoxy(40,17);ctc(1);
		cout<<"         ";
		goto e;break;
	case '\r': ctc(1);
		gotoxy(0,38);cout<<"                                                                                    ";
		gotoxy(0,39);cout<<"                                                                                    ";
	gotoxy(7,38); cout<<"enter password: ";
		a=0;
	do{
		if(a>0){
            gotoxy(23+a,38);
			cout<<"*";
		}
		cout<<endl;
		na[a]=getch();
		a++;
	}while(na[a-1]!='\r');
	if(na[0]=='l'&&na[1]=='o'&&na[2]=='w'&&na[3]=='e'&&na[4]=='s'&&na[5]=='t'&&na[6]=='\r'){
		cout<<"\nPassword Accepted..";cout<<endl;getch();
		goto inventory;}
	else{
		cout<<"Invalid Password!"<<endl;getch();
		gotoxy(7,38);cout<<"                                                        ";
		gotoxy(0,39);cout<<"                      "<<endl;goto inpi;}
	break;
	default: gotoxy(0,0); goto inpi;break;
	}
e:
textcolor, 14+777);
	gotoxy(40,20);
	cout<<"EXIT";
inpe:
   cout<<endl;
	c=getch();
	switch(c){
			case 'W':
	case 'w': gotoxy(40,20);ctc(1);
		cout<<"         ";
		goto i;break;
			case 'S':
	case 's': gotoxy(40,20);ctc(1);
	cout<<"         ";
		goto s;break;
	case '\r': 
		ex:gotoxy(15,40);
		cout<<"Sure?(Y/N): ";
		cout << endl;
		c=getch();
		switch(c){
		case 'Y':
		case 'y': return 0;break;
		case 'n':
		case 'N': gotoxy(15,40);cout<<"                         ";goto inpe;break;
		default: gotoxy(0,0);goto ex;break;
		}
		
		
		return 0;break;
	default: gotoxy(0,0); goto inpe;break;
	}
////////////////////////////////////////////////////////////////////////////////////////////////////signin	
signin:
	 system("cls");
	gotoxy(19,11);
	cout<<"Trials Left: "<<attempts;
	cout<<endl;
    gotoxy(20,15);
	cout<<"password: ";
		gotoxy(20,13);
	cout<<"Username: ";
	cin>>un;
	a=0;
	do{
		if(a>0){
            gotoxy(29+a,15);
			cout<<"*";
		}
		cout<<endl;
		na[a]=getch();
		a++;
	}while(na[a-1]!='\r');
	if(strcmp(un,"jm")==0&&(na[0]=='j')&&(na[1]=='m')&&(na[2]=='\r')){
		cout<<"\n\nSigning in as jm..";totalsales=jm;}
	else if(strcmp(un,"dhie")==0&&(na[0]=='m')&&(na[1]=='h')&&(na[2]=='i')&&(na[3]=='e')&&na[4]=='\r'){
		cout<<"\n\nSigning in as dhie..";
	totalsales=dhie;}
	else if(strcmp(un,"vic")==0&&(na[0]=='v')&&(na[1]=='i')&&(na[2]=='c')&&(na[3]=='\r')){
		cout<<"\n\nSigning in as vic..";
	totalsales=vic;}
	else if(strcmp(un,"benjie")==0&&(na[0]=='d')&&(na[1]=='o')&&(na[2]=='t')&&(na[3]=='e')&&na[4]=='\r'){
		cout<<"\n\nSigning in as benjie..";
	totalsales=benjie;}
	else if(strcmp(un,"flicks")==0&&(na[0]=='1')&&(na[1]=='2')&&(na[2]=='3')&&(na[3]=='4')&&na[4]=='\r'){
		cout<<"\n\nSigning in as dhie..";
	totalsales=flicks;}
	else if(strcmp(un,"bed_fighter")==0&&(na[0]=='v')&&(na[1]=='i')&&(na[2]=='l')&&(na[3]=='l')&&(na[4]=='a')&&(na[5]=='r')&&(na[6]=='i')&&(na[7]=='n')&&(na[8]=='o')&&na[9]=='\r'){
        cout<<"\n\nSigning in as bed fighter.";totalsales=bed_fighter;}
	else{
		cout<<"\n\nInvalid Password!\n\n";
		cout<<"      Go back?(Y/N): ";
sss:
		cout<<endl;
		c=getch();
		switch(c){
		case 'y':
		case 'Y': goto first;break;
		case 'n':
		case 'N': attempts--;
			if(attempts==0){
		system("cls");
		gotoxy(30,25);
		cout<<"The Program is Blocked";
		cout<<endl;
		gotoxy(30,29);
		system("pause");
		return 0;}goto signin;break;
		default: gotoxy(0,0);goto sss;break;
		}
	}     
     goto main2;
   







///////////////////////////////////////////////////////////////////////////////////////inventory
inventory:
    textcolor, 14);
	system("cls");
	gotoxy(50,10);
	cout<<"Quantity";
	gotoxy(30,5);
	cout<< "Inventory ";
    gotoxy(9,12);
	cout<<"Tropical Hut";
	gotoxy(9,18);
	cout<<"Minute Burger(Buy 1 take 1)";
	gotoxy(9,24);
	cout<<"Angels(Buy 1 take 1)";
	gotoxy(9,30);
	cout<<"Jollibee";
	gotoxy(9,35);
	cout<<"Extras";
	gotoxy(9,39);
	cout<<"Finish"<<endl;
	//Tropical Hut
	gotoxy(20,13);
	cout<<"Ranchero";
	  gotoxy(50,13);
	  cout<<mcdo[0][0];
	gotoxy(20,14);
	cout<<"Hawaiian";
	  gotoxy(50,14);
	  cout<<mcdo[1][0];
	gotoxy(20,15);
	cout<<"Classic";
	   gotoxy(50,15);
	   cout<<mcdo[2][0];
	gotoxy(20,16);
	cout<<"Cheese Burger";
	   gotoxy(50,16);
	   cout<<mcdo[3][0];
   //Minute Burger
	gotoxy(20,19);
	cout<<"Double Minute Burger";
	   gotoxy(50,19);
	   cout<<mb[0][0];
	gotoxy(20,20);
	cout<<"Cheese Burger";
	   gotoxy(50,20);
	   cout<<mb[1][0];
	gotoxy(20,21);
	cout<<"Hamburger";
	   gotoxy(50,21);
	   cout<<mb[2][0];

	//Angels
    gotoxy(20,25);
	cout<<"Hamburger";
	  gotoxy(50,25);
	  cout<<bm[0][0];
	gotoxy(20,26);
	cout<<"Hamburger w/ Cheese";
	gotoxy(50,26);
	  cout<<bm[1][0];
	//Jollibee
	gotoxy(20,31);
	cout<<"Champ";
	gotoxy(50,31);
	  cout<<jollibee[0][0];
	gotoxy(20,32);
	cout<<"Double Yum";
	gotoxy(50,32);
	  cout<<jollibee[1][0];
	gotoxy(20,33);
	cout<<"Double Yum w/ Cheese";
	gotoxy(50,33);
	  cout<<jollibee[2][0];
	gotoxy(20,34);
	cout<<"Yum";
	gotoxy(50,34);
	  cout<<jollibee[3][0];
	gotoxy(20,36);
	cout<<"Coleslaw";
	  gotoxy(50,36);
	  cout<<extras[0][0];
	gotoxy(20,37);
	cout<<"Cheese";
	gotoxy(50,37);
	  cout<<extras[1][0];
	gotoxy(20,38);
	cout<<"Extra Patty";
	gotoxy(50,38);
	  cout<<extras[2][0];
	  gotoxy(53,12);
	  if(aaa==0){
	origtp=mcdo[0][0]*mcdo[0][1]+mcdo[1][0]*mcdo[1][1]+mcdo[2][0]*mcdo[2][1]+mcdo[3][0]*mcdo[3][1]+mb[0][0]*mb[0][1]+mb[1][0]*mb[1][1]+mb[2][0]*mb[2][1]+bm[0][0]*bm[0][1]+bm[1][0]*bm[1][1]+extras[0][0]*extras[0][1]+extras[1][0]*extras[1][1]+extras[2][0]*extras[2][1];
	  }
	  cout<<"Original Total Price: "<<origtp;
	  gotoxy(53,14);
	  cout<<"Waste Product Price: "<<wasteprod;
	  gotoxy(53,16);
	  cout<<"Cash in Hand: "<<jm+dhie+bed_fighter+benjie+vic+flicks;
	  gotoxy(54,18);
	  cout<<"jm_rosendal :"<<jm;
	  gotoxy(54,19);
	  cout<<"dhie        :"<<dhie;
	  gotoxy(54,20);
	  cout<<"bed_fighter :"<<bed_fighter;
	  gotoxy(54,21);
	  cout<<"benjie      :"<<benjie;
	  gotoxy(54,22);
	  cout<<"flicks      :"<<flicks;
	  gotoxy(54,23);
	  cout<<"vic         :"<<vic;
	cout<<endl;
	textcolor, 14+128);
	gotoxy(3,12);
	cout<<"     ";
	gotoxy(3,18);
	cout<<"     ";
	gotoxy(3,24);
	cout<<"     ";
	gotoxy(3,30);
	cout<<"     ";
	gotoxy(3,35);
	cout<<"     ";
	gotoxy(3,39);
	cout<<"     ";
mcdo1:   textcolor, 1+128);
	gotoxy(3,12);
	cout<<"лл лл";
inpmcdo:
	cout<<endl;
    c=getch();
	switch(c){
	case 'w':
	case 'W': gotoxy(3,12);ctc(1);
		cout<<"     ";
		goto ifinish;break;
	case 'S':
	case 's': gotoxy(3,12);ctc(1);
		cout<<"     ";
		goto mb1;break;
	case '\r':
		




mcdob1:textcolor, 1);
		gotoxy(14,13);
		cout<<"лл лл";
inpmcdob1:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,13);ctc(1);
			cout<<"     ";
			goto mcdob4;break;
		case 's': gotoxy(14,13);ctc(1);
			cout<<"     ";
			goto mcdob2;break;
		case '\b': gotoxy(14,13);ctc(1);
			cout<<"     "; 
			goto inpmcdo;break;
		case '\r': gotoxy(10,43);cout<<"How many?";
			gotoxy(14,44);
			textcolor, 14+128);
			i=0;
			gotoxy(14,44);
			cout<<i;
inphmmcdob1:
			cout<<endl;
			c=getch();
			switch(c){
			case 'w': 
				gotoxy(14,44);
				cout<<"     ";
				gotoxy(14,44);
				i++;
				cout<<i;gotoxy(0,0);
				goto inphmmcdob1;break;
			case 's': if(i!=0){
				gotoxy(14,44);
				cout<<"      ";
				gotoxy(14,44);
				i--;
					  cout<<i;gotoxy(0,0);}
				gotoxy(0,0);
			goto inphmmcdob1;break;
			case '\r': mcdo[0][0]=i;
				      goto inventory;break;
		 default: gotoxy(0,0);goto inphmmcdob1;break;
		}
			break;
		default: gotoxy(0,0);goto inpmcdob1;break;
		}
mcdob2: textcolor, 1);
		gotoxy(14,14);
		cout<<"лл лл";
inpmcdob2:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,14);ctc(1);
			cout<<"     ";
			goto mcdob1;break;
		case 's': gotoxy(14,14);ctc(1);
			cout<<"     ";
			goto mcdob3;break;
			case '\b': gotoxy(14,14);ctc(1);
			cout<<"     ";goto inpmcdo;break;
			

	case '\r': gotoxy(10,43);cout<<"How many?";
			gotoxy(14,44);
			textcolor, 14+128);
			i=0;
			gotoxy(14,44);
			cout<<i;
inphmmcdob2:
			cout<<endl;
			c=getch();
			switch(c){
			case 'w': 
				gotoxy(14,44);
				cout<<"     ";
				gotoxy(14,44);
				i++;
				cout<<i;
				gotoxy(0,0);
				goto inphmmcdob2;break;
			case 's': if(i!=0){
				gotoxy(14,44);
				cout<<"      ";
				gotoxy(14,44);
				i--;
					  cout<<i;gotoxy(0,0);}
				gotoxy(0,0);
			goto inphmmcdob2;break;
			case '\r': mcdo[1][0]=i;
				      goto inventory;break;
		 default: gotoxy(0,0);goto inphmmcdob2;break;
		}
			break;






			default: gotoxy(0,0);goto inpmcdob2;break;
		}
mcdob3:textcolor, 1);
		gotoxy(14,15);
		cout<<"лл лл";
inpmcdob3:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,15);ctc(1);
			cout<<"     ";
			goto mcdob2;break;
		case 's': gotoxy(14,15);ctc(1);
			cout<<"     ";
			goto mcdob4;break;
			case '\b':  gotoxy(14,15);ctc(1);
			cout<<"     ";goto inpmcdo;break;



	case '\r': gotoxy(10,43);cout<<"How many?";
			gotoxy(14,44);
			textcolor, 14+128);
			i=0;
			gotoxy(14,44);
			cout<<i;
inphmmcdob3:
			cout<<endl;
			c=getch();
			switch(c){
			case 'w': 
				gotoxy(14,44);
				cout<<"     ";
				gotoxy(14,44);
				i++;
				cout<<i;
				gotoxy(0,0);
				goto inphmmcdob3;break;
			case 's': if(i!=0){
				gotoxy(14,44);
				cout<<"      ";
				gotoxy(14,44);
				i--;
					  cout<<i;gotoxy(0,0);}
				gotoxy(0,0);
			goto inphmmcdob2;break;
			case '\r': mcdo[2][0]=i;
				      goto inventory;break;
		 default: gotoxy(0,0);goto inphmmcdob3;break;
		}
			break;




			default: gotoxy(0,0);goto inpmcdob3;break;
		}
mcdob4:textcolor, 1);
		gotoxy(14,16);
		cout<<"лл лл";
inpmcdob4:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,16);ctc(1);
			cout<<"     ";
			goto mcdob3;break;
		case 's': gotoxy(14,16);ctc(1);
			cout<<"     ";
			goto mcdob1;break;
			case '\b': gotoxy(14,16);ctc(1);
			cout<<"     ";goto inpmcdo;break;
				case '\r': gotoxy(10,43);cout<<"How many?";
			gotoxy(14,44);
			textcolor, 14+128);
			i=0;
			gotoxy(14,44);
			cout<<i;
inphmmcdob4:
			cout<<endl;
			c=getch();
			switch(c){
			case 'w': 
				gotoxy(14,44);
				cout<<"     ";
				gotoxy(14,44);
				i++;
				cout<<i;
				gotoxy(0,0);
				goto inphmmcdob4;break;
			case 's': if(i!=0){
				gotoxy(14,44);
				cout<<"      ";
				gotoxy(14,44);
				i--;
		       cout<<i;gotoxy(0,0);}
				gotoxy(0,0);
			goto inphmmcdob2;break;
			case '\r': mcdo[3][0]=i;
				      goto inventory;break;
		 default: gotoxy(0,0);goto inphmmcdob4;break;
		}
			break;

			default: gotoxy(0,0);goto inpmcdob4;break;
		}




		break;
	default: gotoxy(0,0);
		goto inpmcdo;break;
	}
mb1:
	textcolor, 1+128);
	gotoxy(3,18);
	cout<<"лл лл";
inpmb:
      cout<<endl;
    c=getch();
	switch(c){
	case 'w':
	case 'W':gotoxy(3,18);ctc(1);
         cout<<"     ";
		goto mcdo1;break;
case 'S':
	case 's':gotoxy(3,18);ctc(1);
         cout<<"     ";
		goto bm1;break;
	case '\r':

    
mbb1:textcolor, 1);
		gotoxy(14,19);
		cout<<"лл лл";
inpmbb1:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,19);ctc(1);
			cout<<"     ";
			goto mbb3;break;
		case 's': gotoxy(14,19);ctc(1);
			cout<<"     ";
			goto mbb2;break;
		case '\b': gotoxy(14,19);ctc(1);
			cout<<"     "; 
			goto inpmb;break;
		case '\r':gotoxy(10,43);cout<<"How many?";
			gotoxy(14,44);
			textcolor, 14+128);
			i=0;
			gotoxy(14,44);
			cout<<i;
inphmmbb1:
			cout<<endl;
			c=getch();
			switch(c){
			case 'w': 
				gotoxy(14,44);
				cout<<"     ";
				gotoxy(14,44);
				i++;
				cout<<i;
				gotoxy(0,0);
				goto inphmmbb1;break;
			case 's': if(i!=0){
				gotoxy(14,44);
				cout<<"      ";
				gotoxy(14,44);
				i--;
					  cout<<i;gotoxy(0,0);}
				gotoxy(0,0);
			goto inphmmbb1;break;
			case '\r': mb[0][0]=i;
				      goto inventory;break;
		 default: gotoxy(0,0);goto inphmmbb1;break;
		}




			break;
		default: gotoxy(0,0);goto inpmbb1;break;
		}
mbb2: textcolor, 1);
		gotoxy(14,20);
		cout<<"лл лл";
inpmbb2:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,20);ctc(1);
			cout<<"     ";
			goto mbb1;break;
		case 's': gotoxy(14,20);ctc(1);
			cout<<"     ";
			goto mbb3;break;
			case '\b': gotoxy(14,20);ctc(1);
			cout<<"     ";goto inpmb;break;
			case '\r':
gotoxy(10,43);cout<<"How many?";
			gotoxy(14,44);
			textcolor, 14+128);
			i=0;
			gotoxy(14,44);
			cout<<i;
inphmmbb2:
			cout<<endl;
			c=getch();
			switch(c){
			case 'w': 
				gotoxy(14,44);
				cout<<"     ";
				gotoxy(14,44);
				i++;
				cout<<i;
				gotoxy(0,0);
				goto inphmmbb2;break;
			case 's': if(i!=0){
				gotoxy(14,44);
				cout<<"      ";
				gotoxy(14,44);
				i--;
					  cout<<i;gotoxy(0,0);}
				gotoxy(0,0);
			goto inphmmbb2;break;
			case '\r': mb[1][0]=i;
				      goto inventory;break;
		 default: gotoxy(0,0);goto inphmmbb2;break;
		}




			break;
			default: gotoxy(0,0);goto inpmbb2;break;
		}
mbb3:textcolor, 1);
		gotoxy(14,21);
		cout<<"лл лл";
inpmbb3:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,21);ctc(1);
			cout<<"     ";
			goto mbb2;break;
		case 's': gotoxy(14,21);ctc(1);
			cout<<"     ";
			goto mbb1;break;
			case '\b':  gotoxy(14,21);ctc(1);
			cout<<"     ";goto inpmb;break;
			case '\r':gotoxy(10,43);cout<<"How many?";
			gotoxy(14,44);
			textcolor, 14+128);
			i=0;
			gotoxy(14,44);
			cout<<i;
inphmmbb3:
			cout<<endl;
			c=getch();
			switch(c){
			case 'w': 
				gotoxy(14,44);
				cout<<"     ";
				gotoxy(14,44);
				i++;
				cout<<i;
				gotoxy(0,0);
				goto inphmmbb3;break;
			case 's': if(i!=0){
				gotoxy(14,44);
				cout<<"      ";
				gotoxy(14,44);
				i--;
					  cout<<i;gotoxy(0,0);}
				gotoxy(0,0);
			goto inphmmbb3;break;
			case '\r': mb[2][0]=i;
				      goto inventory;break;
		 default: gotoxy(0,0);goto inphmmbb3;break;
		}




			break;
			default: gotoxy(0,0);goto inpmbb3;break;
		}






		break;
	default: gotoxy(0,0);
		goto inpmb;break;
	}
bm1: 
    textcolor, 1+128);
	gotoxy(3,24);
	cout<<"лл лл";
inpbm:
      cout<<endl;
    c=getch();
	switch(c){
	case 'w':
	case 'W':gotoxy(3,24);ctc(1);
		cout<<"     ";
		goto mb1;break;
	case 'S':
	case 's':gotoxy(3,24);ctc(1);
	cout<<"     ";
		goto jollibee1;break;
		case '\r':



bmb1:textcolor, 1);
		gotoxy(14,25);
		cout<<"лл лл";
inpbmb1:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,25);ctc(1);
			cout<<"     ";
			goto bmb2;break;
		case 's': gotoxy(14,25);ctc(1);
			cout<<"     ";
			goto bmb2;break;
		case '\b': gotoxy(14,25);ctc(1);
			cout<<"     "; 
			goto inpbm;break;
		case '\r':
gotoxy(10,43);cout<<"How many?";
			gotoxy(14,44);
			textcolor, 14+128);
			i=0;
			gotoxy(14,44);
			cout<<i;
inphmbmb1:
			cout<<endl;
			c=getch();
			switch(c){
			case 'w': 
				gotoxy(14,44);
				cout<<"     ";
				gotoxy(14,44);
				i++;
				cout<<i;
				gotoxy(0,0);
				goto inphmbmb1;break;
			case 's': if(i!=0){
				gotoxy(14,44);
				cout<<"      ";
				gotoxy(14,44);
				i--;
					  cout<<i;gotoxy(0,0);}
				gotoxy(0,0);
			goto inphmbmb1;break;
			case '\r': bm[0][0]=i;
				      goto inventory;break;
		 default: gotoxy(0,0);goto inphmbmb1;break;
		}




			break;
		default: gotoxy(0,0);goto inpbmb1;break;
		}
bmb2: textcolor, 1);
		gotoxy(14,26);
		cout<<"лл лл";
inpbmb2:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,26);ctc(1);
			cout<<"     ";
			goto bmb1;break;
		case 's': gotoxy(14,26);ctc(1);
			cout<<"     ";
			goto bmb1;break;
			case '\b': gotoxy(14,26);ctc(1);
			cout<<"     ";goto inpbm;break;
			case '\r':
				
gotoxy(10,43);cout<<"How many?";
			gotoxy(14,44);
			textcolor, 14+128);
			i=0;
			gotoxy(14,44);
			cout<<i;
inphmbmb2:
			cout<<endl;
			c=getch();
			switch(c){
			case 'w': 
				gotoxy(14,44);
				cout<<"     ";
				gotoxy(14,44);
				i++;
				cout<<i;
				gotoxy(0,0);
				goto inphmbmb2;break;
			case 's': if(i!=0){
				gotoxy(14,44);
				cout<<"      ";
				gotoxy(14,44);
				i--;
					  cout<<i;gotoxy(0,0);}
				gotoxy(0,0);
			goto inphmbmb2;break;
			case '\r': bm[1][0]=i;
				      goto inventory;break;
		 default: gotoxy(0,0);goto inphmbmb2;break;
		}




			break;
			default: gotoxy(0,0);goto inpbmb2;break;
		}


			break;
	default: gotoxy(0,0);
		goto inpbm;break;
	}
jollibee1:
	textcolor, 1+128);
	gotoxy(3,30);
	cout<<"лл лл";
inpjollibee:
      cout<<endl;
    c=getch();
	switch(c){
	case 'w':
	case 'W':	gotoxy(3,30);ctc(1);
		cout<<"     ";
		goto bm1;break;
	case 'S':
	case 's':	gotoxy(3,30);ctc(1);
		cout<<"     ";
		goto extras;break;
	case '\r':


jollibeeb1:textcolor, 1);
		gotoxy(14,31);
		cout<<"лл лл";
inpjollibeeb1:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,31);ctc(1);
			cout<<"     ";
			goto jollibeeb4;break;
		case 's': gotoxy(14,31);ctc(1);
			cout<<"     ";
			goto jollibeeb2;break;
		case '\b': gotoxy(14,31);ctc(1);
			cout<<"     "; 
			goto inpjollibee;break;
		case '\r':
			
gotoxy(10,43);cout<<"How many?";
			gotoxy(14,44);
			textcolor, 14+128);
			i=0;
			gotoxy(14,44);
			cout<<i;
inphmjollibeeb1:
			cout<<endl;
			c=getch();
			switch(c){
			case 'w': 
				gotoxy(14,44);
				cout<<"     ";
				gotoxy(14,44);
				i++;
				cout<<i;
				gotoxy(0,0);
				goto inphmjollibeeb1;break;
			case 's': if(i!=0){
				gotoxy(14,44);
				cout<<"      ";
				gotoxy(14,44);
				i--;
					  cout<<i;gotoxy(0,0);}
				gotoxy(0,0);
			goto inphmjollibeeb1;break;
			case '\r': jollibee[0][0]=i;
				      goto inventory;break;
		 default: gotoxy(0,0);goto inphmjollibeeb1;break;
		}




			break;
		default: gotoxy(0,0);goto inpjollibeeb1;break;
		}
jollibeeb2: textcolor, 1);
		gotoxy(14,32);
		cout<<"лл лл";
inpjollibeeb2:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,32);ctc(1);
			cout<<"     ";
			goto jollibeeb1;break;
		case 's': gotoxy(14,32);ctc(1);
			cout<<"     ";
			goto jollibeeb3;break;
			case '\b': gotoxy(14,32);ctc(1);
			cout<<"     ";goto inpjollibee;break;
			case '\r':
				
gotoxy(10,43);cout<<"How many?";
			gotoxy(14,44);
			textcolor, 14+128);
			i=0;
			gotoxy(14,44);
			cout<<i;
inphmjollibeeb2:
			cout<<endl;
			c=getch();
			switch(c){
			case 'w': 
				gotoxy(14,44);
				cout<<"     ";
				gotoxy(14,44);
				i++;
				cout<<i;
				gotoxy(0,0);
				goto inphmjollibeeb2;break;
			case 's': if(i!=0){
				gotoxy(14,44);
				cout<<"      ";
				gotoxy(14,44);
				i--;
					  cout<<i;gotoxy(0,0);}
				gotoxy(0,0);
			goto inphmjollibeeb2;break;
			case '\r': jollibee[1][0]=i;
				      goto inventory;break;
		 default: gotoxy(0,0);goto inphmjollibeeb2;break;
		}




			break;
			default: gotoxy(0,0);goto inpjollibeeb2;break;
		}
jollibeeb3:textcolor, 1);
		gotoxy(14,33);
		cout<<"лл лл";
inpjollibeeb3:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,33);ctc(1);
			cout<<"     ";
			goto jollibeeb2;break;
		case 's': gotoxy(14,33);ctc(1);
			cout<<"     ";
			goto jollibeeb4;break;
			case '\b':  gotoxy(14,33);ctc(1);
			cout<<"     ";goto inpjollibee;break;
			case '\r':
				
gotoxy(10,43);cout<<"How many?";
			gotoxy(14,44);
			textcolor, 14+128);
			i=0;
			gotoxy(14,44);
			cout<<i;
inphmjollibeeb3:
			cout<<endl;
			c=getch();
			switch(c){
			case 'w': 
				gotoxy(14,44);
				cout<<"     ";
				gotoxy(14,44);
				i++;
				cout<<i;
				gotoxy(0,0);
				goto inphmjollibeeb3;break;
			case 's': if(i!=0){
				gotoxy(14,44);
				cout<<"      ";
				gotoxy(14,44);
				i--;
					  cout<<i;gotoxy(0,0);}
				gotoxy(0,0);
			goto inphmjollibeeb3;break;
			case '\r': jollibee[2][0]=i;
				      goto inventory;break;
		 default: gotoxy(0,0);goto inphmjollibeeb3;break;
		}




			break;
			default: gotoxy(0,0);goto inpjollibeeb3;break;
		}
jollibeeb4:textcolor, 1);
		gotoxy(14,34);
		cout<<"лл лл";
inpjollibeeb4:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,34);ctc(1);
			cout<<"     ";
			goto jollibeeb3;break;
		case 's': gotoxy(14,34);ctc(1);
			cout<<"     ";
			goto jollibeeb1;break;
			case '\b': gotoxy(14,34);ctc(1);
			cout<<"     ";goto inpjollibee;break;
			case '\r':
				
gotoxy(10,43);cout<<"How many?";
			gotoxy(14,44);
			textcolor, 14+128);
			i=0;
			gotoxy(14,44);
			cout<<i;
inphmjollibeeb4:
			cout<<endl;
			c=getch();
			switch(c){
			case 'w': 
				gotoxy(14,44);
				cout<<"     ";
				gotoxy(14,44);
				i++;
				cout<<i;
				gotoxy(0,0);
				goto inphmjollibeeb4;break;
			case 's': if(i!=0){
				gotoxy(14,44);
				cout<<"      ";
				gotoxy(14,44);
				i--;
					  cout<<i;gotoxy(0,0);}
				gotoxy(0,0);
			goto inphmjollibeeb4;break;
			case '\r': jollibee[3][0]=i;
				      goto inventory;break;
		 default: gotoxy(0,0);goto inphmjollibeeb4;break;
		}




			break;
			default: gotoxy(0,0);goto inpjollibeeb4;break;
		}


		break;
	default: gotoxy(0,0);
		goto inpjollibee;break;
	}
extras:	
	textcolor, 1+128);
	gotoxy(3,35);
	cout<<"лл лл";
inpextras:
	cout<<endl;
	c=getch();
	switch(c){
	case 'w':
	case 'W':	gotoxy(3,35);ctc(1);
		cout<<"     ";
		goto jollibee1;break;
	case 'S':
	case 's':	gotoxy(3,35);ctc(1);
		cout<<"     ";
		goto ifinish;break;
	case '\r':
     	
extrasb1:textcolor, 1);
		gotoxy(14,36);
		cout<<"лл лл";
inpextrasb1:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,36);ctc(1);
			cout<<"     ";
			goto extrasb3;break;
		case 's': gotoxy(14,36);ctc(1);
			cout<<"     ";
			goto extrasb2;break;
		case '\b': gotoxy(14,36);ctc(1);
			cout<<"     "; 
			goto inpextras;break;
		case '\r':
	
gotoxy(10,43);cout<<"How many?";
			gotoxy(14,44);
			textcolor, 14+128);
			i=0;
			gotoxy(14,44);
			cout<<i;
inphmextrasb1:
			cout<<endl;
			c=getch();
			switch(c){
			case 'w': 
				gotoxy(14,44);
				cout<<"     ";
				gotoxy(14,44);
				i++;
				cout<<i;
				gotoxy(0,0);
				goto inphmextrasb1;break;
			case 's': if(i!=0){
				gotoxy(14,44);
				cout<<"      ";
				gotoxy(14,44);
				i--;
					  cout<<i;gotoxy(0,0);}
				gotoxy(0,0);
			goto inphmextrasb1;break;
			case '\r': extras[0][0]=i;
				      goto inventory;break;
		 default: gotoxy(0,0);goto inphmextrasb1;break;
		}




			break;
		default: gotoxy(0,0);goto inpextrasb1;break;
		}
extrasb2: textcolor, 1);
		gotoxy(14,37);
		cout<<"лл лл";
inpextrasb2:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,37);ctc(1);
			cout<<"     ";
			goto extrasb1;break;
		case 's': gotoxy(14,37);ctc(1);
			cout<<"     ";
			goto extrasb3;break;
			case '\b': gotoxy(14,37);ctc(1);
			cout<<"     ";goto inpextras;break;
			case '\r':
				
gotoxy(10,43);cout<<"How many?";
			gotoxy(14,44);
			textcolor, 14+128);
			i=0;
			gotoxy(14,44);
			cout<<i;
inphmextrasb2:
			cout<<endl;
			c=getch();
			switch(c){
			case 'w': 
				gotoxy(14,44);
				cout<<"     ";
				gotoxy(14,44);
				i++;
				cout<<i;
				gotoxy(0,0);
				goto inphmextrasb2;break;
			case 's': if(i!=0){
				gotoxy(14,44);
				cout<<"      ";
				gotoxy(14,44);
				i--;
					  cout<<i;gotoxy(0,0);}
				gotoxy(0,0);
			goto inphmextrasb2;break;
			case '\r': extras[1][0]=i;
				      goto inventory;break;
		 default: gotoxy(0,0);goto inphmextrasb2;break;
		}




			break;
			default: gotoxy(0,0);goto inpextrasb2;break;
		}
extrasb3:textcolor, 1);
		gotoxy(14,38);
		cout<<"лл лл";
inpextrasb3:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,38);ctc(1);
			cout<<"     ";
			goto extrasb2;break;
		case 's': gotoxy(14,38);ctc(1);
			cout<<"     ";
			goto extrasb1;break;
			case '\b':  gotoxy(14,38);ctc(1);
			cout<<"     ";goto inpextras;break;
			case '\r':
gotoxy(10,43);cout<<"How many?";
			gotoxy(14,44);
			textcolor, 14+128);
			i=0;
			gotoxy(14,44);
			cout<<i;
inphmextrasb3:
			cout<<endl;
			c=getch();
			switch(c){
			case 'w': 
				gotoxy(14,44);
				cout<<"     ";
				gotoxy(14,44);
				i++;
				cout<<i;
				gotoxy(0,0);
				goto inphmextrasb3;break;
			case 's': if(i!=0){
				gotoxy(14,44);
				cout<<"      ";
				gotoxy(14,44);
				i--;
					  cout<<i;gotoxy(0,0);}
				gotoxy(0,0);
			goto inphmextrasb3;break;
			case '\r': extras[2][0]=i;
				      goto inventory;break;
		 default: gotoxy(0,0);goto inphmextrasb3;break;
		}




			break;
			default: gotoxy(0,0);goto inpextrasb3;break;
		}
				
		break;
	default: gotoxy(0,0);
		goto inpextras;break;
	}
ifinish:textcolor, 1+128);
		gotoxy(3,39);
		cout<<"лл лл";
inpifinish:
      cout<<endl;
	c=getch();
	switch(c){
	case 'w':
	case 'W':	gotoxy(3,39);ctc(1);
		cout<<"     ";
		goto extras;break;
	case 'S':
	case 's':	gotoxy(3,39);ctc(1);
		cout<<"     ";
		goto mcdo1;break;
	case '\r': aaa++;
           goto first;

    	break;
	default: gotoxy(0,0);
		goto inpifinish;break;
	}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////main2
main2:
    system("cls");
	textcolor, 14);
	gotoxy(22,14);
	cout<<"   Next Customer";
	gotoxy(22,16);
	cout<<"   Waste Products";
	gotoxy(22,18);
	cout<<"   Return & Exchange Products";
	gotoxy(22,20);
	cout<<"   Sign Out"<<endl;
nc:
	textcolor, 2);
	gotoxy(22,14);
	cout<<"-->";
inpnc:cout<<endl;
	  c=getch();
	  switch(c){
	  case 'w': gotoxy(22,14);cout<<"   ";goto so;break;
	  case 's': gotoxy(22,14);cout<<"   ";goto wp;break;
	  case '\r': mcdo[0][2]=0;
		         mcdo[0][2]=0;
				 mcdo[0][2]=0;
				 mcdo[0][2]=0;
				 mb[0][2]=0;
				 mb[0][2]=0;
				 mb[0][2]=0;
				 bm[0][2]=0;
				 bm[0][2]=0;
				 extras[0][2]=0;
				 extras[0][2]=0;
				 extras[0][2]=0;
				 total=0;
		  goto menu;break;
	  default: gotoxy(0,0); goto inpnc;break;}
wp:
		  gotoxy(22,16);
		  cout<<"-->";
inpwp:
		  cout<<endl;
		  c=getch();
		  switch(c){
		  case 'w': gotoxy(22,16);cout<<"   ";goto nc;break;
		  case 's': gotoxy(22,16);cout<<"   ";goto rep;break;
		  case '\r': goto wasteproducts;break;
		  default: gotoxy(0,0);goto inpwp;break;}
rep:
			  gotoxy(22,18);
			  cout<<"-->";
inprep:
			  cout<<endl;
			  c=getch();
			  switch(c){
			  case 'w': gotoxy(22,18);cout<<"   ";goto wp;break;
			  case 's': gotoxy(22,18);cout<<"   ";goto so;break;
			  case '\r': goto returnandexchangeproducts;break;
			  default: gotoxy(0,0);goto inprep;break;}
so:
				  gotoxy(22,20);
				  cout<<"-->";
inpso:
				  cout<<endl;
				  c=getch();
				  switch(c){
				  case 'w': gotoxy(22,20);cout<<"   ";goto rep;break;
			  case 's': gotoxy(22,20);cout<<"   ";goto nc;break;
			  case '\r': 
				  
		exso:gotoxy(15,40);
		cout<<"Sure?(Y/N): ";
		cout << endl;
		c=getch();
		switch(c){
		case 'Y':
		case 'y': goto soso;break;
		case 'n':
		case 'N': gotoxy(15,40);cout<<"                         ";goto inpso;break;
		default: gotoxy(0,0);goto exso;break;
		}
soso:                     if(strcmp(un,"jm")==0)
							  jm+=totalsales;
						  else if(strcmp(un,"dhie")==0)
							  dhie+=totalsales;
						  else if(strcmp(un,"bed_fighter")==0)
							  bed_fighter+=totalsales;
						  else if(strcmp(un,"benjie")==0)
							  benjie+=totalsales;
						  else if(strcmp(un,"vic")==0)
							  vic+=totalsales;
						  else if(strcmp(un,"flicks")==0)
							  flicks+=totalsales;
						  attempts=3;
				  goto first;break;
			  default: gotoxy(0,0);goto inpso;break;}
/////////////////////////////////////////////////////////////////////////////////////////////////////////menu
menu:
    textcolor, 14);
	system("cls");
 	gotoxy(50,5);
	cout<<"Total: "<<total;
	gotoxy(9,5);
	cout<<"New 4 in 1 Burger";
	gotoxy(9,6);
	cout<<"Total Sales of "<<un<<": "<<totalsales;
	border();
    gotoxy(9,12);
	cout<<"Tropical Hut";
	gotoxy(9,18);
	cout<<"Minute Burger(Buy 1 take 1)";
	gotoxy(9,24);
	cout<<"Angels(Buy 1 take 1)";
	gotoxy(9,30);
	cout<<"Jollibee";
	gotoxy(9,35);
	cout<<"Extras";
	gotoxy(9,39);
	cout<<"Cancel";
	gotoxy(9,40);
	cout<<"Finish"<<endl;
	//Tropical Hut
	gotoxy(20,13);
	cout<<"Ranchero";
	  gotoxy(50,13);
	  cout<<"Php "<<mcdo[0][1];
	gotoxy(20,14);
	cout<<"Hawaiian";
	  gotoxy(50,14);
	  cout<<"Php "<<mcdo[1][1];
	gotoxy(20,15);
	cout<<"Classic";
	   gotoxy(50,15);
	   cout<<"Php "<<mcdo[2][1];
	gotoxy(20,16);
	cout<<"Cheese Burger";
	   gotoxy(50,16);
	   cout<<"Php "<<mcdo[3][1];
   //Minute Burger
	gotoxy(20,19);
	cout<<"Double Minute Burger";
	   gotoxy(50,19);
	   cout<<"Php "<<mb[0][1];
	gotoxy(20,20);
	cout<<"Cheese Burger";
	   gotoxy(50,20);
	   cout<<"Php "<<mb[1][1];
	gotoxy(20,21);
	cout<<"Hamburger";
	   gotoxy(50,21);
	   cout<<"Php "<<mb[2][1];

	//Angels
    gotoxy(20,25);
	cout<<"Hamburger";
	gotoxy(50,25);
	   cout<<"Php "<<bm[0][1];
	gotoxy(20,26);
	cout<<"Hamburger w/ Cheese";
	gotoxy(50,26);
	   cout<<"Php "<<bm[1][1];
	//Jollibee
	gotoxy(20,31);
	cout<<"Champ";
	gotoxy(50,31);
	   cout<<"Php "<<jollibee[0][1];
	gotoxy(20,32);
	cout<<"Double Yum";
	gotoxy(50,32);
	   cout<<"Php "<<jollibee[1][1];
	gotoxy(20,33);
	cout<<"Double Yum w/ Cheese";
	gotoxy(50,33);
	   cout<<"Php "<<jollibee[2][1];
	gotoxy(20,34);
	cout<<"Yum";
	gotoxy(50,34);
	   cout<<"Php "<<jollibee[3][1];
	gotoxy(20,36);
	cout<<"Ice Tea";
	gotoxy(50,36);
	   cout<<"Php "<<extras[0][1];
	gotoxy(20,37);
	cout<<"Cheese";
		gotoxy(50,37);
	   cout<<"Php "<<extras[1][1];
	gotoxy(20,38);
	cout<<"Extra Patty";
		gotoxy(50,38);
	   cout<<"Php "<<extras[2][1];
	cout<<endl;
	textcolor, 14+128);
	gotoxy(3,12);
	cout<<"     ";
	gotoxy(3,18);
	cout<<"     ";
	gotoxy(3,24);
	cout<<"     ";
	gotoxy(3,30);
	cout<<"     ";
	gotoxy(3,35);
	cout<<"     ";
	gotoxy(3,39);
	cout<<"     ";
	gotoxy(3,40);
	cout<<"     ";
mmcdo1:   textcolor, 1+128);
	gotoxy(3,12);
	cout<<"лл лл";
minpmcdo:
	cout<<endl;
    c=getch();
	switch(c){
	case 'w':
	case 'W': gotoxy(3,12);ctc(1);
		cout<<"     ";
		goto mifinish;break;
	case 'S':
	case 's': gotoxy(3,12);ctc(1);
		cout<<"     ";
		goto mmb1;break;
	case '\r':
		




mmcdob1:textcolor, 1);
		gotoxy(14,13);
		cout<<"лл лл";
minpmcdob1:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,13);ctc(1);
			cout<<"     ";
			goto mmcdob4;break;
		case 's': gotoxy(14,13);ctc(1);
			cout<<"     ";
			goto mmcdob2;break;
		case '\b': gotoxy(14,13);ctc(1);
			cout<<"     "; 
			goto minpmcdo;break;
		case '\r':  price=mcdo[0][1];qtyprod=mcdo[0][0];
			        xxx=Qty(qtyprod);
					if(xxx==0)
						goto minpmcdob1;
					else{
						mcdo[0][2]+=xxx;
						textcolor, 14);
                        mcdo[0][0]-=xxx;
						total+=(price*xxx);
						gotoxy(50,5);
						goto menu;
					}
                  


          break;
		default: gotoxy(0,0);goto minpmcdob1;break;
		}
mmcdob2: textcolor, 1);
		gotoxy(14,14);
		cout<<"лл лл";
minpmcdob2:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,14);ctc(1);
			cout<<"     ";
			goto mmcdob1;break;
		case 's': gotoxy(14,14);ctc(1);
			cout<<"     ";
			goto mmcdob3;break;
			case '\b': gotoxy(14,14);ctc(1);
			cout<<"     ";goto minpmcdo;break;
			

	case '\r': price=mcdo[1][1];qtyprod=mcdo[1][0];
			        xxx=Qty(qtyprod);
					if(xxx==0)
						goto minpmcdob2;
					else{
						mcdo[1][2]+=xxx;
						textcolor, 14);
                        mcdo[1][0]-=xxx;
						total+=(price*xxx);
						gotoxy(50,5);
						goto menu;
					}
                  


          break;




		
			default: gotoxy(0,0);goto minpmcdob2;break;
		}
mmcdob3:textcolor, 1);
		gotoxy(14,15);
		cout<<"лл лл";
minpmcdob3:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,15);ctc(1);
			cout<<"     ";
			goto mmcdob2;break;
		case 's': gotoxy(14,15);ctc(1);
			cout<<"     ";
			goto mmcdob4;break;
			case '\b':  gotoxy(14,15);ctc(1);
			cout<<"     ";goto minpmcdo;break;



	case '\r':price=mcdo[2][1];qtyprod=mcdo[2][0];
			        xxx=Qty(qtyprod);
					if(xxx==0)
						goto minpmcdob3;
					else{
						mcdo[2][2]+=xxx;
						textcolor, 14);
                        mcdo[2][0]-=xxx;
						total+=(price*xxx);
						gotoxy(50,5);
						goto menu;
					}
                  


          break;






		
			default: gotoxy(0,0);goto minpmcdob3;break;
		}
mmcdob4:textcolor, 1);
		gotoxy(14,16);
		cout<<"лл лл";
minpmcdob4:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,16);ctc(1);
			cout<<"     ";
			goto mmcdob3;break;
		case 's': gotoxy(14,16);ctc(1);
			cout<<"     ";
			goto mmcdob1;break;
			case '\b': gotoxy(14,16);ctc(1);
			cout<<"     ";goto minpmcdo;break;
	case '\r':price=mcdo[3][1];qtyprod=mcdo[3][0];
			        xxx=Qty(qtyprod);
					if(xxx==0)
						goto minpmcdob4;
					else{
						mcdo[3][2]+=xxx;
						textcolor, 14);
                        mcdo[3][0]-=xxx;
						total+=(price*xxx);
						gotoxy(50,5);
						goto menu;
					}
                  


          break;







		
			default: gotoxy(0,0);goto minpmcdob4;break;
		}




		break;
	default: gotoxy(0,0);
		goto minpmcdo;break;
	}
mmb1:
	textcolor, 1+128);
	gotoxy(3,18);
	cout<<"лл лл";
minpmb:
      cout<<endl;
    c=getch();
	switch(c){
	case 'w':
	case 'W':gotoxy(3,18);ctc(1);
         cout<<"     ";
		goto mmcdo1;break;
case 'S':
	case 's':gotoxy(3,18);ctc(1);
         cout<<"     ";
		goto mbm1;break;
	case '\r':

    
mmbb1:textcolor, 1);
		gotoxy(14,19);
		cout<<"лл лл";
minpmbb1:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,19);ctc(1);
			cout<<"     ";
			goto mmbb3;break;
		case 's': gotoxy(14,19);ctc(1);
			cout<<"     ";
			goto mmbb2;break;
		case '\b': gotoxy(14,19);ctc(1);
			cout<<"     "; 
		case '\r':price=mb[0][1];qtyprod=mb[0][0];
			        xxx=Qty(qtyprod);
					if(xxx==0)
						goto minpmbb1;
					else{
						mb[0][2]+=xxx;
						textcolor, 14);
                        mb[0][0]-=xxx;
						total+=(price*xxx);
						gotoxy(50,5);
						goto menu;
					}
                  


          break;

			goto minpmb;break;
		default: gotoxy(0,0);goto minpmbb1;break;
		}
mmbb2: textcolor, 1);
		gotoxy(14,20);
		cout<<"лл лл";
minpmbb2:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,20);ctc(1);
			cout<<"     ";
			goto mmbb1;break;
		case 's': gotoxy(14,20);ctc(1);
			cout<<"     ";
			goto mmbb3;break;
			case '\b': gotoxy(14,20);ctc(1);
			cout<<"     ";goto minpmb;break;
			case '\r':price=mb[1][1];qtyprod=mb[1][0];
			        xxx=Qty(qtyprod);
					if(xxx==0)
						goto minpmbb2;
					else{
						mb[1][2]+=xxx;
						textcolor, 14);
                        mb[1][0]-=xxx;
						total+=(price*xxx);
						gotoxy(50,5);
						goto menu;
					}
                  


          break;
			default: gotoxy(0,0);goto minpmbb2;break;
		}
mmbb3:textcolor, 1);
		gotoxy(14,21);
		cout<<"лл лл";
minpmbb3:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,21);ctc(1);
			cout<<"     ";
			goto mmbb2;break;
		case 's': gotoxy(14,21);ctc(1);
			cout<<"     ";
			goto mmbb1;break;
			case '\b':  gotoxy(14,21);ctc(1);
			cout<<"     ";goto minpmb;break;
			case '\r':price=mb[2][1];qtyprod=mb[2][0];
			        xxx=Qty(qtyprod);
					if(xxx==0)
						goto minpmbb3;
					else{
						mb[2][2]+=xxx;
						textcolor, 14);
                        mb[2][0]-=xxx;
						total+=(price*xxx);
						gotoxy(50,5);
						goto menu;
					}
                  


          break;
			default: gotoxy(0,0);goto minpmbb3;break;
		}






		break;
	default: gotoxy(0,0);
		goto minpmb;break;
	}
mbm1: 
    textcolor, 1+128);
	gotoxy(3,24);
	cout<<"лл лл";
minpbm:
      cout<<endl;
    c=getch();
	switch(c){
	case 'w':
	case 'W':gotoxy(3,24);ctc(1);
		cout<<"     ";
		goto mmb1;break;
	case 'S':
	case 's':gotoxy(3,24);ctc(1);
	cout<<"     ";
		goto mjollibee1;break;
		case '\r':



mbmb1:textcolor, 1);
		gotoxy(14,25);
		cout<<"лл лл";
minpbmb1:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,25);ctc(1);
			cout<<"     ";
			goto mbmb2;break;
		case 's': gotoxy(14,25);ctc(1);
			cout<<"     ";
			goto mbmb2;break;
		case '\b': gotoxy(14,25);ctc(1);
			cout<<"     "; 
			goto minpbm;break;
		case '\r':price=bm[0][1];qtyprod=bm[0][0];
			        xxx=Qty(qtyprod);
					if(xxx==0)
						goto minpbmb1;
					else{
						bm[0][2]+=xxx;
						textcolor, 14);
                        bm[0][0]-=xxx;
						total+=(price*xxx);
						gotoxy(50,5);
						goto menu;
					}
                  


          break;
		default: gotoxy(0,0);goto minpbmb1;break;
		}
mbmb2: textcolor, 1);
		gotoxy(14,26);
		cout<<"лл лл";
minpbmb2:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,26);ctc(1);
			cout<<"     ";
			goto mbmb1;break;
		case 's': gotoxy(14,26);ctc(1);
			cout<<"     ";
			goto mbmb1;break;
			case '\b': gotoxy(14,26);ctc(1);
			cout<<"     ";goto minpbm;break;
			case '\r':price=bm[1][1];qtyprod=bm[1][0];
			        xxx=Qty(qtyprod);
					if(xxx==0)
						goto minpbmb2;
					else{
						bm[1][2]+=xxx;
						textcolor, 14);
                        bm[1][0]-=xxx;
						total+=(price*xxx);
						gotoxy(50,5);
						goto menu;
					}
                  


          break;
			default: gotoxy(0,0);goto minpbmb2;break;
		}


			break;
	default: gotoxy(0,0);
		goto minpbm;break;
	}
mjollibee1:
	textcolor, 1+128);
	gotoxy(3,30);
	cout<<"лл лл";
minpjollibee:
      cout<<endl;
    c=getch();
	switch(c){
	case 'w':
	case 'W':	gotoxy(3,30);ctc(1);
		cout<<"     ";
		goto mbm1;break;
	case 'S':
	case 's':	gotoxy(3,30);ctc(1);
		cout<<"     ";
		goto mextras;break;
	case '\r':


mjollibeeb1:textcolor, 1);
		gotoxy(14,31);
		cout<<"лл лл";
minpjollibeeb1:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,31);ctc(1);
			cout<<"     ";
			goto mjollibeeb4;break;
		case 's': gotoxy(14,31);ctc(1);
			cout<<"     ";
			goto mjollibeeb2;break;
		case '\b': gotoxy(14,31);ctc(1);
			cout<<"     "; 
			goto minpjollibee;break;
		case '\r':price=jollibee[0][1];qtyprod=jollibee[0][0];
			        xxx=Qty(qtyprod);
					if(xxx==0)
						goto minpjollibeeb1;
					else{
						jollibee[0][2]+=xxx;
						textcolor, 14);
                        jollibee[0][0]-=xxx;
						total+=(price*xxx);
						gotoxy(50,5);
						goto menu;
					}
                  


          break;
		default: gotoxy(0,0);goto minpjollibeeb1;break;
		}
mjollibeeb2: textcolor, 1);
		gotoxy(14,32);
		cout<<"лл лл";
minpjollibeeb2:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,32);ctc(1);
			cout<<"     ";
			goto mjollibeeb1;break;
		case 's': gotoxy(14,32);ctc(1);
			cout<<"     ";
			goto mjollibeeb3;break;
			case '\b': gotoxy(14,32);ctc(1);
			cout<<"     ";goto minpjollibee;break;
			case '\r':price=jollibee[1][1];qtyprod=jollibee[1][0];
			        xxx=Qty(qtyprod);
					if(xxx==0)
						goto minpjollibeeb2;
					else{
						jollibee[1][2]+=xxx;
						textcolor, 14);
                        jollibee[1][0]-=xxx;
						total+=(price*xxx);
						gotoxy(50,5);
						goto menu;
					}
                  


          break;
			default: gotoxy(0,0);goto minpjollibeeb2;break;
		}
mjollibeeb3:textcolor, 1);
		gotoxy(14,33);
		cout<<"лл лл";
minpjollibeeb3:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,33);ctc(1);
			cout<<"     ";
			goto mjollibeeb2;break;
		case 's': gotoxy(14,33);ctc(1);
			cout<<"     ";
			goto mjollibeeb4;break;
			case '\b':  gotoxy(14,33);ctc(1);
			cout<<"     ";goto minpjollibee;break;
			case '\r':price=jollibee[2][1];qtyprod=jollibee[2][0];
			        xxx=Qty(qtyprod);
					if(xxx==0)
						goto minpjollibeeb3;
					else{
						jollibee[2][2]+=xxx;
						textcolor, 14);
                        jollibee[2][0]-=xxx;
						total+=(price*xxx);
						gotoxy(50,5);
						goto menu;
					}
                  


          break;
			default: gotoxy(0,0);goto minpjollibeeb3;break;
		}
mjollibeeb4:textcolor, 1);
		gotoxy(14,34);
		cout<<"лл лл";
minpjollibeeb4:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,34);ctc(1);
			cout<<"     ";
			goto mjollibeeb3;break;
		case 's': gotoxy(14,34);ctc(1);
			cout<<"     ";
			goto mjollibeeb1;break;
			case '\b': gotoxy(14,34);ctc(1);
			cout<<"     ";goto minpjollibee;break;
			case '\r':price=jollibee[3][1];qtyprod=jollibee[3][0];
			        xxx=Qty(qtyprod);
					if(xxx==0)
						goto minpjollibeeb4;
					else{
						jollibee[3][2]+=xxx;
						textcolor, 14);
                        jollibee[3][0]-=xxx;
						total+=(price*xxx);
						gotoxy(50,5);
						goto menu;
					}
                  


          break;
			default: gotoxy(0,0);goto minpjollibeeb4;break;
		}


		break;
	default: gotoxy(0,0);
		goto minpjollibee;break;
	}
mextras:	
	textcolor, 1+128);
	gotoxy(3,35);
	cout<<"лл лл";
minpextras:
	cout<<endl;
	c=getch();
	switch(c){
	case 'w':
	case 'W':	gotoxy(3,35);ctc(1);
		cout<<"     ";
		goto mjollibee1;break;
	case 'S':
	case 's':	gotoxy(3,35);ctc(1);
		cout<<"     ";
		goto mcancel;break;
	case '\r':
     	
mextrasb1:textcolor, 1);
		gotoxy(14,36);
		cout<<"лл лл";
minpextrasb1:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,36);ctc(1);
			cout<<"     ";
			goto mextrasb3;break;
		case 's': gotoxy(14,36);ctc(1);
			cout<<"     ";
			goto mextrasb2;break;
		case '\b': gotoxy(14,36);ctc(1);
			cout<<"     "; 
			goto minpextras;break;
		case '\r':price=extras[0][1];qtyprod=extras[0][0];
			        xxx=Qty(qtyprod);
					if(xxx==0)
						goto minpextrasb1;
					else{
						extras[0][2]+=xxx;
						textcolor, 14);
                        extras[0][0]-=xxx;
						total+=(price*xxx);
						gotoxy(50,5);
						goto menu;
					}
                  


          break;
		default: gotoxy(0,0);goto minpextrasb1;break;
		}
mextrasb2: textcolor, 1);
		gotoxy(14,37);
		cout<<"лл лл";
minpextrasb2:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,37);ctc(1);
			cout<<"     ";
			goto mextrasb1;break;
		case 's': gotoxy(14,37);ctc(1);
			cout<<"     ";
			goto mextrasb3;break;
			case '\b': gotoxy(14,37);ctc(1);
			cout<<"     ";goto minpextras;break;
			case '\r':price=extras[1][1];qtyprod=extras[1][0];
			        xxx=Qty(qtyprod);
					if(xxx==0)
						goto minpextrasb2;
					else{
						extras[1][2]+=xxx;
						textcolor, 14);
                        extras[1][0]-=xxx;
						total+=(price*xxx);
						gotoxy(50,5);
						goto menu;
					}
                  


          break;
			default: gotoxy(0,0);goto minpextrasb2;break;
		}
mextrasb3:textcolor, 1);
		gotoxy(14,38);
		cout<<"лл лл";
minpextrasb3:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,38);ctc(1);
			cout<<"     ";
			goto mextrasb2;break;
		case 's': gotoxy(14,38);ctc(1);
			cout<<"     ";
			goto mextrasb1;break;
			case '\b':  gotoxy(14,38);ctc(1);
			cout<<"     ";goto minpextras;break;
			case '\r':price=extras[2][1];qtyprod=extras[2][0];
			        xxx=Qty(qtyprod);
					if(xxx==0)
						goto minpextrasb3;
					else{
						extras[2][2]+=xxx;
						textcolor, 14);
                        extras[2][0]-=xxx;
						total+=(price*xxx);
						gotoxy(50,5);
						goto menu;
					}
                  


          break;
			default: gotoxy(0,0);goto minpextrasb3;break;
		}
				
		break;
	default: gotoxy(0,0);
		goto minpextras;break;
	}
mcancel:
      textcolor, 1+128);
		gotoxy(3,39);
		cout<<"лл лл";
minpcancel:
      cout<<endl;
	c=getch();
	switch(c){
	case 'w':
	case 'W':	gotoxy(3,39);ctc(1);
		cout<<"     ";
		goto mextras;break;
	case 'S':
	case 's':	gotoxy(3,39);ctc(1);
		cout<<"     ";
		goto mifinish;break;
	case '\r': ctc(1);
		gotoxy(33,44);cout<<"                                                                                    ";
		gotoxy(33,45);cout<<"                                                                                    ";
	gotoxy(33,44); cout<<"enter password: ";
		a=0;
	do{
		if(a>0){
            gotoxy(48+a,44);
			cout<<"*";
		}
		cout<<endl;
		na[a]=getch();
		a++;
	}while(na[a-1]!='\r');
	if(na[0]=='l'&&na[1]=='o'&&na[2]=='w'&&na[3]=='e'&&na[4]=='s'&&na[5]=='t'&&na[6]=='\r'){
		cout<<"\nPassword Accepted..";cout<<endl;getch();
		goto cancel;}
	else{
		cout<<"Invalid Password!"<<endl;getch();
		gotoxy(33,44);cout<<"                                                                            ";
		gotoxy(33,45);cout<<"                                                            "<<endl;goto minpcancel;}
	break;
	default: gotoxy(0,0); goto minpcancel;break;
	}
	
mifinish:textcolor, 1+128);
		gotoxy(3,40);
		cout<<"лл лл";
minpifinish:
      cout<<endl;
	c=getch();
	switch(c){
	case 'w':
	case 'W':	gotoxy(3,40);ctc(1);
		cout<<"     ";
		goto mcancel;break;
	case 'S':
	case 's':	gotoxy(3,40);ctc(1);
		cout<<"     ";
		goto mmcdo1;break;
	case '\r': textcolor, 2);
inin: gotoxy(12,47);  cout<<"Is the customer is Senior?(Y/N): ";
 cout<<endl;
	  c=getch();
		switch(c){
		case 'n':
		case 'N': break;
		case 'y':
		case 'Y': discount=total*0.10;
			total-=discount;
			wasteprod+=discount;break;
		default: gotoxy(0,0);goto inin;break;
		}
		gotoxy(12,47);
		cout<<"                                           ";
inpcash: textcolor, 2);
		gotoxy(12,47); 
		 cout<<"Input Cash: ";
		 	cout<<endl;
			gotoxy(24,47);
		gets(str);
		cash=atof(str);
		if(cash<total){
			gotoxy(15,48);
		cout<<"Invalid";cout<<endl;getch();goto menu;}
		gotoxy(50,6);
		cout<<"Cash: "<<cash;
		totalsales+=total;
		change=cash-total;
		gotoxy(50,7);
		cout<<"Change: "<<change;
		cout<<endl;
		getch();
		goto main2;	break;
	default: gotoxy(0,0);
		goto minpifinish;break;
	}
////////////////////////////////////////////////////////////////////////////////////////////////////cancel
cancel:
    
    textcolor, 14);
	system("cls");
		gotoxy(9,5);
	cout<<"New 4 in 1 Burger";
	gotoxy(44,5);
	cout<<"Products That may Cancel";
    gotoxy(9,12);
	cout<<"Tropical Hut";
	gotoxy(9,18);
	cout<<"Minute Burger(Buy 1 take 1)";
	gotoxy(9,24);
	cout<<"Angels(Buy 1 take 1)";
	gotoxy(9,30);
	cout<<"Jollibee";
	gotoxy(9,35);
	cout<<"Extras";
	gotoxy(9,39);
	cout<<"Finish"<<endl;
	//Tropical Hut
	gotoxy(20,13);
	cout<<"Ranchero";
	  gotoxy(50,13);
	  cout<<mcdo[0][2];
	gotoxy(20,14);
	cout<<"Hawaiian";
	  gotoxy(50,14);
	  cout<<mcdo[1][2];
	gotoxy(20,15);
	cout<<"Classic";
	   gotoxy(50,15);
	   cout<<mcdo[2][2];
	gotoxy(20,16);
	cout<<"Cheese Burger";
	   gotoxy(50,16);
	   cout<<mcdo[3][2];
   //Minute Burger
	gotoxy(20,19);
	cout<<"Double Minute Burger";
	   gotoxy(50,19);
	   cout<<mb[0][2];
	gotoxy(20,20);
	cout<<"Cheese Burger";
	   gotoxy(50,20);
	   cout<<mb[1][2];
	gotoxy(20,21);
	cout<<"Hamburger";
	   gotoxy(50,21);
	   cout<<mb[2][2];

	//Angels
    gotoxy(20,25);
	cout<<"Hamburger";
	gotoxy(50,25);
	cout<<bm[0][2];
	gotoxy(20,26);
	cout<<"Hamburger w/ Cheese";
	gotoxy(50,26);
	cout<<bm[1][2];
	//Jollibee
	gotoxy(20,31);
	cout<<"Champ";
	gotoxy(50,31);
	cout<<jollibee[0][2];
	gotoxy(20,32);
	cout<<"Double Yum";
		gotoxy(50,32);
	cout<<jollibee[1][2];
	gotoxy(20,33);
	cout<<"Double Yum w/ Cheese";
		gotoxy(50,33);
	cout<<jollibee[2][2];
	gotoxy(20,34);
	cout<<"Yum";
		gotoxy(50,34);
	cout<<jollibee[3][2];
	gotoxy(20,36);
	cout<<"Ice Tea";
		gotoxy(50,36);
	cout<<extras[0][2];
	gotoxy(20,37);
	cout<<"Cheese";
	gotoxy(50,37);
	cout<<extras[1][2];
	gotoxy(20,38);
	cout<<"Extra Patty";
	gotoxy(50,38);
	cout<<extras[2][2];
	cout<<endl;
	textcolor, 14+128);
	gotoxy(3,12);
	cout<<"     ";
	gotoxy(3,18);
	cout<<"     ";
	gotoxy(3,24);
	cout<<"     ";
	gotoxy(3,30);
	cout<<"     ";
	gotoxy(3,35);
	cout<<"     ";
	gotoxy(3,39);
	cout<<"     ";
cmmcdo1:   textcolor, 1+128);
	gotoxy(3,12);
	cout<<"лл лл";
cminpmcdo:
	cout<<endl;
    c=getch();
	switch(c){
	case 'w':
	case 'W': gotoxy(3,12);ctc(1);
		cout<<"     ";
		goto cmifinish;break;
	case 'S':
	case 's': gotoxy(3,12);ctc(1);
		cout<<"     ";
		goto cmmb1;break;
	case '\r':
		




cmmcdob1:textcolor, 1);
		gotoxy(14,13);
		cout<<"лл лл";
cminpmcdob1:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,13);ctc(1);
			cout<<"     ";
			goto cmmcdob4;break;
		case 's': gotoxy(14,13);ctc(1);
			cout<<"     ";
			goto cmmcdob2;break;
		case '\b': gotoxy(14,13);ctc(1);
			cout<<"     "; 
			goto cminpmcdo;break;
		case '\r':xx=mcdo[0][2];
			xxx=Qty(xx);
			if(xxx==0)
                 goto cminpmcdob1;
			else{
				mcdo[0][0]+=xxx;
				mcdo[0][2]-=xxx;
				total-=mcdo[0][1]*xxx;
				gotoxy(50,5);
				cout<<"Total: "<<total;
				goto cancel;}
            break;


		
		default: gotoxy(0,0);goto cminpmcdob1;break;
		}
cmmcdob2: textcolor, 1);
		gotoxy(14,14);
		cout<<"лл лл";
cminpmcdob2:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,14);ctc(1);
			cout<<"     ";
			goto cmmcdob1;break;
		case 's': gotoxy(14,14);ctc(1);
			cout<<"     ";
			goto cmmcdob3;break;
			case '\b': gotoxy(14,14);ctc(1);
			cout<<"     ";goto cminpmcdo;break;
			

	case '\r': xx=mcdo[1][2];
			xxx=Qty(xx);
			if(xxx==0)
                 goto cminpmcdob2;
			else{
				mcdo[1][0]+=xxx;
				mcdo[1][2]-=xxx;
				total-=mcdo[1][1]*xxx;
				gotoxy(50,5);
				cout<<"Total: "<<total;
				goto cancel;}
            break;






	
			default: gotoxy(0,0);goto cminpmcdob2;break;
		}
cmmcdob3:textcolor, 1);
		gotoxy(14,15);
		cout<<"лл лл";
cminpmcdob3:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,15);ctc(1);
			cout<<"     ";
			goto cmmcdob2;break;
		case 's': gotoxy(14,15);ctc(1);
			cout<<"     ";
			goto cmmcdob4;break;
			case '\b':  gotoxy(14,15);ctc(1);
			cout<<"     ";goto cminpmcdo;break;



	case '\r':xx=mcdo[2][2];
			xxx=Qty(xx);
			if(xxx==0)
                 goto cminpmcdob3;
			else{
				mcdo[2][0]+=xxx;
				mcdo[2][2]-=xxx;
				total-=mcdo[2][1]*xxx;
				gotoxy(50,5);
				cout<<"Total: "<<total;
				goto cancel;}
            break;








		
			default: gotoxy(0,0);goto cminpmcdob3;break;
		}
cmmcdob4:textcolor, 1);
		gotoxy(14,16);
		cout<<"лл лл";
cminpmcdob4:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,16);ctc(1);
			cout<<"     ";
			goto cmmcdob3;break;
		case 's': gotoxy(14,16);ctc(1);
			cout<<"     ";
			goto cmmcdob1;break;
			case '\b': gotoxy(14,16);ctc(1);
			cout<<"     ";goto cminpmcdo;break;
	case '\r':xx=mcdo[3][2];
			xxx=Qty(xx);
			if(xxx==0)
                 goto cminpmcdob4;
			else{
				mcdo[3][0]+=xxx;
				mcdo[3][2]-=xxx;
				total-=mcdo[3][1]*xxx;
				gotoxy(50,5);
				cout<<"Total: "<<total;
				goto cancel;}
            break;









	
			default: gotoxy(0,0);goto cminpmcdob4;break;
		}




		break;
	default: gotoxy(0,0);
		goto cminpmcdo;break;
	}
cmmb1:
	textcolor, 1+128);
	gotoxy(3,18);
	cout<<"лл лл";
cminpmb:
      cout<<endl;
    c=getch();
	switch(c){
	case 'w':
	case 'W':gotoxy(3,18);ctc(1);
         cout<<"     ";
		goto cmmcdo1;break;
case 'S':
	case 's':gotoxy(3,18);ctc(1);
         cout<<"     ";
		goto cmbm1;break;
	case '\r':
   
cmmbb1:textcolor, 1);
		gotoxy(14,19);
		cout<<"лл лл";
cminpmbb1:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,19);ctc(1);
			cout<<"     ";
			goto cmmbb3;break;
		case 's': gotoxy(14,19);ctc(1);
			cout<<"     ";
			goto cmmbb2;break;
		case '\b': gotoxy(14,19);ctc(1);
			cout<<"     "; 
			goto cminpmb;break;
		case '\r':xx=mb[0][2];
			xxx=Qty(xx);
			if(xxx==0)
                 goto cminpmbb1;
			else{
				mb[0][0]+=xxx;
				mb[0][2]-=xxx;
				total-=mb[0][1]*xxx;
				gotoxy(50,5);
				cout<<"Total: "<<total;
				goto cancel;}
            break;
		default: gotoxy(0,0);goto cminpmbb1;break;
		}
cmmbb2: textcolor, 1);
		gotoxy(14,20);
		cout<<"лл лл";
cminpmbb2:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,20);ctc(1);
			cout<<"     ";
			goto cmmbb1;break;
		case 's': gotoxy(14,20);ctc(1);
			cout<<"     ";
			goto cmmbb3;break;
			case '\b': gotoxy(14,20);ctc(1);
			cout<<"     ";goto cminpmb;break;
			case '\r':xx=mb[1][2];
			xxx=Qty(xx);
			if(xxx==0)
                 goto cminpmbb2;
			else{
				mb[1][0]+=xxx;
				mb[1][2]-=xxx;
				total-=mb[1][1]*xxx;
				gotoxy(50,5);
				cout<<"Total: "<<total;
				goto cancel;}
            break;
			default: gotoxy(0,0);goto cminpmbb2;break;
		}
cmmbb3:textcolor, 1);
		gotoxy(14,21);
		cout<<"лл лл";
cminpmbb3:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,21);ctc(1);
			cout<<"     ";
			goto cmmbb2;break;
		case 's': gotoxy(14,21);ctc(1);
			cout<<"     ";
			goto cmmbb1;break;
			case '\b':  gotoxy(14,21);ctc(1);
			cout<<"     ";goto cminpmb;break;
			case '\r':xx=mb[2][2];
			xxx=Qty(xx);
			if(xxx==0)
                 goto cminpmbb3;
			else{
				mb[2][0]+=xxx;
				mb[2][2]-=xxx;
				total-=mb[2][1]*xxx;
				gotoxy(50,5);
				cout<<"Total: "<<total;
				goto cancel;}
            break;
			default: gotoxy(0,0);goto cminpmbb3;break;
		}






		break;
	default: gotoxy(0,0);
		goto cminpmb;break;
	}
cmbm1: 
    textcolor, 1+128);
	gotoxy(3,24);
	cout<<"лл лл";
cminpbm:
      cout<<endl;
    c=getch();
	switch(c){
	case 'w':
	case 'W':gotoxy(3,24);ctc(1);
		cout<<"     ";
		goto cmmb1;break;
	case 'S':
	case 's':gotoxy(3,24);ctc(1);
	cout<<"     ";
		goto cmjollibee1;break;
		case '\r':



cmbmb1:textcolor, 1);
		gotoxy(14,25);
		cout<<"лл лл";
cminpbmb1:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,25);ctc(1);
			cout<<"     ";
			goto cmbmb2;break;
		case 's': gotoxy(14,25);ctc(1);
			cout<<"     ";
			goto cmbmb2;break;
		case '\b': gotoxy(14,25);ctc(1);
			cout<<"     "; 
			goto cminpbm;break;
			case '\r':xx=bm[0][2];
			xxx=Qty(xx);
			if(xxx==0)
                 goto cminpbmb1;
			else{
				bm[0][0]+=xxx;
				bm[0][2]-=xxx;
				total-=bm[0][1]*xxx;
				gotoxy(50,5);
				cout<<"Total: "<<total;
				goto cancel;}
            break;
		default: gotoxy(0,0);goto cminpbmb1;break;
		}
cmbmb2: textcolor, 1);
		gotoxy(14,26);
		cout<<"лл лл";
cminpbmb2:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,26);ctc(1);
			cout<<"     ";
			goto cmbmb1;break;
		case 's': gotoxy(14,26);ctc(1);
			cout<<"     ";
			goto cmbmb1;break;
			case '\b': gotoxy(14,26);ctc(1);
			cout<<"     ";goto cminpbm;break;
			case '\r':xx=bm[1][2];
			xxx=Qty(xx);
			if(xxx==0)
                 goto cminpbmb2;
			else{
				bm[1][0]+=xxx;
				bm[1][2]-=xxx;
				total-=bm[1][1]*xxx;
				gotoxy(50,5);
				cout<<"Total: "<<total;
				goto cancel;}
            break;
			default: gotoxy(0,0);goto cminpbmb2;break;
		}


			break;
	default: gotoxy(0,0);
		goto cminpbm;break;
	}
cmjollibee1:
	textcolor, 1+128);
	gotoxy(3,30);
	cout<<"лл лл";
cminpjollibee:
      cout<<endl;
    c=getch();
	switch(c){
	case 'w':
	case 'W':	gotoxy(3,30);ctc(1);
		cout<<"     ";
		goto cmbm1;break;
	case 'S':
	case 's':	gotoxy(3,30);ctc(1);
		cout<<"     ";
		goto cmextras;break;
	case '\r':


cmjollibeeb1:textcolor, 1);
		gotoxy(14,31);
		cout<<"лл лл";
cminpjollibeeb1:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,31);ctc(1);
			cout<<"     ";
			goto cmjollibeeb4;break;
		case 's': gotoxy(14,31);ctc(1);
			cout<<"     ";
			goto cmjollibeeb2;break;
		case '\b': gotoxy(14,31);ctc(1);
			cout<<"     "; 
			goto cminpjollibee;break;
		case '\r':xx=jollibee[0][2];
			xxx=Qty(xx);
			if(xxx==0)
                 goto cminpjollibeeb1;
			else{
				jollibee[0][0]+=xxx;
				jollibee[0][2]-=xxx;
				total-=jollibee[0][1]*xxx;
				gotoxy(50,5);
				cout<<"Total: "<<total;
				goto cancel;}
            break;
		default: gotoxy(0,0);goto cminpjollibeeb1;break;
		}
cmjollibeeb2: textcolor, 1);
		gotoxy(14,32);
		cout<<"лл лл";
cminpjollibeeb2:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,32);ctc(1);
			cout<<"     ";
			goto cmjollibeeb1;break;
		case 's': gotoxy(14,32);ctc(1);
			cout<<"     ";
			goto cmjollibeeb3;break;
			case '\b': gotoxy(14,32);ctc(1);
			cout<<"     ";goto cminpjollibee;break;
		case '\r':xx=jollibee[1][2];
			xxx=Qty(xx);
			if(xxx==0)
                 goto cminpjollibeeb2;
			else{
				jollibee[1][0]+=xxx;
				jollibee[1][2]-=xxx;
				total-=jollibee[1][1]*xxx;
				gotoxy(50,5);
				cout<<"Total: "<<total;
				goto cancel;}
            break;
			default: gotoxy(0,0);goto cminpjollibeeb2;break;
		}
cmjollibeeb3:textcolor, 1);
		gotoxy(14,33);
		cout<<"лл лл";
cminpjollibeeb3:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,33);ctc(1);
			cout<<"     ";
			goto cmjollibeeb2;break;
		case 's': gotoxy(14,33);ctc(1);
			cout<<"     ";
			goto cmjollibeeb4;break;
			case '\b':  gotoxy(14,33);ctc(1);
			cout<<"     ";goto cminpjollibee;break;
		case '\r':xx=jollibee[2][2];
			xxx=Qty(xx);
			if(xxx==0)
                 goto cminpjollibeeb3;
			else{
				jollibee[2][0]+=xxx;
				jollibee[2][2]-=xxx;
				total-=jollibee[2][1]*xxx;
				gotoxy(50,5);
				cout<<"Total: "<<total;
				goto cancel;}
            break;
			default: gotoxy(0,0);goto cminpjollibeeb3;break;
		}
cmjollibeeb4:textcolor, 1);
		gotoxy(14,34);
		cout<<"лл лл";
cminpjollibeeb4:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,34);ctc(1);
			cout<<"     ";
			goto cmjollibeeb3;break;
		case 's': gotoxy(14,34);ctc(1);
			cout<<"     ";
			goto cmjollibeeb1;break;
			case '\b': gotoxy(14,34);ctc(1);
			cout<<"     ";goto cminpjollibee;break;
		case '\r':xx=jollibee[3][2];
			xxx=Qty(xx);
			if(xxx==0)
                 goto cminpjollibeeb4;
			else{
				jollibee[3][0]+=xxx;
				jollibee[3][2]-=xxx;
				total-=jollibee[3][1]*xxx;
				gotoxy(50,5);
				cout<<"Total: "<<total;
				goto cancel;}
            break;
			default: gotoxy(0,0);goto cminpjollibeeb4;break;
		}


		break;
	default: gotoxy(0,0);
		goto cminpjollibee;break;
	}
cmextras:	
	textcolor, 1+128);
	gotoxy(3,35);
	cout<<"лл лл";
cminpextras:
	cout<<endl;
	c=getch();
	switch(c){
	case 'w':
	case 'W':	gotoxy(3,35);ctc(1);
		cout<<"     ";
		goto cmjollibee1;break;
	case 'S':
	case 's':	gotoxy(3,35);ctc(1);
		cout<<"     ";
		goto cmifinish;break;
	case '\r':
     	
cmextrasb1:textcolor, 1);
		gotoxy(14,36);
		cout<<"лл лл";
cminpextrasb1:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,36);ctc(1);
			cout<<"     ";
			goto cmextrasb3;break;
		case 's': gotoxy(14,36);ctc(1);
			cout<<"     ";
			goto cmextrasb2;break;
		case '\b': gotoxy(14,36);ctc(1);
			cout<<"     "; 
			goto cminpextras;break;
		case '\r':xx=extras[0][2];
			xxx=Qty(xx);
			if(xxx==0)
                 goto cminpextrasb1;
			else{
				extras[0][0]+=xxx;
				extras[0][2]-=xxx;
				total-=extras[0][1]*xxx;
				gotoxy(50,5);
				cout<<"Total: "<<total;
				goto cancel;}
            break;
		default: gotoxy(0,0);goto cminpextrasb1;break;
		}
cmextrasb2: textcolor, 1);
		gotoxy(14,37);
		cout<<"лл лл";
cminpextrasb2:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,37);ctc(1);
			cout<<"     ";
			goto cmextrasb1;break;
		case 's': gotoxy(14,37);ctc(1);
			cout<<"     ";
			goto cmextrasb3;break;
			case '\b': gotoxy(14,37);ctc(1);
			cout<<"     ";goto cminpextras;break;
		case '\r':xx=extras[1][2];
			xxx=Qty(xx);
			if(xxx==0)
                 goto cminpextrasb2;
			else{
				extras[1][0]+=xxx;
				extras[1][2]-=xxx;
				total-=extras[1][1]*xxx;
				gotoxy(50,5);
				cout<<"Total: "<<total;
				goto cancel;}
            break;
			default: gotoxy(0,0);goto cminpextrasb2;break;
		}
cmextrasb3:textcolor, 1);
		gotoxy(14,38);
		cout<<"лл лл";
cminpextrasb3:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,38);ctc(1);
			cout<<"     ";
			goto cmextrasb2;break;
		case 's': gotoxy(14,38);ctc(1);
			cout<<"     ";
			goto cmextrasb1;break;
			case '\b':  gotoxy(14,38);ctc(1);
			cout<<"     ";goto cminpextras;break;
		case '\r':xx=extras[2][2];
			xxx=Qty(xx);
			if(xxx==0)
                 goto cminpextrasb3;
			else{
				extras[2][0]+=xxx;
				extras[2][2]-=xxx;
				total-=extras[2][1]*xxx;
				gotoxy(50,5);
				cout<<"Total: "<<total;
				goto cancel;}
            break;
			default: gotoxy(0,0);goto cminpextrasb3;break;
		}
				
		break;
	default: gotoxy(0,0);
		goto cminpextras;break;
	}
cmifinish:textcolor, 1+128);
		gotoxy(3,39);
		cout<<"лл лл";
cminpifinish:
      cout<<endl;
	c=getch();
	switch(c){
	case 'w':
	case 'W':	gotoxy(3,39);ctc(1);
		cout<<"     ";
		goto cmextras;break;
	case 'S':
	case 's':	gotoxy(3,39);ctc(1);
		cout<<"     ";
		goto cmmcdo1;break;
	case '\r':   goto menu;

    	break;
	default: gotoxy(0,0);
		goto cminpifinish;break;
	}
/////////////////////////////////////////////////////////////////////////////////////////////////////////wasteproducts
wasteproducts:
	
    textcolor, 14);
	system("cls");
		gotoxy(9,5);
	cout<<"New 4 in 1 Burger";
	gotoxy(9,6);
	cout<<"Total Sales of "<<un<<": "<<totalsales;
	gotoxy(50,10);
	cout<<"Quantity";
	gotoxy(30,5);
	cout<< "Inventory ";
    gotoxy(9,12);
	cout<<"Tropical Hut";
	gotoxy(9,18);
	cout<<"Minute Burger(Buy 1 take 1)";
	gotoxy(9,24);
	cout<<"Angels(Buy 1 take 1)";
	gotoxy(9,30);
	cout<<"Jollibee";
	gotoxy(9,35);
	cout<<"Extras";
	gotoxy(9,39);
	cout<<"Finish"<<endl;
	//Tropical Hut
	gotoxy(20,13);
	cout<<"Ranchero";
	  gotoxy(50,13);
	  cout<<mcdo[0][0];
	gotoxy(20,14);
	cout<<"Hawaiian";
	  gotoxy(50,14);
	  cout<<mcdo[1][0];
	gotoxy(20,15);
	cout<<"Classic";
	   gotoxy(50,15);
	   cout<<mcdo[2][0];
	gotoxy(20,16);
	cout<<"Cheese Burger";
	   gotoxy(50,16);
	   cout<<mcdo[3][0];
   //Minute Burger
	gotoxy(20,19);
	cout<<"Double Minute Burger";
	   gotoxy(50,19);
	   cout<<mb[0][0];
	gotoxy(20,20);
	cout<<"Cheese Burger";
	   gotoxy(50,20);
	   cout<<mb[1][0];
	gotoxy(20,21);
	cout<<"Hamburger";
	   gotoxy(50,21);
	   cout<<mb[2][0];

	//Angels
    gotoxy(20,25);
	cout<<"Hamburger";
	  gotoxy(50,25);
	  cout<<bm[0][0];
	gotoxy(20,26);
	cout<<"Hamburger w/ Cheese";
	gotoxy(50,26);
	  cout<<bm[1][0];
	//Jollibee
	gotoxy(20,31);
	cout<<"Champ";
	gotoxy(50,31);
	  cout<<jollibee[0][0];
	gotoxy(20,32);
	cout<<"Double Yum";
	gotoxy(50,32);
	  cout<<jollibee[1][0];
	gotoxy(20,33);
	cout<<"Double Yum w/ Cheese";
	gotoxy(50,33);
	  cout<<jollibee[2][0];
	gotoxy(20,34);
	cout<<"Yum";
	gotoxy(50,34);
	  cout<<jollibee[3][0];
	gotoxy(20,36);
	cout<<"Ice Tea";
	  gotoxy(50,36);
	  cout<<extras[0][0];
	gotoxy(20,37);
	cout<<"Cheese";
	gotoxy(50,37);
	  cout<<extras[1][0];
	gotoxy(20,38);
	cout<<"Extra Patty";
	gotoxy(50,38);
	  cout<<extras[2][0];
	cout<<endl;
	textcolor, 14+128);
	gotoxy(3,12);
	cout<<"     ";
	gotoxy(3,18);
	cout<<"     ";
	gotoxy(3,24);
	cout<<"     ";
	gotoxy(3,30);
	cout<<"     ";
	gotoxy(3,35);
	cout<<"     ";
	gotoxy(3,39);
	cout<<"     ";
wpmcdo1:   textcolor, 1+128);
	gotoxy(3,12);
	cout<<"лл лл";
wpinpmcdo:
	cout<<endl;
    c=getch();
	switch(c){
	case 'w':
	case 'W': gotoxy(3,12);ctc(1);
		cout<<"     ";
		goto wpifinish;break;
	case 'S':
	case 's': gotoxy(3,12);ctc(1);
		cout<<"     ";
		goto wpmb1;break;
	case '\r':
		




wpmcdob1:textcolor, 1);
		gotoxy(14,13);
		cout<<"лл лл";
wpinpmcdob1:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,13);ctc(1);
			cout<<"     ";
			goto wpmcdob4;break;
		case 's': gotoxy(14,13);ctc(1);
			cout<<"     ";
			goto wpmcdob2;break;
		case '\b': gotoxy(14,13);ctc(1);
			cout<<"     "; 
			goto wpinpmcdo;break;
		case '\r': price=mcdo[0][1];qtyprod=mcdo[0][0];
                   xxx=Qty(qtyprod);
				   if(xxx==0)
					   goto wpinpmcdob1;
				   else{
					   wasteprod+=price*xxx;
					   mcdo[0][0]-=xxx;
					   goto wasteproducts;
				   }break;



		
		default: gotoxy(0,0);goto wpinpmcdob1;break;
		}
wpmcdob2: textcolor, 1);
		gotoxy(14,14);
		cout<<"лл лл";
wpinpmcdob2:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,14);ctc(1);
			cout<<"     ";
			goto wpmcdob1;break;
		case 's': gotoxy(14,14);ctc(1);
			cout<<"     ";
			goto wpmcdob3;break;
			case '\b': gotoxy(14,14);ctc(1);
			cout<<"     ";goto wpinpmcdo;break;
			

	case '\r': 
price=mcdo[1][1];qtyprod=mcdo[1][0];
                   xxx=Qty(qtyprod);
				   if(xxx==0)
					   goto wpinpmcdob2;
				   else{
					   mcdo[1][0]=mcdo[1][0]-xxx;
					   wasteprod+=price*xxx;
					   goto wasteproducts;
				   }break;




		
			default: gotoxy(0,0);goto wpinpmcdob2;break;
		}
wpmcdob3:textcolor, 1);
		gotoxy(14,15);
		cout<<"лл лл";
wpinpmcdob3:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,15);ctc(1);
			cout<<"     ";
			goto wpmcdob2;break;
		case 's': gotoxy(14,15);ctc(1);
			cout<<"     ";
			goto wpmcdob4;break;
			case '\b':  gotoxy(14,15);ctc(1);
			cout<<"     ";goto wpinpmcdo;break;



	case '\r':  price=mcdo[2][1];qtyprod=mcdo[2][0];
                   xxx=Qty(qtyprod);
				   if(xxx==0)
					   goto wpinpmcdob3;
				   else{
					   mcdo[2][0]-=xxx;
					   wasteprod+=price*xxx;
					   goto wasteproducts;
				   }break;







			
			default: gotoxy(0,0);goto wpinpmcdob3;break;
		}
wpmcdob4:textcolor, 1);
		gotoxy(14,16);
		cout<<"лл лл";
wpinpmcdob4:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,16);ctc(1);
			cout<<"     ";
			goto wpmcdob3;break;
		case 's': gotoxy(14,16);ctc(1);
			cout<<"     ";
			goto wpmcdob1;break;
			case '\b': gotoxy(14,16);ctc(1);
			cout<<"     ";goto wpinpmcdo;break;
	case '\r':
                 price=mcdo[3][1];qtyprod=mcdo[3][0];
                   xxx=Qty(qtyprod);
				   if(xxx==0)
					   goto wpinpmcdob4;
				   else{
					   mcdo[3][0]-=xxx;
					   wasteprod+=price*xxx;
					   goto wasteproducts;
				   }break;








			
			default: gotoxy(0,0);goto wpinpmcdob4;break;
		}




		break;
	default: gotoxy(0,0);
		goto wpinpmcdo;break;
	}
wpmb1:
	textcolor, 1+128);
	gotoxy(3,18);
	cout<<"лл лл";
wpinpmb:
      cout<<endl;
    c=getch();
	switch(c){
	case 'w':
	case 'W':gotoxy(3,18);ctc(1);
         cout<<"     ";
		goto wpmcdo1;break;
case 'S':
	case 's':gotoxy(3,18);ctc(1);
         cout<<"     ";
		goto wpbm1;break;
	case '\r':

    
wpmbb1:textcolor, 1);
		gotoxy(14,19);
		cout<<"лл лл";
wpinpmbb1:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,19);ctc(1);
			cout<<"     ";
			goto wpmbb3;break;
		case 's': gotoxy(14,19);ctc(1);
			cout<<"     ";
			goto wpmbb2;break;
		case '\b': gotoxy(14,19);ctc(1);
			cout<<"     "; 
			goto wpinpmb;break;
		case '\r':
               price=mb[0][1];qtyprod=mb[0][0];
                   xxx=Qty(qtyprod);
				   if(xxx==0)
					   goto wpinpmbb1;
				   else{
					   mb[0][0]-=xxx;
					   wasteprod+=price*xxx;
					   goto wasteproducts;
				   }break;
		default: gotoxy(0,0);goto wpinpmbb1;break;
		}
wpmbb2: textcolor, 1);
		gotoxy(14,20);
		cout<<"лл лл";
wpinpmbb2:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,20);ctc(1);
			cout<<"     ";
			goto wpmbb1;break;
		case 's': gotoxy(14,20);ctc(1);
			cout<<"     ";
			goto wpmbb3;break;
			case '\b': gotoxy(14,20);ctc(1);
			cout<<"     ";goto wpinpmb;break;
       case '\r':
               price=mb[1][1];qtyprod=mb[1][0];
                   xxx=Qty(qtyprod);
				   if(xxx==0)
					   goto wpinpmbb2;
				   else{
					   mb[1][0]-=xxx;
					   wasteprod+=price*xxx;
					   goto wasteproducts;
				   }break;
			default: gotoxy(0,0);goto wpinpmbb2;break;
		}
wpmbb3:textcolor, 1);
		gotoxy(14,21);
		cout<<"лл лл";
wpinpmbb3:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,21);ctc(1);
			cout<<"     ";
			goto wpmbb2;break;
		case 's': gotoxy(14,21);ctc(1);
			cout<<"     ";
			goto wpmbb1;break;
			case '\b':  gotoxy(14,21);ctc(1);
			cout<<"     ";goto wpinpmb;break;
			case '\r':
               price=mb[2][1];qtyprod=mb[2][0];
                   xxx=Qty(qtyprod);
				   if(xxx==0)
					   goto wpinpmbb3;
				   else{
					   mb[2][0]-=xxx;
					   wasteprod+=price*xxx;
					   goto wasteproducts;
				   }break;
			default: gotoxy(0,0);goto wpinpmbb3;break;
		}






		break;
	default: gotoxy(0,0);
		goto wpinpmb;break;
	}
wpbm1: 
    textcolor, 1+128);
	gotoxy(3,24);
	cout<<"лл лл";
wpinpbm:
      cout<<endl;
    c=getch();
	switch(c){
	case 'w':
	case 'W':gotoxy(3,24);ctc(1);
		cout<<"     ";
		goto wpmb1;break;
	case 'S':
	case 's':gotoxy(3,24);ctc(1);
	cout<<"     ";
		goto wpjollibee1;break;
		case '\r':



wpbmb1:textcolor, 1);
		gotoxy(14,25);
		cout<<"лл лл";
wpinpbmb1:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,25);ctc(1);
			cout<<"     ";
			goto wpbmb2;break;
		case 's': gotoxy(14,25);ctc(1);
			cout<<"     ";
			goto wpbmb2;break;
		case '\b': gotoxy(14,25);ctc(1);
			cout<<"     "; 
			goto wpinpbm;break;
			case '\r':
               price=bm[0][1];qtyprod=bm[0][0];
                   xxx=Qty(qtyprod);
				   if(xxx==0)
					   goto wpinpbmb1;
				   else{
					   bm[0][0]-=xxx;
					   wasteprod+=price*xxx;
					   goto wasteproducts;
				   }break;
		default: gotoxy(0,0);goto wpinpbmb1;break;
		}
wpbmb2: textcolor, 1);
		gotoxy(14,26);
		cout<<"лл лл";
wpinpbmb2:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,26);ctc(1);
			cout<<"     ";
			goto wpbmb1;break;
		case 's': gotoxy(14,26);ctc(1);
			cout<<"     ";
			goto wpbmb1;break;
			case '\b': gotoxy(14,26);ctc(1);
			cout<<"     ";goto wpinpbm;break;
			case '\r':
               price=bm[1][1];qtyprod=bm[1][0];
                   xxx=Qty(qtyprod);
				   if(xxx==0)
					   goto wpinpbmb2;
				   else{
					   bm[1][0]-=xxx;
					   wasteprod+=price*xxx;
					   goto wasteproducts;
				   }break;
			default: gotoxy(0,0);goto wpinpbmb2;break;
		}


			break;
	default: gotoxy(0,0);
		goto wpinpbm;break;
	}
wpjollibee1:
	textcolor, 1+128);
	gotoxy(3,30);
	cout<<"лл лл";
wpinpjollibee:
      cout<<endl;
    c=getch();
	switch(c){
	case 'w':
	case 'W':	gotoxy(3,30);ctc(1);
		cout<<"     ";
		goto wpbm1;break;
	case 'S':
	case 's':	gotoxy(3,30);ctc(1);
		cout<<"     ";
		goto wpextras;break;
	case '\r':


wpjollibeeb1:textcolor, 1);
		gotoxy(14,31);
		cout<<"лл лл";
wpinpjollibeeb1:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,31);ctc(1);
			cout<<"     ";
			goto wpjollibeeb4;break;
		case 's': gotoxy(14,31);ctc(1);
			cout<<"     ";
			goto wpjollibeeb2;break;
		case '\b': gotoxy(14,31);ctc(1);
			cout<<"     "; 
			goto wpinpjollibee;break;
			case '\r':
               price=jollibee[0][1];qtyprod=jollibee[0][0];
                   xxx=Qty(qtyprod);
				   if(xxx==0)
					   goto wpinpjollibeeb1;
				   else{
					   jollibee[0][0]-=xxx;
					   wasteprod+=price*xxx;
					   goto wasteproducts;
				   }break;
		default: gotoxy(0,0);goto wpinpjollibeeb1;break;
		}
wpjollibeeb2: textcolor, 1);
		gotoxy(14,32);
		cout<<"лл лл";
wpinpjollibeeb2:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,32);ctc(1);
			cout<<"     ";
			goto wpjollibeeb1;break;
		case 's': gotoxy(14,32);ctc(1);
			cout<<"     ";
			goto wpjollibeeb3;break;
			case '\b': gotoxy(14,32);ctc(1);
			cout<<"     ";goto wpinpjollibee;break;
			case '\r':
               price=jollibee[1][1];qtyprod=jollibee[1][0];
                   xxx=Qty(qtyprod);
				   if(xxx==0)
					   goto wpinpjollibeeb2;
				   else{
					   jollibee[1][0]-=xxx;
					   wasteprod+=price*xxx;
					   goto wasteproducts;
				   }break;
			default: gotoxy(0,0);goto wpinpjollibeeb2;break;
		}
wpjollibeeb3:textcolor, 1);
		gotoxy(14,33);
		cout<<"лл лл";
wpinpjollibeeb3:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,33);ctc(1);
			cout<<"     ";
			goto wpjollibeeb2;break;
		case 's': gotoxy(14,33);ctc(1);
			cout<<"     ";
			goto wpjollibeeb4;break;
			case '\b':  gotoxy(14,33);ctc(1);
			cout<<"     ";goto wpinpjollibee;break;
			case '\r':
               price=jollibee[2][1];qtyprod=jollibee[2][0];
                   xxx=Qty(qtyprod);
				   if(xxx==0)
					   goto wpinpjollibeeb3;
				   else{
					   jollibee[2][0]-=xxx;
					   wasteprod+=price*xxx;
					   goto wasteproducts;
				   }break;
			default: gotoxy(0,0);goto wpinpjollibeeb3;break;
		}
wpjollibeeb4:textcolor, 1);
		gotoxy(14,34);
		cout<<"лл лл";
wpinpjollibeeb4:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,34);ctc(1);
			cout<<"     ";
			goto wpjollibeeb3;break;
		case 's': gotoxy(14,34);ctc(1);
			cout<<"     ";
			goto wpjollibeeb1;break;
			case '\b': gotoxy(14,34);ctc(1);
			cout<<"     ";goto wpinpjollibee;break;
			case '\r':
               price=jollibee[3][1];qtyprod=jollibee[3][0];
                   xxx=Qty(qtyprod);
				   if(xxx==0)
					   goto wpinpjollibeeb4;
				   else{
					   jollibee[3][0]-=xxx;
					   wasteprod+=price*xxx;
					   goto wasteproducts;
				   }break;
			default: gotoxy(0,0);goto wpinpjollibeeb4;break;
		}


		break;
	default: gotoxy(0,0);
		goto wpinpjollibee;break;
	}
wpextras:	
	textcolor, 1+128);
	gotoxy(3,35);
	cout<<"лл лл";
wpinpextras:
	cout<<endl;
	c=getch();
	switch(c){
	case 'w':
	case 'W':	gotoxy(3,35);ctc(1);
		cout<<"     ";
		goto wpjollibee1;break;
	case 'S':
	case 's':	gotoxy(3,35);ctc(1);
		cout<<"     ";
		goto wpifinish;break;
	case '\r':
     	
wpextrasb1:textcolor, 1);
		gotoxy(14,36);
		cout<<"лл лл";
wpinpextrasb1:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,36);ctc(1);
			cout<<"     ";
			goto wpextrasb3;break;
		case 's': gotoxy(14,36);ctc(1);
			cout<<"     ";
			goto wpextrasb2;break;
		case '\b': gotoxy(14,36);ctc(1);
			cout<<"     "; 
			goto wpinpextras;break;
		case '\r':
               price=extras[0][1];qtyprod=extras[0][0];
                   xxx=Qty(qtyprod);
				   if(xxx==0)
					   goto wpinpextrasb1;
				   else{
					   extras[0][0]-=xxx;
					   wasteprod+=price*xxx;
					   goto wasteproducts;
				   }break;
		default: gotoxy(0,0);goto wpinpextrasb1;break;
		}
wpextrasb2: textcolor, 1);
		gotoxy(14,37);
		cout<<"лл лл";
wpinpextrasb2:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,37);ctc(1);
			cout<<"     ";
			goto wpextrasb1;break;
		case 's': gotoxy(14,37);ctc(1);
			cout<<"     ";
			goto wpextrasb3;break;
			case '\b': gotoxy(14,37);ctc(1);
			cout<<"     ";goto wpinpextras;break;
			case '\r':
               price=extras[1][1];qtyprod=extras[1][0];
                   xxx=Qty(qtyprod);
				   if(xxx==0)
					   goto wpinpextrasb2;
				   else{
					   extras[1][0]-=xxx;
					   wasteprod+=price*xxx;
					   goto wasteproducts;
				   }break;
			default: gotoxy(0,0);goto wpinpextrasb2;break;
		}
wpextrasb3:textcolor, 1);
		gotoxy(14,38);
		cout<<"лл лл";
wpinpextrasb3:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,38);ctc(1);
			cout<<"     ";
			goto wpextrasb2;break;
		case 's': gotoxy(14,38);ctc(1);
			cout<<"     ";
			goto wpextrasb1;break;
			case '\b':  gotoxy(14,38);ctc(1);
			cout<<"     ";goto wpinpextras;break;
			case '\r':
               price=extras[2][1];qtyprod=extras[2][0];
                   xxx=Qty(qtyprod);
				   if(xxx==0)
					   goto wpinpextrasb3;
				   else{
					   extras[2][0]-=xxx;
					   wasteprod+=price*xxx;
					   goto wasteproducts;
				   }break;
			default: gotoxy(0,0);goto wpinpextrasb3;break;
		}
				
		break;
	default: gotoxy(0,0);
		goto wpinpextras;break;
	}
wpifinish:textcolor, 1+128);
		gotoxy(3,39);
		cout<<"лл лл";
wpinpifinish:
      cout<<endl;
	c=getch();
	switch(c){
	case 'w':
	case 'W':	gotoxy(3,39);ctc(1);
		cout<<"     ";
		goto wpextras;break;
	case 'S':
	case 's':	gotoxy(3,39);ctc(1);
		cout<<"     ";
		goto wpmcdo1;break;
	case '\r':  goto main2;

    	break;
	default: gotoxy(0,0);
		goto wpinpifinish;break;
	}
////////////////////////////////////////////////////////////////////////////////////returnandexchangeproducts
returnandexchangeproducts:
	
    textcolor, 14);
	system("cls");
		gotoxy(9,5);
	cout<<"New 4 in 1 Burger";
 	gotoxy(50,6);
	cout<<"Total: "<<total;
	gotoxy(9,5);
	cout<<"Total Sales of "<<un<<": "<<totalsales;
	border();
    gotoxy(9,12);
	cout<<"Tropical Hut";
	gotoxy(9,18);
	cout<<"Minute Burger(Buy 1 take 1)";
	gotoxy(9,24);
	cout<<"Angels(Buy 1 take 1)";
	gotoxy(9,30);
	cout<<"Jollibee";
	gotoxy(9,35);
	cout<<"Extras";
	gotoxy(9,39);
	cout<<"Cancel";
	gotoxy(9,40);
	cout<<"Finish"<<endl;
	//Tropical Hut
	gotoxy(20,13);
	cout<<"Ranchero";
	  gotoxy(50,13);
	  cout<<"Php "<<mcdo[0][1];
	gotoxy(20,14);
	cout<<"Hawaiian";
	  gotoxy(50,14);
	  cout<<"Php "<<mcdo[1][1];
	gotoxy(20,15);
	cout<<"Classic";
	   gotoxy(50,15);
	   cout<<"Php "<<mcdo[2][1];
	gotoxy(20,16);
	cout<<"Cheese Burger";
	   gotoxy(50,16);
	   cout<<"Php "<<mcdo[3][1];
   //Minute Burger
	gotoxy(20,19);
	cout<<"Double Minute Burger";
	   gotoxy(50,19);
	   cout<<"Php "<<mb[0][1];
	gotoxy(20,20);
	cout<<"Cheese Burger";
	   gotoxy(50,20);
	   cout<<"Php "<<mb[1][1];
	gotoxy(20,21);
	cout<<"Hamburger";
	   gotoxy(50,21);
	   cout<<"Php "<<mb[2][1];

	//Angels
    gotoxy(20,25);
	cout<<"Hamburger";
	gotoxy(50,25);
	   cout<<"Php "<<bm[0][1];
	gotoxy(20,26);
	cout<<"Hamburger w/ Cheese";
	gotoxy(50,26);
	   cout<<"Php "<<bm[1][1];
	//Jollibee
	gotoxy(20,31);
	cout<<"Champ";
	gotoxy(50,31);
	   cout<<"Php "<<jollibee[0][1];
	gotoxy(20,32);
	cout<<"Double Yum";
	gotoxy(50,32);
	   cout<<"Php "<<jollibee[1][1];
	gotoxy(20,33);
	cout<<"Double Yum w/ Cheese";
	gotoxy(50,33);
	   cout<<"Php "<<jollibee[2][1];
	gotoxy(20,34);
	cout<<"Yum";
	gotoxy(50,34);
	   cout<<"Php "<<jollibee[3][1];
	gotoxy(20,36);
	cout<<"Ice Tea";
	gotoxy(50,36);
	   cout<<"Php "<<extras[0][1];
	gotoxy(20,37);
	cout<<"Cheese";
		gotoxy(50,37);
	   cout<<"Php "<<extras[1][1];
	gotoxy(20,38);
	cout<<"Extra Patty";
		gotoxy(50,38);
	   cout<<"Php "<<extras[2][1];
	cout<<endl;
	textcolor, 14+128);
	gotoxy(3,12);
	cout<<"     ";
	gotoxy(3,18);
	cout<<"     ";
	gotoxy(3,24);
	cout<<"     ";
	gotoxy(3,30);
	cout<<"     ";
	gotoxy(3,35);
	cout<<"     ";
	gotoxy(3,39);
	cout<<"     ";
	gotoxy(3,40);
	cout<<"     ";
repmcdo1:   textcolor, 1+128);
	gotoxy(3,12);
	cout<<"лл лл";
repinpmcdo:
	cout<<endl;
    c=getch();
	switch(c){
	case 'w':
	case 'W': gotoxy(3,12);ctc(1);
		cout<<"     ";
		goto repifinish;break;
	case 'S':
	case 's': gotoxy(3,12);ctc(1);
		cout<<"     ";
		goto repmb1;break;
	case '\r':
		




repmcdob1:textcolor, 1);
		gotoxy(14,13);
		cout<<"лл лл";
repinpmcdob1:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,13);ctc(1);
			cout<<"     ";
			goto repmcdob4;break;
		case 's': gotoxy(14,13);ctc(1);
			cout<<"     ";
			goto repmcdob2;break;
		case '\b': gotoxy(14,13);ctc(1);
			cout<<"     "; 
			goto repinpmcdo;break;
		case '\r':  price=mcdo[0][1];qtyprod=mcdo[0][0];
			xxx=counter();
			if(xxx==0)
				goto repinpmcdob1;
			else{
				mcdo[0][0]-=xxx;
				wasteprod+=price*xxx;
				goto returnandexchangeproducts;


			}break;
                 



		
		default: gotoxy(0,0);goto repinpmcdob1;break;
		}
repmcdob2: textcolor, 1);
		gotoxy(14,14);
		cout<<"лл лл";
repinpmcdob2:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,14);ctc(1);
			cout<<"     ";
			goto repmcdob1;break;
		case 's': gotoxy(14,14);ctc(1);
			cout<<"     ";
			goto repmcdob3;break;
			case '\b': gotoxy(14,14);ctc(1);
			cout<<"     ";goto repinpmcdo;break;
			

	case '\r': 




			default: gotoxy(0,0);goto repinpmcdob2;break;
		}
repmcdob3:textcolor, 1);
		gotoxy(14,15);
		cout<<"лл лл";
repinpmcdob3:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,15);ctc(1);
			cout<<"     ";
			goto repmcdob2;break;
		case 's': gotoxy(14,15);ctc(1);
			cout<<"     ";
			goto repmcdob4;break;
			case '\b':  gotoxy(14,15);ctc(1);
			cout<<"     ";goto repinpmcdo;break;



	case '\r':






			
			default: gotoxy(0,0);goto repinpmcdob3;break;
		}
repmcdob4:textcolor, 1);
		gotoxy(14,16);
		cout<<"лл лл";
repinpmcdob4:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,16);ctc(1);
			cout<<"     ";
			goto repmcdob3;break;
		case 's': gotoxy(14,16);ctc(1);
			cout<<"     ";
			goto repmcdob1;break;
			case '\b': gotoxy(14,16);ctc(1);
			cout<<"     ";goto repinpmcdo;break;
	case '\r':







			
			default: gotoxy(0,0);goto repinpmcdob4;break;
		}




		break;
	default: gotoxy(0,0);
		goto repinpmcdo;break;
	}
repmb1:
	textcolor, 1+128);
	gotoxy(3,18);
	cout<<"лл лл";
repinpmb:
      cout<<endl;
    c=getch();
	switch(c){
	case 'w':
	case 'W':gotoxy(3,18);ctc(1);
         cout<<"     ";
		goto repmcdo1;break;
case 'S':
	case 's':gotoxy(3,18);ctc(1);
         cout<<"     ";
		goto repbm1;break;
	case '\r':

    
repmbb1:textcolor, 1);
		gotoxy(14,19);
		cout<<"лл лл";
repinpmbb1:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,19);ctc(1);
			cout<<"     ";
			goto repmbb3;break;
		case 's': gotoxy(14,19);ctc(1);
			cout<<"     ";
			goto repmbb2;break;
		case '\b': gotoxy(14,19);ctc(1);
			cout<<"     "; 
			goto repinpmb;break;
		default: gotoxy(0,0);goto repinpmbb1;break;
		}
repmbb2: textcolor, 1);
		gotoxy(14,20);
		cout<<"лл лл";
repinpmbb2:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,20);ctc(1);
			cout<<"     ";
			goto repmbb1;break;
		case 's': gotoxy(14,20);ctc(1);
			cout<<"     ";
			goto repmbb3;break;
			case '\b': gotoxy(14,20);ctc(1);
			cout<<"     ";goto repinpmb;break;
			default: gotoxy(0,0);goto repinpmbb2;break;
		}
repmbb3:textcolor, 1);
		gotoxy(14,21);
		cout<<"лл лл";
repinpmbb3:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,21);ctc(1);
			cout<<"     ";
			goto repmbb2;break;
		case 's': gotoxy(14,21);ctc(1);
			cout<<"     ";
			goto repmbb1;break;
			case '\b':  gotoxy(14,21);ctc(1);
			cout<<"     ";goto repinpmb;break;
			default: gotoxy(0,0);goto repinpmbb3;break;
		}






		break;
	default: gotoxy(0,0);
		goto repinpmb;break;
	}
repbm1: 
    textcolor, 1+128);
	gotoxy(3,24);
	cout<<"лл лл";
repinpbm:
      cout<<endl;
    c=getch();
	switch(c){
	case 'w':
	case 'W':gotoxy(3,24);ctc(1);
		cout<<"     ";
		goto repmb1;break;
	case 'S':
	case 's':gotoxy(3,24);ctc(1);
	cout<<"     ";
		goto repjollibee1;break;
		case '\r':



repbmb1:textcolor, 1);
		gotoxy(14,25);
		cout<<"лл лл";
repinpbmb1:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,25);ctc(1);
			cout<<"     ";
			goto repbmb2;break;
		case 's': gotoxy(14,25);ctc(1);
			cout<<"     ";
			goto repbmb2;break;
		case '\b': gotoxy(14,25);ctc(1);
			cout<<"     "; 
			goto repinpbm;break;
		default: gotoxy(0,0);goto repinpbmb1;break;
		}
repbmb2: textcolor, 1);
		gotoxy(14,26);
		cout<<"лл лл";
repinpbmb2:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,26);ctc(1);
			cout<<"     ";
			goto repbmb1;break;
		case 's': gotoxy(14,26);ctc(1);
			cout<<"     ";
			goto repbmb1;break;
			case '\b': gotoxy(14,26);ctc(1);
			cout<<"     ";goto repinpbm;break;
			default: gotoxy(0,0);goto repinpbmb2;break;
		}


			break;
	default: gotoxy(0,0);
		goto repinpbm;break;
	}
repjollibee1:
	textcolor, 1+128);
	gotoxy(3,30);
	cout<<"лл лл";
repinpjollibee:
      cout<<endl;
    c=getch();
	switch(c){
	case 'w':
	case 'W':	gotoxy(3,30);ctc(1);
		cout<<"     ";
		goto repbm1;break;
	case 'S':
	case 's':	gotoxy(3,30);ctc(1);
		cout<<"     ";
		goto repextras;break;
	case '\r':


repjollibeeb1:textcolor, 1);
		gotoxy(14,31);
		cout<<"лл лл";
repinpjollibeeb1:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,31);ctc(1);
			cout<<"     ";
			goto repjollibeeb4;break;
		case 's': gotoxy(14,31);ctc(1);
			cout<<"     ";
			goto repjollibeeb2;break;
		case '\b': gotoxy(14,31);ctc(1);
			cout<<"     "; 
			goto repinpjollibee;break;
		default: gotoxy(0,0);goto repinpjollibeeb1;break;
		}
repjollibeeb2: textcolor, 1);
		gotoxy(14,32);
		cout<<"лл лл";
repinpjollibeeb2:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,32);ctc(1);
			cout<<"     ";
			goto repjollibeeb1;break;
		case 's': gotoxy(14,32);ctc(1);
			cout<<"     ";
			goto repjollibeeb3;break;
			case '\b': gotoxy(14,32);ctc(1);
			cout<<"     ";goto repinpjollibee;break;
			default: gotoxy(0,0);goto repinpjollibeeb2;break;
		}
repjollibeeb3:textcolor, 1);
		gotoxy(14,33);
		cout<<"лл лл";
repinpjollibeeb3:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,33);ctc(1);
			cout<<"     ";
			goto repjollibeeb2;break;
		case 's': gotoxy(14,33);ctc(1);
			cout<<"     ";
			goto repjollibeeb4;break;
			case '\b':  gotoxy(14,33);ctc(1);
			cout<<"     ";goto repinpjollibee;break;
			default: gotoxy(0,0);goto repinpjollibeeb3;break;
		}
repjollibeeb4:textcolor, 1);
		gotoxy(14,34);
		cout<<"лл лл";
repinpjollibeeb4:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,34);ctc(1);
			cout<<"     ";
			goto repjollibeeb3;break;
		case 's': gotoxy(14,34);ctc(1);
			cout<<"     ";
			goto repjollibeeb1;break;
			case '\b': gotoxy(14,34);ctc(1);
			cout<<"     ";goto repinpjollibee;break;
			default: gotoxy(0,0);goto repinpjollibeeb4;break;
		}


		break;
	default: gotoxy(0,0);
		goto repinpjollibee;break;
	}
repextras:	
	textcolor, 1+128);
	gotoxy(3,35);
	cout<<"лл лл";
repinpextras:
	cout<<endl;
	c=getch();
	switch(c){
	case 'w':
	case 'W':	gotoxy(3,35);ctc(1);
		cout<<"     ";
		goto repjollibee1;break;
	case 'S':
	case 's':	gotoxy(3,35);ctc(1);
		cout<<"     ";
		goto repifinish;break;
	case '\r':
     	
repextrasb1:textcolor, 1);
		gotoxy(14,36);
		cout<<"лл лл";
repinpextrasb1:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,36);ctc(1);
			cout<<"     ";
			goto repextrasb3;break;
		case 's': gotoxy(14,36);ctc(1);
			cout<<"     ";
			goto repextrasb2;break;
		case '\b': gotoxy(14,36);ctc(1);
			cout<<"     "; 
			goto repinpextras;break;
		default: gotoxy(0,0);goto repinpextrasb1;break;
		}
repextrasb2: textcolor, 1);
		gotoxy(14,37);
		cout<<"лл лл";
repinpextrasb2:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,37);ctc(1);
			cout<<"     ";
			goto repextrasb1;break;
		case 's': gotoxy(14,37);ctc(1);
			cout<<"     ";
			goto repextrasb3;break;
			case '\b': gotoxy(14,37);ctc(1);
			cout<<"     ";goto repinpextras;break;
			default: gotoxy(0,0);goto repinpextrasb2;break;
		}
repextrasb3:textcolor, 1);
		gotoxy(14,38);
		cout<<"лл лл";
repinpextrasb3:
		cout << endl;
		c=getch();
		switch(c){
		case 'w': gotoxy(14,38);ctc(1);
			cout<<"     ";
			goto repextrasb2;break;
		case 's': gotoxy(14,38);ctc(1);
			cout<<"     ";
			goto repextrasb1;break;
			case '\b':  gotoxy(14,38);ctc(1);
			cout<<"     ";goto repinpextras;break;
			default: gotoxy(0,0);goto repinpextrasb3;break;
		}
				
		break;
	default: gotoxy(0,0);
		goto repinpextras;break;
	}
repifinish:textcolor, 1+128);
		gotoxy(3,39);
		cout<<"лл лл";
repinpifinish:
      cout<<endl;
	c=getch();
	switch(c){
	case 'w':
	case 'W':	gotoxy(3,39);ctc(1);
		cout<<"     ";
		goto repextras;break;
	case 'S':
	case 's':	gotoxy(3,39);ctc(1);
		cout<<"     ";
		goto repmcdo1;break;
	case '\r':   goto main2;

    	break;
	default: gotoxy(0,0);
		goto repinpifinish;break;
	}





}
main(){
	int x;
	emblem();
	system("cls");
   interfaced();
	help();
	system("cls");
 x=signininventoryexitmain2();
 if(x==0)
	 goto exit;
 border();
exit:
 gotoxy(80,80);
  textcolor, 0);
cout << endl;
return 0;
gotoxy(80,80);
gotoxy(0,0);
}
