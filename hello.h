#include <stdio.h>
void rotate_right(int* ap, int* bp, int* cp);

int main(void)
{
    //char ����� int ������ ���ļ� �̿�
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
    //int �����ϳ��� ������ ��ȯ�ϱ����� �ι������
    int temp;
    temp = *cp;
    *cp = *bp;
    *bp = temp;
    temp = *ap;
    *ap = *bp;
    *bp = temp;
}