// Emily Tran, Kaiden Farthing, Chase Neilson
// 11-25-24
// Final Project-Team 7

#include <stdio.h>
#define FILENAME "madlib2.txt"

void getBlanks(FILE* fin, char storyBlanks[]);
int longestLine(FILE* fin); /* Will return length int */
void getStory(FILE* fin, int columns, int rows, char storyText[][columns]);
void promptUser(FILE* fin, char storyBlanks[], int columns, int rows, /*
 */ char storyText[][columns]);
void displayStory(int columns, int rows, char storyText[][columns]);

int main(){
	
	return 0;
}

void getBlanks(FILE* fin, char storyBlanks[]){

}

int longestLine(FILE* fin){

}

void getStory(FILE* fin, int columns, int rows, char storyText[][columns]){
	while(fscanf(fin, "%c", storyText) == 1){
		
	}
}

void promptUser(FILE* fin, char storyBlanks[], int columns, int rows, /*
*/ char storyText[][columns]){
	
}

void displayStory(int columns, int rows, char storyText[][columns]){
	
}

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

