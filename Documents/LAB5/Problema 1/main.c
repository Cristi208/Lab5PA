#include "stive.h"

void citire(char *sir,int n){
    int i;
    for(i=0;i<n;i++)
    scanf("%c",&sir[i]);
}

int main(void)
{
    int i=0,n,cnt1=0,cnt2=0;
    char sir[100];
    scanf("%d",&n);

    citire(sir,n);
    /*for(i=0;i<n;i++)
    {
        printf("%c ",sir[i]);
    }
    */
    Stack stack;
    Stack copiestack;
    stack=initStack(sir[0]);

    if(stack->value==')')
    {printf("incorect : 1");
    return 0;
    }

    for(i=1;i<n;i++)
    {
        cnt2=0;
        if(sir[i]=='(')
        {
            cnt1++;
            stack=push(stack,sir[i]);
        }

        if(sir[i]==')')
        {
            copiestack=stack;
            while(copiestack!=NULL)
            {
                if(copiestack->value==')')
                    cnt2++;

                copiestack=copiestack->next;
            }
            cnt2++;
            if(cnt1>=cnt2)
                stack=push(stack,sir[i]);

            else if(cnt1<cnt2)
            {
                printf("problema la %d",i);
                return 0;
            }


        }


    }
    printf("\n");
   /* while(stack->next!=NULL)

    {
        printf("%c ",stack->value);
        stack=stack->next;

    }
    */
    if(cnt1==cnt2)
    printf("\n stiva e buna");
    else
    printf("\n is prea multe ( : %d ",n-1);

    return 0;
}
