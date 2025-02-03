#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(char you, char computer)
{
	if (you == computer)
		return -1;

	if (you == 's' && computer == 'p')
		return 0;
	else if (you == 'p' && computer == 's') return 1;

	if (you == 's' && computer == 'z')
		return 1;
	else if (you == 'z' && computer == 's')
		return 0;

	if (you == 'p' && computer == 'z')
		return 0;
	else if (you == 'z' && computer == 'p')
		return 1;
}

int main()
{
	int n, player_score = 0, computer_score = 0;
	char you, computer;
	srand(time(NULL));

	while (player_score < 3 && computer_score < 3) {
		n = rand() % 100;
		if (n < 33)
			computer = 's';
		else if (n > 33 && n < 66)
			computer = 'p';
		else
			computer = 'z';

		printf("\n\tEnter s for STONE, p for PAPER and z for SCISSOR\n\t");
		scanf(" %c", &you);

		int result = game(you, computer);

		if (result == -1) {
			printf("\n\t Game Draw!\n");
		} else if (result == 1) {
			printf("\n\t\t Wow! You have won this round!\n");
			player_score++;
		} else {
			printf("\n\t\t Oh! You have lost this round!\n");
			computer_score++;
		}
		printf("\t\t\t You chose: %c and Computer chose: %c\n", you, computer);
		printf("\t\t Current Score - You: %d | Computer: %d\n", player_score, computer_score);
	}

	if (player_score == 3) {
		printf("\n\t\t Congratulations! You won the game!\n");
	} else {
		printf("\n\t\t Sorry! The computer won the game!\n");
	}

	return 0;
}
