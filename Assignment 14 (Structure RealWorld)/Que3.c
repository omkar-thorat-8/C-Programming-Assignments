//3. Write a program to create an array for 10 players. For each player store name, no. of
//matches played, runs, wickets takes.
//a. Create function to Accept the information of each player.
//b. Create function to display the information of all the players
//c. Display the information of player who made maximum runs and the one who took
//maximum number of wickets.

#include<stdio.h>
typedef struct Player
{
	char name[100];
	int Noofmatches;
	int runs;
	int wickets;
}Player;
void store(Player*,int);
void display(Player*,int);
void information(Player*,int);
void main()
{
	int size;
	printf("Enter the No. of Players :");
	scanf("%d",&size);
	Player arr[size];
    store(arr,size);
    display(arr,size);
   information(arr,size);
}

void store(Player* arr,int size)
{
	int i;
	for(i=1;i<size+1;i++)
	{
		printf("\n");
		printf("Enter the Player %d name : ",i);
		scanf("%s",&arr[i].name);
		printf("-----------------\n");
		printf("Enter Number of Matches by Player %d : ",i);
		scanf("%d",&arr[i].Noofmatches);
		printf("-----------------\n");
		printf("Enter the Runs of Player %d: ",i);
		scanf("%d",&arr[i].runs);
		printf("-----------------\n");
		printf("Enter the Wickets of Player %d : ",i);
		scanf("%d",&arr[i].wickets);
	}
	printf("-------------------------------\n");
}
void display(Player* arr,int size)
{
	int i;
	for(i=1;i<size+1;i++)
	{
		printf("---------------------------=----------------\n");
		printf("Name of Player %d is : %s \n",i,arr[i].name);
		printf("\n");
		printf("Number of Matches Played by Player %d is : %d \n",i,arr[i].Noofmatches);
		printf("\n");
		printf("Runs made by Player %d is %d : \n",i,arr[i].runs);
		printf("\n");
		printf("Wickets Taken by Player %d is %d : \n",i,arr[i].wickets);
		printf("\n");
		printf("---------------------------=----------------\n");
	}
}

void information(Player* arr,int size)
{	


	int Maxrun=arr[1].runs;
	int i;
	for(i=1;i<size+1;i++)
	{
		if(Maxrun<arr[i].runs)
		{
			Maxrun=arr[i].runs;
		}
	}
	printf("Maximum Runs of Player is : %d\n",Maxrun);
	
	for(i=1;i<size+1;i++)
	{
		if(arr[i].runs==Maxrun)
		{
			printf("Information of Player is :\n");
			printf("\n");
			printf(" Name of Player %s",arr[i].name);
			printf("\n");
			printf("Number of Matches Played by Player is : %d \n",arr[i].Noofmatches);
			printf("\n");
			printf("Runs made by Player is %d : \n",arr[i].runs);
			printf("\n");
			printf("Wickets Taken by Player is %d : \n",arr[i].wickets);
			printf("\n");
			
		}
	}

	
	printf("\n");
	printf("--------------------------------\n");
	printf("\n");
	
	
	int MaxWickets=arr[1].wickets;
	
	for(i=1;i<size+1;i++)
	{
		if(MaxWickets<arr[i].wickets)
		{
			MaxWickets=arr[i].wickets;
		}
	}
	printf("Maximum Wickets of Player is : %d\n",MaxWickets);
	for(i=1;i<size+1;i++)
	{
		if(arr[i].wickets==MaxWickets)
		{
			printf("Information of Player is :\n");
			printf("\n");
			printf(" Name of Player %s",arr[i].name);
			printf("\n");
			printf("Number of Matches Played by Player is : %d \n",arr[i].Noofmatches);
			printf("\n");
			printf("Runs made by Player is %d : \n",arr[i].runs);
			printf("\n");
			printf("Wickets Taken by Player is %d : \n",arr[i].wickets);
			printf("\n");
		}
	}

}
