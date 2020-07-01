#include<stdio.h>
#include<ctype.h>
int AnChessStauts[15][15];
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
int judge(const int nRow, const int nCol) {
    int nStandard;
    if (judgeHorizontal(nRow,nCol,1)>=5|| judgeVertical(nRow, nCol, 1) >= 5 || judgeHyperphoria(nRow, nCol, 1) >= 5|| judgeHyporphoria(nRow, nCol, 1) >= 5)
    {
        printf("----------Black Win-----------");
    }
    if(judgeHorizontal(nRow, nCol, -1) >= 5 || judgeVertical(nRow, nCol, -1) >= 5 || judgeHyperphoria(nRow, nCol, -1) >= 5 || judgeHyporphoria(nRow, nCol, -1) >= 5)
    {
        printf("----------White Win-----------");
    }
}


int judgeHorizontal(const int nRow, const int nCol, const int nStandard) {
    int i, j;
    int counter = 1;
    j = nCol - 1;
    i = nRow;
    while (j >= 0)
    {
        if (AnChessStatus[i][j--] == nStandard)
        {
            counter++;
        }
        else
        {
            break;
        }
    }
    j = nCol + 1;
    while (j<=14)
        {
            if (AnChessStauts[i][j++] == nStandard)
            {
                counter++;
            }
            else
            {
                break;
            }
        }    
    return counter;    
}

int judgeVertical(const int nRow, const int nCol, const int nStandard) {
    int i, j;
    int counter = 1;
    j = nCol ;
    i = nRow- 1;
    while (i >= 0)
    {
        if (AnChessStatus[i--][j] == nStandard)
        {
            counter++;
        }
        else
        {
            break;
        }
        i = nRow + 1;
        while (i <= 14)
        {
            if (AnChessStauts[i++][j] == nStandard)
            {
                counter++;
            }
            else
            {
                break;
            }
        }
        return counter;
    }
}
int judgeHyperphoria(const int nRow, const int nCol, const int nStandard) {
    int i, j;
    int counter = 1;
    j = nCol - 1;
    i = nRow - 1;
    while (j >= 0&&i>=0)
    {
        if (AnChessStatus[i--][j--] == nStandard)
        {
            counter++;
        }
        else
        {
            break;
        }
        j = nCol + 1;
        i = nRow + 1;
        while (j <= 14)
        {
            if (AnChessStauts[i++][j++] == nStandard)
            {
                counter++;
            }
            else
            {
                break;
            }
        }
        return counter;
    }
}
int judgeHyporphoria(const int nRow, const int nCol, const int nStandard) {
    int i, j;
    int counter = 1;
    j = nCol - 1;
    i = nRow+1;
    while (j >= 0&&i<=14)
    {
        if (AnChessStatus[i++][j--] == nStandard)
        {
            counter++;
        }
        else
        {
            break;
        }
        j = nCol + 1;
        i = nRow + 1;
        while (j <= 14&&i>=0)
        {
            if (AnChessStauts[i--][j++] == nStandard)
            {
                counter++;
            }
            else
            {
                break;
            }
        }
        return counter;
    }
}
