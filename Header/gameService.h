#include<stdio.h>
#include<ctype.h>
typedef struct Point
{
    int row;
    int col;
    int statusk
};
int judge(Point spPont);
int judgeHorizontal(const Point sPoint);
int judgeVertical(const Point sPoint);
int judgeHyperphoria(const Point sPoint);
int judgeHyporphoria(const Point sPoint);
int getStatus(const Point spPoint);
void setStatus(const Point spPoint);