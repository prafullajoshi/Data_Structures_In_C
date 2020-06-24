#include<stdio.h>

// Tail Recusrion :
void fun_tail(int n)
{
    if (n > 0)
    {
        printf("%d ",n);
        fun_tail(n-1);
    }
}

// Head Recusrion :
void fun_head(int n)
{
    if (n > 0)
    {
        fun_head(n-1);
        printf("%d ",n);
    }
}


int main()
{
    int x = 3;
    printf("Tail Recusrion Output : ");
    fun_tail(x);
    printf("\n");
    printf("Head Recusrion Output : ");
    fun_head(x);
    printf("\n");
    return 0;
}