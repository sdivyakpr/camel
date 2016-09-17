#include<stdio.h>
#include<conio.h>

void upp_str(char []);
 
int main()
{
   char string[150]={'a','b','c','d'};
 
   gets(str);
 
   upp_str(str);
 
   printf("upper case is \"%s\"\n", string);
 
   return 0;
}
 
void upper_string(char s[]) 
{
   int l= 0;
 
   while (s[l] != '\0')
   {
      if (s[l] >= 'a' && s[l] <= 'z')
      {
         s[l] = s[l] - 32;
      }
      l++;
   }
}
