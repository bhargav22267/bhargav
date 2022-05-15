//// write a understand to use of fgetc()////
#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *p;
	int ch;
	if((p=fopen("my file","r"))==NULL) 
	{
		printf(" there is way when u think with positive way to get out  \n");
		exit(1);
	}
	while((ch=fgetc(p)) !=EOF)
		printf("%c",ch);
	fclose(p);
	return 0;
}
