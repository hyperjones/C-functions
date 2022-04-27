#include <stdbool.h>
#include <stdio.h>
//This program converts lowercase letter to uppercase letter
char toUppercase(char c);
bool isalphanum(char c);
int main()
{
   printf("Enter a letter: ");
   char c;
   scanf(" %c", &c);
   
   char uppercase = toUppercase(c);
   bool isAlpha = isalphanum(uppercase);
   
   if(isAlpha)
   {
      printf("Uppercase: %c\n", uppercase);
   }
   else
   {
      printf("Invalid\n");
   }
   return 0;
}

char toUppercase(char c)
{
   int upper;
   if( c >= 'a' && c <= 'z')
   { 
      upper = 'Z'  - ('z' - c );
   }
   return upper;
}
bool isalphanum(char c)
{
   if(c >= 'A' && c <= 'Z')
   {
      return true;
   }
   
   return false;
}
