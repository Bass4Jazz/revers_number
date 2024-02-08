#include<stdio.h>

int cycle_ver(int num)
{  
   int temp = 0;

   while(num)
   {
      temp = temp * 10 + num % 10;
      num /= 10;   
   }
   return temp;
}

int rec_ver(int num, int temp)
{
   if(num)
      temp = rec_ver(num / 10, temp * 10 + num % 10);
   return temp;
}

int main(void)
{
   int num = 12345, temp = 0;
   
   num = cycle_ver(num);
   printf("%d\n", num);

   num = rec_ver(num, temp);
   printf("%d\n", num);

   return 0;
}
