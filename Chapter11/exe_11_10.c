#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 128
#define LIM 10

int get_ten_lines(char **input);
void print_origin(char **input, int cnt);
void print_by_ascii(char **input, int cnt);
void print_by_str_length(char **input, int cnt);
void print_by_word_length(char **input, int cnt);

int main(void)
{
    char *input[LIM];
    char str[LIM][SIZE];
    printf("Enter up to %d lines: \n", LIM);
    int cnt  = 0;
    while(cnt < LIM && gets(str[cnt]) != NULL)
    {
        input[cnt] = str[cnt];
        cnt++;
    }
    char ch;

    while(1) 
    {
        printf("Please select:\n");
        printf("a. print originally string list.\n"); 
        printf("b. print string list in order of string's ascii.\n");
        printf("c. print string list in order of string's length.\n");
        printf("d. print string list in order of first word's length.\n");
        printf("q. quit\n");
        ch = getchar();
        getchar();
        if(ch == 'q')
            break;
        switch(ch)
        {
            case 'a':
                print_origin(input, cnt);
                break;
            case 'b':
                print_by_ascii(input, cnt);
                break;
            case 'c':
                print_by_str_length(input, cnt);
                break;
            case 'd':
                print_by_word_length(input,cnt);
                break;
            default:
                break;
        }
    }

    return 0;
}

int get_ten_lines(char **input)
{
    int ct = 0;
    while(ct < LIM && gets(input[ct]) != NULL)
        ct++;

    return ct;
}

void print_origin(char **input, int cnt)
{
    int i;
    for(i = 0; i < cnt; i++)
        puts(input[i]);
}
void print_by_ascii(char **input, int cnt)
{
    int i, j;
    char *temp;
    for(i = 0; i < cnt; i++)
        for(j = i+1; j < cnt; j++)
        {
            if(strcmp(input[i], input[j]) > 0)
            {
                temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }

    print_origin(input, cnt);
}
void print_by_str_length(char **input, int cnt)
{
    int i, j;
    char *temp;
    for(i = 0; i < cnt; i++)
        for(j = i+1; j < cnt; j++)
        {
            if(strlen(input[i]) > strlen(input[j]))
            {
                temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }

    print_origin(input, cnt);
}

int first_word_length(char *str)
{
    while(!isalpha(*str))
        if(*str == '\0')
            return 0;

    int i;
    for(i = 1; isalpha(*(str+i)); i++)
        continue;

    return i;
}
void print_by_word_length(char **input, int cnt)
{
    int i, j;
    char *temp;
    for(i = 0; i < cnt; i++)
        for(j = i+1; j < cnt; j++)
        {
            if(first_word_length(input[i]) > first_word_length(input[j]))
            {
                temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }

    print_origin(input, cnt);
}
