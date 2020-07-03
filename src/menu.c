#include "menu.h"
extern int AnChessStatus[15][15];
void ui() {
    printf("-------------------------------\n");
    printf("-------Welcome to RenJu--------\n");
    printf("1.双人对战\n2.人机对战\n3.设置\n4.关于我们\n5.游戏说明\n0退出\n");
    printf("please enter the number of the function.");
}
void ui1() {
    printf("   A B C D E F G H I J K L M N O \n");
    for (size_t i = 0; i < 9; i++)
    {
        printf("0%d ╋ ╋ ╋ ╋ ╋ ╋ ╋ ╋ ╋ ╋ ╋ ╋ ╋ ╋ ╋\n", i + 1);
    }
    for (size_t i = 9; i < 15; i++)
    {
        printf("%d ╋ ╋ ╋ ╋ ╋ ╋ ╋ ╋ ╋ ╋ ╋ ╋ ╋ ╋ ╋\n", i + 1);
    }
    printf("please enter the character like A1 B4 G8 to decide the position of the pieces.\nPS.uppercase alphabet means colums and digit means rows.\n");
}
void printDraw() {
    printf("   A B C D E F G H I J K L M N O \n");
    system("pause");
    for (size_t i = 0; i < 9; i++)
    {
        printf("0%d ",i+1);
        for (size_t j = 0; j < 15; j++)
        {          
            if (AnChessStatus[i][j] == 1)
            {
                printf("●");
            }
            else if (AnChessStatus[i][j] == 0)
            {
                printf("╋");
            }
            else
            {
                printf("○");
            }
        }
        printf("\n");
    }
    system("pause");
    for (size_t i = 9; i < 15; i++)
    {
        printf("%d ", i + 1);
        for (size_t j = 0; j < 15; j++)
        {
            if (AnChessStatus[i][j] == 1)
            {
                printf("●");
            }
            else if (AnChessStatus[i][j] == 0)
            {
                printf("╋");
            }
            else
            {
                printf("○");
            }
        }
        printf("\n");
    }
    system("pause");
}
