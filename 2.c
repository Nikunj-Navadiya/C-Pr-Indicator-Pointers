#include <stdio.h>

// C program to input and print array elements using pointers and find even elements of array.

void main(){
    int ch[50], no, i, *p=ch[i];

    printf("Enter size of Array: ");
    scanf("%d", &no);
    

    for (i=0; i<no; i++){
    	printf("ch[%d] = ",i);
        scanf("%d", &ch[i]);   
    }
	
	printf("\nArray Elements...\n");
    for (i=0; i<no; i++){
    	printf("ch[%d] :- %d\n",i,ch[i]);
    }
    for(i=0; i<no; i++){
    	if(ch[i] % 2 == 0){
    		printf("Even Number :- %d\n",ch[i]);
		}
	}
}
