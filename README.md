# Lesson 4: Scrabble (IT 145-5)

**scrabble.c** asks two players for a word each, scores both words with standard Scrabble letter values, and prints `Player 1 wins!`, `Player 2 wins!` or `Tie!`. Letter values live in an array of 26 integers; each letter becomes an index by converting it to uppercase and subtracting `'A'`. Anything that is not a letter scores zero.

Compile and run:

    make scrabble
    ./scrabble
