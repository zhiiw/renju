#include<stdio.h>
#include<ctype.h>
typedef struct Point
{
    int row;
    int col;
    int status;
}Point;
enum test{Z,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O};
void init(char s[15][15]){
    for (size_t i = 0; i < 15; i++)
    {
        for (size_t j = 0; j < 15; j++)
        {
            s[i][j]=0;//initialize the array;
        }

    }

}
void getStatus(int s[15][15]){
    int nCol;
    int nRow;
    int turn = 0;
    turn=turn++;
    scanf("%d%d", &nCol, &nRow);
    int next[10][10];
    if (turn % 2 ==0)
    {
        next[nCol][nRow] = 1;//Black pieces
    }
    else
    {
        next[nCol][nRow] = -1;//White pieces
    }
}
void judgeRenjoCollum(int s[15][15],int nCol,int nRow) {
    //judge whether player have won.
    int countBlack = 0;
    int countWhite = 0;
    if (s[nCol][nRow+1]==1)
    {
        countBlack++;
    }
    else if(s[nCol][nRow + 1] == 0 )
    {
        countWhite++;
    }
}

int setStatus() {
    //change the renju to black or white.

}
