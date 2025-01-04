#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{

    char str1[] = "spare";
    char str2[] = "pears";
    is_anagram(str1,str2);
    return 0;
}
int is_anagram(char * str1,char * str2)
{
    int list_str1[26] = {0};
    int list_str2[26] = {0};
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if(len1 != len2)
    {
        printf("not anagram");
        return 0;
    }
    for(int i = 0; i < len1; i++)
    {
        int lower = tolower(str1[i]);
        list_str1[lower - 97]++;
    }
    for(int i = 0; i < len2; i++)
    {
        int lower = tolower(str2[i]);
        list_str2[lower - 97]++;
    }
    for(int i = 0; i < 26 ; i++)
    {
        if(list_str1[i] != list_str2[i])
        {
            printf("not anagram");
            return 0;
        }
    }
    printf("anagram");
    return 1;
}
