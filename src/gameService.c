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
        printf("Çë²»ÒªÖØ¸´ÊäÈë¡£");
        return 0;
    }
    if (turn % 2 == 1 || turn == 1)
    {
        AnChessStatus[nRow][nCol] = 1;//ºÚÆå¼ÓÈë
        turn++;
        return 0;
    }
    else if (turn % 2 == 0)
    {
        AnChessStatus[nRow][nCol] = -1;
        turn++;
        
        return 0;
    }
    
    printf("1");
    system("pause");
    return 0;

}

 




//ÅÐ¶ÏÊäÓ®
int isWin(int nRow, int nCol)
{
    //ÓÎÏ·ÊäÓ®
    int i = 0;
    int j = 0;
    for (i = 0; i < 15; i++)
    {
        for (j = 0; j < 15 ; j++)
        {
            if (AnChessStatus[i][j] == AnChessStatus[i][j + 1] && AnChessStatus[i][j + 1] == AnChessStatus[i][j + 2] && \
                AnChessStatus[i][j + 2] == AnChessStatus[i][j + 3] && AnChessStatus[i][j + 3] == AnChessStatus[i][j + 4] && AnChessStatus[i][j] == 1)
            {
                return 0;
            }
        }
    }
    for (j = 0; j < 15; j++)
    {
        for (i = 0; i < 15; i++)
        {
            if (AnChessStatus[i][j] == AnChessStatus[i + 1][j] && AnChessStatus[i + 1][j] == AnChessStatus[i + 2][j] && \
                AnChessStatus[i + 2][j] == AnChessStatus[i + 3][j] && AnChessStatus[i + 3][j] == AnChessStatus[i + 4][j] && AnChessStatus[i][j] == 1)
            {
                return 0;
            }
        }
    }
    for (i = 0; i < 15; i++)
    {
        if (AnChessStatus[i][i] == AnChessStatus[i + 1][i + 1] && AnChessStatus[i + 1][i + 1] == AnChessStatus[i + 2][i + 2] && \
            AnChessStatus[i + 2][i + 2] == AnChessStatus[i + 3][i + 3] && AnChessStatus[i + 3][i + 3] == AnChessStatus[i + 4][i + 4] && AnChessStatus[i][i] == 1)
        {
            return 0;
        }
        if (AnChessStatus[i][i + 4] == AnChessStatus[i + 1][i + 3] && AnChessStatus[i + 1][i + 3] == AnChessStatus[i + 2][i + 2] && \
            AnChessStatus[i + 2][i + 2] == AnChessStatus[i + 3][i + 1] && AnChessStatus[i + 3][i + 1] == AnChessStatus[i + 4][i] && AnChessStatus[i][i + 4] == 1)
        {
            return 0;
        }
    }
    for (i = 0; i < 15; i++)
    {
        for (j = 0; j < 15; j++)
        {
            if (AnChessStatus[i][j] == AnChessStatus[i][j + 1] && AnChessStatus[i][j + 1] == AnChessStatus[i][j + 2] && \
                AnChessStatus[i][j + 2] == AnChessStatus[i][j + 3] && AnChessStatus[i][j + 3] == AnChessStatus[i][j + 4] && AnChessStatus[i][j] == -1)
            {
                return -1;
            }
        }
    }
    for (j = 0; j < nCol; j++)
    {
        for (i = 0; i < 15; i++)
        {
            if (AnChessStatus[i][j] == AnChessStatus[i + 1][j] && AnChessStatus[i + 1][j] == AnChessStatus[i + 2][j] && \
                AnChessStatus[i + 2][j] == AnChessStatus[i + 3][j] && AnChessStatus[i + 3][j] == AnChessStatus[i + 4][j] && AnChessStatus[i][j] == -1)
            {
                return -1;
            }
        }
    }
    for (i = 0; i < 15; i++)
    {
        if (AnChessStatus[i][i] == AnChessStatus[i + 1][i + 1] && AnChessStatus[i + 1][i + 1] == AnChessStatus[i + 2][i + 2] && \
            AnChessStatus[i + 2][i + 2] == AnChessStatus[i + 3][i + 3] && AnChessStatus[i + 3][i + 3] == AnChessStatus[i + 4][i + 4] && AnChessStatus[i][i] == -1)
        {
            return -1;
        }
        if (AnChessStatus[i][i + 4] == AnChessStatus[i + 1][i + 3] && AnChessStatus[i + 1][i + 3] == AnChessStatus[i + 2][i + 2] && \
            AnChessStatus[i + 2][i + 2] == AnChessStatus[i + 3][i + 1] && AnChessStatus[i + 3][i + 1] == AnChessStatus[i + 4][i] && AnChessStatus[i][i + 4] == -1)
        {
            return -1;
        }
    }
    return 1;
}

int judgeHorizontal(const int nRow, const int nCol, const int nStandard) {
    int i, j;
    int counter = 1;
    j = nCol - 1;
    i = nRow;
    
    
    while (j >= 0)
    {
        if(AnChessStatus[i][j--] == nStandard)
        {
            counter++;
            printf("ahaha %d ahha",counter);
        }
        else
        {
            printf("%d as", counter);
            break;
        }
    }
    j = nCol + 1;
    while (j<=14)
    {
        if(AnChessStatus[i][j++] == nStandard)
        {
                printf("%d asd", counter);
                counter++;
                printf("%d %d", AnChessStatus[i][j], nStandard);
                
        }
        else
        {
                printf("%d az", counter);
                break;
        }
    }    
    printf("%d", counter);
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
    while (j >= 0 && i <= 14)
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
    

    if (judgeHorizontal(nRow,nCol,1)>=5|| judgeVertical(nRow, nCol, 1) >= 5 || judgeHyperphoria(nRow, nCol, 1) >= 5|| judgeHyporphoria(nRow, nCol, 1) >= 5)
    {
        printf("you");
        return 0;
    }
    else if(judgeHorizontal(nRow, nCol, -1) >= 5 || judgeVertical(nRow, nCol, -1) >= 5 || judgeHyperphoria(nRow, nCol, -1) >= 5 || judgeHyporphoria(nRow, nCol, -1) >= 5)
    {
        printf("yo");
        return -1;
    }
    else
    {
        printf("y");
        return 1;
    }

}
