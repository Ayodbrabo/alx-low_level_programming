#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * is_whitespace - a function that returns white space
 * @c: is a char
 * Return: returns a white space
 */
int is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}
/**
 * count_words - counts the words in a string
 * @str: is a string pointer
 * Return: returns a count
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (is_whitespace(*str))
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}
/**
 * strdup_word - a function that returns a dup
 * @start: is a char string to be dup
 * @length: is the length of the dup
 * Return: returns the word
 */
char *strdup_word(char *start, int length)
{
	char *word;
	int i;

	word = malloc((length + 1) * sizeof(char));
	if (word == NULL)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	for (i = 0; i < length; i++)
	{
		word[i] = start[i];
	}
	word[length] = '\0';
	return (word);
}
/**
 * strtow - a function that splits a string into words.
 * @str: is a string pointer
 * Return: returns NULL or words count
 */
char **strtow(char *str)
{
	int num_words, word_index, word_length, in_word;
	char **words;
	char *word_start;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	num_words = count_words(str);
	if (num_words == 0)
	{
		return (NULL);
	}
	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	word_index = word_length = in_word = 0;
	word_start = str;
	while (*str)
	{
		if (is_whitespace(*str))
		{
			if (in_word)
			{
				words[word_index] = strdup_word(word_start, word_length);
				word_index++;
				word_length = 0;
				in_word = 0;
			}
		}
		else
		{
			if (!in_word)
			{
				word_start = str;
			}
			word_length++;
			in_word = 1;
		}
		str++;
	}
	if (in_word)
	{
		words[word_index] = strdup_word(word_start, word_length);
		word_index++;
	}
	words[word_index] = NULL;
	return (words);
}
