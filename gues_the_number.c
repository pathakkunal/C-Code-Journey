#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int number, guess, attempts=0;
	srand(time(0));
	number = rand()% 100+1;
	printf("Welcome to the number Guessing game!\n");
	printf("I have picked a number between 1 and 100. Can you guess it?\n");
	do{
		printf("Enter your guess:");
		scanf("%d", &guess);
		attempts++;
		if ( guess> number){
			printf("Lower number please!\n");
		} else if (guess<number){
			printf("Higher number please!\n");
		} else{
			printf("Congratulations! You guessed the correct number in %d attempts.\n", attempts);
		}
	}while(guess!= number);
	return 0;
}