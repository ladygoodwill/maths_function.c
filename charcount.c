#include<stdio.h>
#include<string.h>

int main ()
{
    char word[255];
    int count[26]={0};
    int i, len;
    char letter;
    
    printf("Enter your string: \n");
    scanf("%[^\n]", word);
    
    
    len = strlen(word);
    
    for(i=0; i<len; i++)
    {
        if (word[i] > 64 && word[i] < 91)
        {
            count[word[i] - 65]++;
        }
        if (word[i] > 96 && word[i] < 123)
        {
            count[word[i]-97]++;
        }
    }
    
    for (i = 0; i < 13; i++)
    {
        letter = i+97;
        printf("%c: %d\n", letter, count[i]);
    }
    
    for (i=13; i<26; i++)
    {
        letter = i+97;
        printf("%c: %d\n", letter, count[i]);
    }
    
    return 0;
}
    
    
    
        
