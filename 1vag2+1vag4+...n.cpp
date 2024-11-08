 #include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{

      float i,n,s=0;
      printf("enter the value of n");
      scanf("%f",&n);
      for(i=2;i<=n;i+=2)
      {
      	s=s+(1/i);
	  }
	  printf("Sum=%f",s);
	
getch();
return 0;

}
