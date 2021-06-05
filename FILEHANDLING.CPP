//TO FIND NUMBER OF WORDS IN AN EXISTING FILE
#include<fstream.h>
#include<conio.h>
void main()
{
clrscr();
int count=0;
ifstream fin;
fin.open("Book.txt");
char words[200];
while(!fin.eof())
{
  fin>>words;
  count++;
}
fin.close();
cout<<"\n\n No.of words in File -> Book.txt: "<<count ;
cout<<"\n\n By: KUSH BHARGAV SAH \n XII B";
getch();
}