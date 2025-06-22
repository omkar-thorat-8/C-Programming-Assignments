//#include<stdio.h>
//void main()
//{
//	char str[20];
//	
//	printf("enter the String :");
//	scanf("%s",str);
//	
//	int i=0;
//	char newstr[20];
//	int j=0;
//	while(str[i]!=0)
//	{
//		if(i%2==0)
//		{
//			newstr[j]=str[i];
//				
//		}	
//			i++;
//			j++;
//    }
//    newstr[j] ='\0';
//	printf("Upadated String is %s:",newstr);		
//}


#include<stdio.h>
void main()
{
	char str[20];
	
	printf("enter the String :");
	scanf("%s",str);
	
	int i=0;
	char newstr[20];
	int j=0;
	while(str[i]!=0)
	{
		if(i%2==0)
		{
			newstr[j]=str[i];
			j++;		
		}	
			i++;
			
    }
    newstr[j] ='\0';
	printf("Upadated String is %s:",newstr);		
}
