#include<stdio.h>
#include<conio.h>

void main()
{
	int year,month,day;
	int year1,month1,day1;
	int yy,mm,dd,total;
	printf("enter date in number:\ns");
	printf("enter birth date:yy-mm-dd\n");
	scanf("%d%d%d",&year,&month,&day);
	printf("enter today's date:yy-mm-dd\n");
	scanf("%d%d%d",&year1,&month1,&day1);


if(year1>=year)
{
	
	if(day1>=day)
	{
		dd=day1-day;
	}
	else //takinf days from month
	{
		day1=day1+30;
		dd=day1-day;
		month1=month1-1;
	}
	
	
	if(month1>=month)
	{
		mm=month1-month;
	}
	else  //take month from year
	{
		month1=month1+12;
		mm=month1-month;
		year1=year1-1;
	}
	
	
	yy=year1-year; //calculate year
	total=yy*365+mm*30+dd;//printing days
	
	if(total>=0) //
	{
	
		printf("year=%d,month=%d,day=%d \n",yy,mm,dd);
		printf("total days=%d\n",total);
	
		if(total>1460)// minimum 4 year for admission
		{
			printf("you are allowed to admit\n");
		}
		else
		{
			printf("you are not allowed to admit\n");	
		}
	
	
    }
    else
    {
    	printf("invalid date\n");
	}
 }
 else
    {
    	printf("invalid year\n");
	}



}
	
	






