// Emily Tran, Kaiden Farthing, Chase Neilson
// 11-25-24
// Final Project-Team 7

#include <stdio.h>
#define FILENAME "madlib2.txt"

void getBlanks(FILE* fin, char storyBlanks[]);
int getRows(FILE* fin);
int longestLine(FILE* fin);
void getStory(FILE* fin, int columns, int rows, char storyText[][columns]);
void promptUser(FILE* fin, char storyBlanks[], int columns, int rows, /*
 */ char storyText[][columns]);
void displayStory(int columns, int rows, char storyText[][columns]);

int main(){
	FILE* fptr;
	
	fptr = fopen(FILENAME, "r");
	
	if(fptr == NULL){
		printf("Could not open %s, please try again.\n", FILE_INPUT);
		return 0;
	}
	
	char story[getRows(fptr)][longestLine(fptr)];
	char blanks[]; // How long should the array storing blanks be?
	
	fclose(fptr);
	
	return 0;
}

void getBlanks(FILE* fin, char storyBlanks[]){

}

int getRows(FILE* fin){

}

int longestLine(FILE* fin){

}

void getStory(FILE* fin, int columns, int rows, char storyText[][columns]){	
	char i;
	for(int rowIndex = 0; rowIndex < rows; rowIndex++){
		if(fscanf(fin, "N\0", &i) == 1 || /*
		*/ fscanf(fin, "A\0", &i) == 1 || /*
		*/ fscanf(fin, "V\0", &i) == 1 ){
			storyText[rowIndex][0] = '\0';
		}else{
			fscanf(fin, "%s", storyText[rowIndex]);
		}
	}
}

void promptUser(FILE* fin, char storyBlanks[], int columns, int rows, /*
*/ char storyText[][columns]){
	
}

void displayStory(int columns, int rows, char storyText[][columns]){
	
}

/*
//store story and null characters where blanks are
//but needs to know how many rows
for(int i = 0; i < numRows; i++) {
	char strArr[100];
	if((fscanf(fin, "N\n", &) == 1) || (fscanf(fin, "V\n", &) == 1) || (fscanf(fin, "A\n", &) == 1)) {
		storyArray[i][0] = '\0';
	}
	else {
		fscanf(fin, "%s", &storyArray[i]);
	}
}

//replace null characters with user input
for(int i = 0; i < numRows; i++) {
	int j = 0;
	if(storyArray[i][0] == '\0') {
		promptUser(j, storyArray[i][MACRO], blanksArray[i]);
		scanf("%s", &storyArray[i]);
		j++;
	}
}

//prompt user based on what kind of blank needs to be filled
printf("Please enter a ");
if(blanksArray[j] == 'A') {
	printf("adjective: ");
}
else if(blanksArray[j] == 'V') {
	printf("verb: ");
}
else if(blanksArray[j] == 'N') {
	printf("noun: ");
}
*/
