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
