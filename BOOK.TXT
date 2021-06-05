//TO FIND THE NUMBER OF LOWER CASE ALPHABET IN A FILE

#include<fstream.h>
#include<conio.h>
#include<ctype.h>
void main()
{
clrscr();
int count=0;
ifstream fin;
fin.open("Book.txt") ;
char word;
while(!fin.eof())
{
  fin>>word;
  if(islower(word))
  count++;
}
fin.close();
cout<<"\n\n No. of LowerCase Alphabet in File Book.txt: " <<count;
cout<<"\n\n By: KUSH BHARGAV SAH\n XII B";
getch();
}
