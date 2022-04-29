#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char input[16];
char* openFile(char *filename, int select);
int readWord(char *argv);

int main (int argc, char **argv)
{
	// input File Name
	char *det = "input1.txt";
	// Output String
	char *output;
	
	int select = 1;
	// Number of words that need to be selected
	if (argc > 1)
	 select=readWord(argv[1]);
	
	output=openFile(det,select);
	printf("%s\n",output);
}

int readWord(char *argv)
{
	int word;
	printf("Which number word do you want selected? ");
	scanf("%d",&word);
	printf("word is %d\n",word);
	
	//strcpy does not check buffer lengths
	strcpy(input,argv);
	return word;
}

char* openFile(char *filename, int select)
{
	int x;
	FILE *f0;
	char *fileScan;
	fileScan=malloc(16);
	if ((f0=fopen(filename,"r"))==NULL) 
	{
		printf("Error\n");
		exit(0);
	}

	for (x=0;x<(select+1);x++)
	  fscanf(f0,"%s",fileScan);
	fclose(f0);
	return fileScan;
}
