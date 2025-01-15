#include<stdio.h>
#include<conio.h>
int main()
{  
   char Name[20];                                           
   int RollNo ;
   double SGPA;
   printf("Enter student name:");
   scanf("%s",Name);
   printf("Enter student RollNo:");
   scanf("%d",&RollNo);
   printf("Enter SGPA:");
   scanf("%lf",&SGPA);
   printf("The student name is %s\n", Name );
   printf("The student roll no. is %d\n", RollNo ); 
   printf("His SGPA is %f\n",SGPA );
   getch();
}  
