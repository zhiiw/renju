#include<stdio.h>
#include<ctype.h>
void init();
int judge(const int nRow, const int nCol);
int judgeHorizontal(const int nRow, const int nCol, const int nStandard);
int judgeVertical(const int nRow, const int nCol, const int nStandard);
int judgeHyperphoria(const int nRow, const int nCol, const int nStandard);
int judgeHyporphoria(const int nRow, const int nCol, const int nStandard);
int getStatus(const int nRow, const int nCol);
void setStatus(const int nRow, const int nCol, int turn);
int isWin(int nRow, int nCol);