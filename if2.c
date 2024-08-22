// write a program that find char is vowel or not

#include<stdio.h>
void main()
{
      char text;

      printf("enter a character : ");
      scanf("%c",&text);

      // printf("%c",text);

      // if(text == 'a')
      // {
      //       printf("%c is vowel",text);
      // }
      // if(text == 'e')
      // {
      //       printf("%c is vowel",text);
      // }
      // if(text == 'i')
      // {
      //       printf("%c is vowel",text);
      // }
      // if(text == 'o')
      // {
      //       printf("%c is vowel",text);
      // }
      // if(text == 'u')
      // {
      //       printf("%c is vowel",text);
      // }

      // or = || 
      // and = &&

      if(text=='a' || text=='i' || text=='e' || text=='o' || text=='u')
      {
            // printf("character is vowel");
            printf("%c is vowel",text);
      }
}