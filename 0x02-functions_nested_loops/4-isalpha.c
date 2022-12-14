#include <ctype.h>
#include <stdio.h>
/**
** _isalpha - checks for alphabetic character.
 *@c: The character to be checked*Return: 1 alphabticcharacteror 0 anythinge.
*isalpha : int argument.
**/
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || ((c <= 97 && c <= 122))
return (1);
return (0);
}
int main(void)
{
printf ("%d\n", our_isalpha ('a' -1));
printf ("%d\n", our_isalpha ('a'));
return (0);
}
