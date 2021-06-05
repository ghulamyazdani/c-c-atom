#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class batsman
{
int bcode;
char bname[20];
int innings,notout,runs;
int batavg;
void calcavg()
  {
	batavg=runs/(innings-notout);
  }

public :
  void readdata ();
  void displaydata();
};
void batsman::readdata ()
{
  cout<<"\nEnter batsman code: ";
  cin>> bcode;
  cout<<"\nEnter batsman name: ";
  gets(bname);
  cout<<"\nEnter innings,notout and runs: ";
  cin>>innings>>notout>>runs;
  calcavg();
}

void batsman::displaydata()
{
cout<<"Batsman code: "<<bcode<<"\nBatsman name: "<<bname<<"\nInnings: "<<innings
<<"\nNot out:"<<notout<<"\nRuns: "<<runs<<"\nBatting Average: "<<batavg;

cout<<"\nMade by KUSH BHARGAV SAH"<<"\nXIIth-B";
}
void main()
{                   clrscr();
  batsman obj;
  obj.readdata();
  obj.displaydata();
  getch();

}