# include <stdio.h>
int main(void) 
{
    int glass = 91;
    while (glass != 0) {
        printf("猜数字");
        scanf("%d", &glass);
        if (glass > 91){
            printf("太大了~杂鱼~\n");
        }else if (glass < 91){
            printf("猜小了哦~杂鱼~\n");
        }else {
            printf("猜对了杂鱼~奖励你91SVIP\n");
            break;
        }
    }

    return 0;
}