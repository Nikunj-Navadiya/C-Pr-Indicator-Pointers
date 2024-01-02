#include<stdio.h>


//C program to swap two numbers using pointers.

void main(){
	int a, b;
	printf("Enter Value A :- ");
	scanf("%d", &a);
	printf("Enter Value B :- ");
	scanf("%d", &b);
	swap (&a,&b); 
}

void swap(int *p, int *q){
	int c;
	c = *p;
	*p = *q;
	*q = c;
	printf("\nSwap Two Numbers....\n");
	printf("\nA Value = %u\n", *p);
	printf("B Value = %u\n", *q);
}
