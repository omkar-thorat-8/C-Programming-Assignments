#include<stdio.h>
void main(){
	int hour=00,minute=1,second=60;
	
	// To convert Hour To Second
	
	hour = hour*3600;
	
	// To Convert Minute to Second
	
	minute = minute * 60;
	
	// To Find total secound in Time 
	
	second = hour + minute +second ;

    printf("Total second in Time : %d",second);
}
