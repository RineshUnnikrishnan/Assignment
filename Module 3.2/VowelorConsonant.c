#include<stdio.h>
void main()
{
    char ch;
    printf("Enter the alphabet :");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
    {
    switch(ch)
    {
        case'a':
        case'e':
        case'i':
        case'o':
        case'u':
        case'A':
        case'E':
        case'I':
        case'O':
        case'U':
        printf("Alphabet is a Vowel");
        break;

        default:
        printf("Alphabet is a consonant");
    }
    }
    else
    printf("Note : Enter only alphabets\nNo other characters allowed");
}