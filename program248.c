//Maximum throughput in minimum hardware movement

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define FILESIZE 1024

int CountSmall(char Fname[])
{
	int iRet = 0 , fd = 0 , i = 0 , iCnt = 0;
	char Data[FILESIZE];
	
	fd = open(Fname,O_RDWR);
	if(fd == -1)
	{
		printf("Unable to open the file\n");
		return -1;
	}
	
	while((iRet = read(fd,Data,sizeof(Data))) != 0)
	{
		for(i=0;i<iRet;i++)
		{
			if(Data[i] >= 'a'  &&  Data[i] <= 'z')
			{
				iCnt++;
			}
		}
	}

    close(fd);
	return iCnt;
}

int main()
{
	int iRet = 0;
	char Fname[20];
	
	printf("Enter file name to open\n");
	scanf("%s",Fname);
	
	iRet = CountSmall(Fname);
	printf("Number of small character are : %d\n",iRet);
	                              
    return 0;                                           
}