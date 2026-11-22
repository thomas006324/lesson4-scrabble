#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Points for each letter: index 0 is A, index 1 is B, ... index 25 is Z
int POINTS[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3,
                  1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

// Adds up the points of every letter in a word
int compute_score(string word);

int main(void)
{
    // Read one word for each player
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words with the same function
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // Say who wins, or if it is a tie
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
{
    int score = 0;

    // For each character in the word
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        // Only letters score; spaces, hyphens and digits are skipped
        if (isalpha(word[i]))
        {
            // Make it uppercase, then subtract 'A' (65) to get an index from 0 to 25
            int index = toupper(word[i]) - 'A';
            score += POINTS[index];
        }
    }
    return score;
}
