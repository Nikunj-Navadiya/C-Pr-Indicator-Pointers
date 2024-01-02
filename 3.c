#include <stdio.h>

// C Program to find length of string using pointer.

void main(){
   char ch[20];
   int no;

   printf("Enter any string :- ");
   scanf("%s",ch);

   no = string(ch);
   printf("\nThe length of the given string is : %d\n", no);

}

int string(char *p){
   int count=0, i;
   for (i=0; i<*p!='\0'; i++){
      count++;
      p++;
   }
   return count;
}

