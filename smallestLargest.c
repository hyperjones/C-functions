#include <stdbool.h>
#include <string.h>
#include <stdio.h>

bool checkLength(char *str);
void readInput(char *str, int n);
int main()
{
   char word[10];
   char largest[10];
   char smallest[10];
   
   
   for(;;)
   {
      printf("Enter a word: ");
      readInput(word, 10);
      
      if(checkLength(word))
      {
         break;
      }
      
      if(strcmp(word, largest) > 0)
      {
         strcpy(largest, word);
      }else if(strcmp(word, largest) < 0)
      {
         strcpy(smallest, word);
      }
   }
   
   printf("Largest: %s\n", largest);
   printf("Smallest: %s\n", smallest);
   return 0;
}
void readInput(char *str, int n)
{
   int i = 0;
   char c;
   
   while((c = getchar()) != '\n')
   {
      if(isalpha(c) && i < n)
      {
         *str++ = c;
      }
   }
   
   *str = '\0';
}

bool checkLength(char *str)
{
   if(strlen(str) == 4)
   {
      return true;
   }
   
   return false;
}
