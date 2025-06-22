#include<stdio.h>
void main(){
	int football=20;
	int badmainton=30;
	int Both=10;
	int neither=20;
	
	// To calculate football only and Badmaiton only 
	
	int football_only = football-Both;
	int badmainton_only = badmainton-Both;
	
	// To calculate total student 
	
	int Total =  football_only + badmainton_only + Both + neither;
	
	printf("Total Number of student are : %d",Total);
}
	
	

