#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "gameService.h"
#include "menu.h"
int AnChessStatus[15][15];




int main(){
    int number;
    ui();
    int nRow=0 ;
    int nCol =0;
    int turn=0;
    scanf("%d",&number);
    switch (number)
    {
    case 1:
        ui1();
        init();
        do
        {
            getStatus(nRow, nCol);
            setStatus(nRow, nCol, turn);
            printDraw();

        } while (judge(nRow,nCol)==0);

    break;    
    case 2:
    return 0;
    case 3:
    return 0;
    case 4:
    printf("The project is developed by Zhii Wang;");
    system("pause");
    break;
    case 5:
    printf("五子棋为两人对战游戏，玩家执黑先行，率先连成五子者胜\n");
    case 0:
        exit(0);
    return 0;

    default:
        exit(0);
        break;

    }







    return 0;
}