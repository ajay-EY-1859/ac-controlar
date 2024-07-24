#include <stdio.h>
int main()
{
int i=0; 
int temperature=16;
int ac=0;
printf("\n\t welcome to ac control unit \n");
while(1)
{
if(ac)
{
printf("\n enter your selection \n");
printf("\n1\t turn ac off\n");
printf("\n2\t increase or decrease temperature\n");
printf("\n3\t check temperature\n");
printf("4\t exit an ac control unit");
scanf("%d",&i);
if(i==1)
{
ac=0;
printf("\n now turning ac off\n");
break;
}
else if(i==2)
{
printf("\n enter your selection\n");
scanf("%d",&temperature);
printf("now temperature is: %d\n",temperature);
}
else if(i==3)
{
printf("now temperature is: %d\n",temperature);
}
else if(i==4)
{
printf("thanks for using ac controlar\n");
break;
}
else
{
printf("invalid selection please try again\n");}
}
else
{
printf("currently ac is turn off \n please turn on it first to use it \n thanks\n");
printf("1\t turn on ac\n");
printf("2\t exit \n");
scanf("%d",&i);
if(i==1)
{
ac=1;
printf("\n turning ac on\n");
}
else if(i==2)
{
printf("\n exiting");
break;
}
else 
{
printf("invalid selection please try again\n");
}
}
}
}
