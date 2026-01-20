#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ARR_SIZE 51

typedef struct {
    char s1[ARR_SIZE];
} word;

int compare(const void *a, const void *b)
{
    word *a1 = (word *)a;
    word *b1 = (word *)b;
    if (strlen(a1->s1) != strlen(b1->s1))
        return strlen(a1->s1) - strlen(b1->s1);
    else
        return strcmp(a1->s1, b1->s1);
}

int main()
{
    word str[20000];
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%s", str[i].s1);
    
    qsort(str, n, sizeof(word), compare);
    for(int i = 0 ; i < n; i++)
        {
            if(strcmp(str[i].s1, str[i+1].s1) != 0)
                printf("%s\n", str[i].s1);
        }
    return 0;
}