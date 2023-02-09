#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 16
#define CSIZE 19

struct player
{
    char first_name[SIZE];
    char last_name[SIZE];
    int play_time;
    int hit_time;
    int run_time;
    int rbi;
    float hit_rate;
};

int main(void)
{
    FILE *fp;
    struct player club[CSIZE]={0};
    struct player tmp;
    int i,id;

    if ((fp=fopen("player_data.txt","r"))==NULL)
    {
        fprintf(stderr,"Can't open file %s\n","player_data.txt");
        exit(EXIT_FAILURE);
    }
    while (fscanf(fp,"%d%s%s%d%d%d%d",&id,tmp.first_name,tmp.last_name,
        &tmp.play_time,&tmp.hit_time,&tmp.run_time,&tmp.rbi)==7)
    {
        strcpy(club[id].first_name,tmp.first_name);
        strcpy(club[id].last_name,tmp.last_name);
        club[id].play_time+=tmp.play_time;
        club[id].hit_time+=tmp.hit_time;
        club[id].run_time+=tmp.run_time;
        club[id].rbi+=tmp.rbi;
    }
    fclose(fp);

    //计算安达率
    for (i=0;i<CSIZE;i++)
        if (club[i].play_time)
            club[i].hit_rate=1.0*club[i].hit_time/club[i].play_time;

    //打印数据
    for (i=0;i<CSIZE;i++)
        if (club[i].play_time)
            printf("%d %s %s %d %d %d %d %.2f\n",i,club[i].first_name,
            club[i].last_name,club[i].play_time,club[i].hit_time,
            club[i].run_time,club[i].run_time,club[i].hit_rate);

    return 0;
}