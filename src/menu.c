#include "menu.h"
void ui() {
    printf("-------------------------------\n");
    printf("-------Welcome to RenJu--------\n");
    printf("1.˫�˶�ս\n2.�˻���ս\n3.����\n4.��������\n5.��Ϸ˵��\n0�˳�\n");
    printf("please enter the number of the function.");
}
void ui1() {
    printf("   A B C D E F G H I J K L M N O \n");
    for (size_t i = 0; i < 9; i++)
    {
        printf("0%d �� �� �� �� �� �� �� �� �� �� �� �� �� �� ��\n", i + 1);
    }
    for (size_t i = 9; i < 15; i++)
    {
        printf("%d �� �� �� �� �� �� �� �� �� �� �� �� �� �� ��\n", i + 1);
    }
    printf("please enter the character like A1 B4 G8 to decide the position of the pieces.\nPS.uppercase alphabet means colums and digit means rows.\n");
}
