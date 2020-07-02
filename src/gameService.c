#include<stdio.h>
#include<ctype.h>
extern int AnChessStatus[15][15];
extern int turn=1;
void init(){
    for (size_t i = 0; i < 15; i++)
    {
        for (size_t j = 0; j < 15; j++)
        {
            AnChessStatus[i][j] =0;//initialize the array;
        }

    }

}
int getStatus(int nRow, int nCol) {
    
    scanf("%d%d", &nRow, &nCol);    
    
    system("pause");
    if (AnChessStatus[nRow][nCol] == 1 || AnChessStatus[nRow][nCol] == -1)
    {
        printf("请不要重复输入。");
        return 0;
    }
    if (turn % 2 == 1 || turn == 1)
    {
        AnChessStatus[nRow][nCol] = 1;//黑棋加入
        turn++;
        return 0;
    }
    else if (turn % 2 == 0)
    {
        AnChessStatus[nRow][nCol] = -1;
        turn++;
        printf("1");
        system("pause");
        return 0;
    }
    printf("1");
    system("pause");
    return 0;

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
            if (AnChessStatus[i][j++] == nStandard)
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
    }
    i = nRow + 1;
    while (i <= 14)
    {
        if (AnChessStatus[i++][j] == nStandard)
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
int judgeHyperphoria(const int nRow, const int nCol, const int nStandard) {
    int i, j;
    int counter = 1;
    j = nCol - 1;
    i = nRow - 1;
    while (j >= 0 && i >= 0)
    {

        if (AnChessStatus[i--][j--] == nStandard)
        {
            counter++;
        }
        else
        {
            break;
        }
    }
    j = nCol + 1;
    i = nRow + 1;
    while (j <= 14&&i<=14)
     {
        if (AnChessStatus[i++][j++] == nStandard)
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
int judgeHyporphoria(const int nRow, const int nCol, const int nStandard) {
    int i, j;
    int counter = 1;
    j = nCol - 1;
    i = nRow + 1;
    while (j >= 0 && i >= 0)
    {

        if (AnChessStatus[i++][j--] == nStandard)
        {
            counter++;
        }
        else
        {
            break;
        }
    }
    j = nCol + 1;
    i = nRow - 1;
    while (j <= 14 && i <= 14)
    {
        if (AnChessStatus[i--][j++] == nStandard)
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
int judge(const int nRow, const int nCol) {
    int nStandard;
    if (judgeHorizontal(nRow,nCol,1)>=5|| judgeVertical(nRow, nCol, 1) >= 5 || judgeHyperphoria(nRow, nCol, 1) >= 5|| judgeHyporphoria(nRow, nCol, 1) >= 5)
    {
        printf("----------Black Win-----------");
        return 0;
    }
    else if(judgeHorizontal(nRow, nCol, -1) >= 5 || judgeVertical(nRow, nCol, -1) >= 5 || judgeHyperphoria(nRow, nCol, -1) >= 5 || judgeHyporphoria(nRow, nCol, -1) >= 5)
    {
        printf("----------White Win-----------");
        return 0;
    }
    else
    {
        return 1;
    }

}
