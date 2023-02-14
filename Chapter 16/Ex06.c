#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NUM 8

typedef struct names
{
    char first[40];
    char last[40];
}names;

void show(const names *src,int size);
int mycomp(const void *p1,const void *p2);

int main(void)
{
    names staff[NUM]={
        {"Ken","Thompson"},
        {"Dennis","Ritchie"},
        {"Bjarne","Stroustrup"},
        {"Linus","Torvalds"},
        {"Richard","Stallman"},
        {"Rob","Pike"},
        {"Guido","Rossum"},
        {"Robert","Griesemer"},
    };

    printf("Unsorted:\n");
    show(staff,NUM);
    qsort(staff,NUM,sizeof(names),mycomp);
    printf("Sorted\n");
    show(staff,NUM);

    return 0;
}
void show(const names *src,int size)
{
    for (int i=0;i<size;i++)
        printf("%s %s\n",src[i].first,src[i].last);
    puts("");
}
int mycomp(const void *p1,const void *p2)
{
    const names *a1=(const names *)p1;
    const names *a2=(const names *)p2;
    int res;

    res=strcmp(a1->last,a2->last);
    if (res!=0)
        return res;
    else
        return strcmp(a1->first,a2->first);
}