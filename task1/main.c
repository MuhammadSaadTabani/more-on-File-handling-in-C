#include <stdio.h>
#include <stdlib.h>


void main(void){
	char path1[100],path2[100],ch;
	int ch_counter = 0;
	FILE *f1,*f2;
	printf("Enter source file path: ");
	gets(path1);
	printf("\nEnter destination file path: ");
	gets(path2);                                             
	f1 = fopen(path1,"r");
	f2 = fopen(path2,"w");
	while(ch=fgetc(f1)!= EOF){
		ch_counter++;
		fprintf(f2,"%c",ch);
	}
	fclose(f1);
	fclose(f2);
	printf("\nFiles copied successfully");
	printf("\nTotal Characters copied are %d",ch_counter);
	
}
