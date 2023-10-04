#include <stdio.h>
int main()
{
	char ch;
    printf("Enter any alphabet to check whether it is vowel or cosonant:-");
    scanf("%s",&ch);
	if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E'
		|| ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O'
		|| ch == 'u' || ch == 'U') {

		printf("The character %c is a vowel.\n", ch);
	}
	else {
		printf("The character %c is a consonant.\n", ch);
	}
}
