// Emily Tran, Kaiden Farthing, Chase Neilson
// 11-25-24
// Final Project-Team 7

#include <stdio.h>

#define FILENAME "madlib2.txt"
#define ARBCOL 100

int getRows(FILE* fin);
void getStory(FILE* fin, int columns, int rows, char storyText[][columns]);
void promptUser(int columns, int rows, char storyText[][columns]);
void displayStory(int rows, int colSize, char storyArray[][colSize]);

int main(){
	FILE* fptr;
	
	fptr = fopen(FILENAME, "r");
	
	if(fptr == NULL){
		printf("Could not open %s, please try again.\n", FILENAME);
		return 0;
	}
	
	int rows = getRows(fptr);

	// Initialize story array with row func variable and arbitrary column amount
	char story[rows][ARBCOL];

	// Open file again to read from start
	fptr = fopen(FILENAME, "r");

	// Run madlibs functions
	getStory(fptr, ARBCOL, rows, story);
	promptUser(ARBCOL, rows, story);
	displayStory(ARBCOL, rows, story);
	
	fclose(fptr);
	
	return 0;
}

int getRows(FILE* fin){
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

void getStory(FILE* fin, int columns, int rows, char storyText[][columns]){	
	// Just grabs strings
	for(int rowIndex = 0; rowIndex < rows; rowIndex++){
		fgets(storyText[rowIndex], columns, fin);
	}
}

void promptUser(int columns, int rows, char storyText[][columns]){
	
}

void displayStory(int rows, int colSize, char storyArray[][colSize]) {
	
}
