#include<stdio.h>
#include<conio.h>
int main()
{                                             
   char name[20] ;
   char NAME[20];
   printf("Enter student name:");
   fgets(name, 20 , stdin);
   printf("Enter parent name:");
   fgets(NAME, 20 , stdin);
   printf("My name is %s\n",name ); 
   printf("My Father is %s\n",NAME );
   return 0;
