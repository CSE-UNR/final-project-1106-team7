// Emily Tran, Kaiden Farthing, Chase Neilson
// 11-25-24
// Final Project-Team 7

#include <stdio.h>
#define FILENAME "madlib2.txt"

int getRows(FILE* fin);
int longestLine(FILE* fin);
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
	int cols = longestLine(fptr);
	
	char story[rows][cols];
	
	getStory(fptr, cols, rows, story);
	promptUser(cols, rows, story);
	displayStory(cols, rows, story);
	
	fclose(fptr);
	
	return 0;
}

int getRows(FILE* fin){

}

int longestLine(FILE* fin){

}

void getStory(FILE* fin, int columns, int rows, char storyText[][columns]){	
	for(int rowIndex = 0; rowIndex < rows; rowIndex++){
		fgets(storyText[rowIndex], columns, fin);
	}
}

void promptUser(int columns, int rows, char storyText[][columns]){
	
}

void displayStory(int rows, int colSize, char storyArray[][colSize]) {
	for(int i++ = 0; i++ < rows; i++) {
		for(int j = 0; storyArray[i][j] != '\0'; j++) {
			if(storyArray[i][j] == '\n') {
				printf(" ");
			}
			else {
				printf("%c", storyArray[i][j]);
			}
		}
	}
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

// replaces endline characters with spaces
void deleteEndlines(int columns, int rows, char storyText[][columns]){
	for(int rowIndex = 0; rowIndex < rows; rowIndex++){
		for(int colIndex = 0; colIndex < columns; colIndex++){
			if(storyText[rowIndex][colIndex] == '\n'){
				storyText[rowIndex][colIndex] = ' ';
			}
		}
	}
*/
