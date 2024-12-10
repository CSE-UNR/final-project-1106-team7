// Emily Tran, Kaiden Farthing, Chase Neilson
// 11-25-24
// Final Project-Team 7

#include <stdio.h>
#define FILENAME "madlib2.txt"
#define ARBCOL 100

void getStory(FILE* fin, int columns, int rows, char storyText[][columns]);
void promptUser(int columns, int rows, char storyText[][columns]);
void displayStory(int rows, int colSize, char storyArray[][colSize]);
int getRows(FILE* fin);

int main(){
	FILE* fptr;
	
	fptr = fopen(FILENAME, "r");
	if(fptr == NULL){
		printf("Could not open %s, please try again.\n", FILENAME);
		return 0;
	}
	
	int totalRows = getRows(fptr);
	
	char story[totalRows][ARBCOL];
	char input[ARBCOL];

	fptr = fopen(FILENAME, "r");
	if(fptr == NULL){
		printf("Could not open %s, please try again.\n", FILENAME);
		return 0;
	}

	getStory(fptr, ARBCOL, totalRows, story);
	
	promptUser(ARBCOL, totalRows, story);
	
	displayStory(totalRows, ARBCOL, story);
	
	fclose(fptr);
	
	return 0;
}

void getStory(FILE* fin, int columns, int rows, char storyText[][columns]) {	
	for(int rowIndex = 0; rowIndex < rows; rowIndex++){
		fgets(storyText[rowIndex], columns, fin);
	}
}

void promptUser(int columns, int rows, char storyText[][columns]) {
	for(int i = 0; i < rows; i++) {
		if(storyText[i][0] == 'A' && storyText[i][1] == '\n') {
			printf("Please enter a adjective: ");
			scanf("%s", storyText[i]);
		}
		else if(storyText[i][0] == 'V' && storyText[i][1] == '\n') {
			printf("Please enter a verb: ");
			scanf("%s", storyText[i]);
		}
		else if(storyText[i][0] == 'N' && storyText[i][1] == '\n') {
			printf("Please enter a noun: ");
			scanf("%s", storyText[i]);
		}
	}
}

void displayStory(int rows, int colSize, char storyArray[][colSize]) {
	for(int i = 0; i < rows; i++) {
		for(int j = 0; storyArray[i][j] != '\n' && storyArray[i][j] != '\0'; j++) {
			printf("%c", storyArray[i][j]);
		}
		
		if(storyArray[i+1][0] != '.' && storyArray[i+1][0] != '?' && storyArray[i+1][0] != '!' && storyArray[i+1][0] != ',') {
			printf(" ");
		}
	}
}

int getRows(FILE* fin) {
	char test;
	int rowIndex = 0;

	// Loop counting endline characters
	while(fscanf(fin, "%c", &test) == 1){
		if(test == '\n'){
			rowIndex++;
		}
	}
	
	return rowIndex;
}
