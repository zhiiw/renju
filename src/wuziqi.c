#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


void ui(){
    printf("-------------------------------\n");
    printf("-------Welcome to RenJu--------\n");
    printf("1.双人对战\n2.人机对战\n3.设置\n4.关于我们\n5.游戏说明\n0退出\n");
    printf("please enter the number of the function.");
    }
void ui1(){
    printf("   A B C D E F G H I J K L M N O \n");
    for (size_t i = 0; i < 9; i++)
    {
        printf("0%d ╋ ╋ ╋ ╋ ╋ ╋ ╋ ╋ ╋ ╋ ╋ ╋ ╋ ╋ ╋\n",i+1);
    }
    for (size_t i = 9; i < 15; i++)
    {
        printf("%d ╋ ╋ ╋ ╋ ╋ ╋ ╋ ╋ ╋ ╋ ╋ ╋ ╋ ╋ ╋\n",i+1);
    }
    printf("please enter the character like A1 B4 G8 to decide the position of the pieces.\nPS.uppercase alphabet means colums and digit means rows.\n");
}


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