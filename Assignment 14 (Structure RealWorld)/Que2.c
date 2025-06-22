//Create a structure Time with data members as hrs, min, sec. Accept the values of all
//these members from user and display them. Also perform addition of two time variables
//and display the result. If sec goes beyond 60, carry it to min etc. Add a method to convert
//the given time into sec. 

#include<stdio.h>

typedef struct Time
{
	int hour;
	int minute;
	int second;
}Time;

void storeData(Time*,int);
void display(Time*,int);
Time addTimes(Time,Time);
int timeToSeconds(Time);
void main()
{
	Time arr[2];
	storeData(arr,2);
	display(arr,2);
    Time result = addTimes(arr[0], arr[1]);
    printf("\nSum of Times: %d:%d:2d\n", result.hour, result.minute, result.second);
    int x=timeToSeconds(result);
    printf("Sum in Seconds: %d\n",x);
}
void storeData(Time* arr,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("\n");
		printf("Enter the Hour : ");
		scanf("%d",&arr[i].hour);
		
		printf("Enter the Minute : ");
		scanf("%d",&arr[i].minute);
		
		printf("Enter the Secound : ");
		scanf("%d",&arr[i].second);
    }
	printf("\n");
}
void display(Time* arr,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("Time is :%d:%d:%d\n",arr[i].hour,arr[i].minute,arr[i].second);
    }
}
// addition of Two string

Time addTimes(Time t1, Time t2)
{
    Time result;
    result.second = t1.second + t2.second;
    result.minute = t1.minute + t2.minute + result.second / 60;
    result.second = result.second % 60;
    result.hour = t1.hour + t2.hour + result.minute / 60;
    result.minute = result.minute % 60;
    result.hour =  result.hour % 24; 
    
    return result;
}

int timeToSeconds(Time t) 
{
    return t.hour * 3600 + t.minute * 60 + t.second;
}

