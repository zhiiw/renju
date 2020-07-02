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
    
    scanf("%d",&number);
    switch (number)
    {
    case 1:

    ui1();
    init();
    getStatus();

        break;
    case 2:
    return 0;
    case 3:
    return 0;
    case 4:
    printf("The project is developed by Zhii Wang;");
    case 5:
    printf("五子棋为两人对战游戏，玩家执黑先行，率先连成五子者胜\n");
    case 0:
    return 0;

    default:
        break;
    }







    return 0;
}