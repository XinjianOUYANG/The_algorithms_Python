#include<stdio.h>
int a[101],n; // define global variables

void quicksort(int left, int right)
{
    int i,j,t,temp;
    if(left>right)
        return;
    temp = a[left]; //temp中存储基准数
    i = left;
    j = right;
    while(i!=j)
    {
        while(a[j]>=temp && i<j)
            j--;
        while(a[i]<=temp && i<j)
            i++;
        
        if(i<j)
        {
            t = a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    // 将基准数归位
    a[left] = a[i];
    a[i] = temp;

    quicksort(left,i-1);
    quicksort(i+1,right);
}

int main()
{
    int i;
    scanf("%d",&n);
    for(i=1;1<=n;i++)
        scanf("%d",&a[i]);

    quicksort(1,n);

    for(i=1;i<=n;i++)
        printf("%d ",a[i]);

    getchar();getchar();
    // 该函数以无符号 char 强制转换为 int 的形式返回读取的字符，
    // 如果到达文件末尾或发生读错误，则返回 EOF。
    return 0;
}