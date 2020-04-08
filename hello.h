#include <stdio.h>
void rotate_right(int* ap, int* bp, int* cp);

int main(void)
{
    //char 형대신 int 형으로 합쳐서 이용
    int a = 1, b = 2, c = 3, enter;
    //char ch;
    printf("%d:%d:%d\n", a, b, c);
    while (1)
    {
        enter = getchar();
        if (enter == '\n')
        {
            rotate_right(&a, &b, &c);
            printf("%d:%d:%d", a, b, c);
        }
        else
            break;
        
    }

    return 0;
}

void rotate_right(int* ap, int* bp, int* cp)
{
    //int 정수하나로 세개를 교환하기위해 두번계산함
    int temp;
    temp = *cp;
    *cp = *bp;
    *bp = temp;
    temp = *ap;
    *ap = *bp;
    *bp = temp;
}