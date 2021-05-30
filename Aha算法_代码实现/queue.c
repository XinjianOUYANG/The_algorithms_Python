#include<stdio.h>
struct queue
{
    int data[100];
    int head;
    int tail;
};

int main()
{
    struct queue q;
    int i;
    q.head = 1;
    q.tail = 1;
    for(i=1;i<=9;i++)
    {
        scanf("%d",&q.data[q.tail]);
        q.tail++;
    }

    while(q.head < q.tail)
    {
        //打印队首并将队首出队
        printf("%d ",q.data[q.head]);
        q.head++;
        //先将新队首的数添加到队尾
        q.data[q.tail] = q.data[q.head];
        q.tail++;
        //再将队首出队
        q.head++;
    }

    getchar();getchar();
    return 0;
}