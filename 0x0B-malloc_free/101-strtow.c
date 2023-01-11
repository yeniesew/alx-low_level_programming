#include <stdlib.h>
#include <stdio.h>
/**
* word_len - Entry point
* @s: pointer to the string
* Return: 0
*/
int word_len(char *s)
{
int flag, a, w;
flag = 0;
w = 0;
for (a = 0; s[a] != '\0'; a++)
{
if (s[a] == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
w++;
}
}
return (w);
}
/**
* strtow - Entry point
* @str: pointer to split string
* Return: pointer to an array of strings (Success) or NULL (Error)
*/
char **strtow(char *str)
{
char **mal, *tmp;
int i, k = 0, len = 0, words, a = 0, start, end;
while (*(str + len))
len++;
words = word_len(str);
if (words == 0)
return (NULL);
mal = (char) malloc(sizeof(char *) * (words + 1));
if (mal == NULL)
return (NULL);
for (i = 0; i <= len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (a)
{
end = i;
tmp = (char *) malloc(sizeof(char) * (a + 1));
if (tmp == NULL)
return (NULL);
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
mal[k] = tmp - a;
k++;
a = 0;
}
}
else if (a++ == 0)
start = i;
}
mal[k] = NULL;
return (mal);
}
