#include<stdio.h>

void main(){
int fy, sy, i;

printf("Enter the 1st year:-");
scanf("%d",&fy);
printf("enter the 2nd year:- ");
scanf("%d",&sy);
 i=fy;
 while(i<=sy){
 if(i%4==0 || i%100==0 || i%400==0){
 printf("%d\n",i);

 }i++;
 }

}

