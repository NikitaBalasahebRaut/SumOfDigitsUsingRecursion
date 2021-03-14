// Accept number from user and return addition of its digit
// Input : 7845
// Output : 24

#include<stdio.h>

int SumDigits(int iValue)
{
  int iSum = 0;
  
  while(iValue != 0)
  {
    iSum = iSum + (iValue % 10);
	
	iValue = iValue /10;
  }
  return iSum;
}

int SumDigitsR(int iValue)
{
   static int iSum = 0;
  
  if(iValue != 0)
  {
    iSum = iSum + (iValue % 10);
	
	iValue = iValue /10;
	
	SumDigitsR(iValue);
  }
  return iSum;
}

int main()
{
  int iNo = 0;
  int iRet = 0;
  
  printf("Enter The Number \n");
  scanf("%d",&iNo);
  
  iRet = SumDigits(iNo);
  
  printf("Addition of digits : %d \n",iRet);

    iRet = SumDigitsR(iNo);
  
  printf("Addition of digits using recursion : %d",iRet);
return 0;
}

/*

output

Enter The Number
123
Addition of digits : 6
Addition of digits using recursion : 6

*/