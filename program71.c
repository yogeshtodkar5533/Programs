//last occurance

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int SearchLastOccurance(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
	
	for(iCnt=iLength-1;iCnt>=0;iCnt--)
	{
		if(iNo==Arr[iCnt])
		{
		   break;
		}
	}
	return iCnt;
}
int main()
{
 int iSize=0,iCnt=0,iValue=0;
 int iRet;
 int *ptr=NULL;
 
 printf("Enter number of elements\n");
 scanf("%d",&iSize);
 
 ptr=(int *)malloc(iSize*sizeof(int));
 
 printf("Enter thr values\n");
 for(iCnt=0;iCnt<iSize;iCnt++)
 {
  scanf("%d",&ptr[iCnt]);
 }
 
 printf("Enter the elements to Search\n");
 scanf("%d",&iValue);
 
 iRet=SearchLastOccurance(ptr,iSize,iValue);
 if(iRet==-1)
 {
   printf("There is no such elements is in array\n");
 }
 else
 {
   printf("Element last occurance at :%d\n",iRet);
 }
 free(ptr);
 
 return 0;
}