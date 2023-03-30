#include "cozi.h"

void citire(char *sir,int n){
    int i;
    for(i=0;i<n;i++)
    scanf("%c",&sir[i]);
}

int main(void)
{
    int i=0,n;
    char sir[100];
    scanf("%d",&n);

    citire(sir,n); //citesc sir
    /*for(i=0;i<n;i++)
    {
        printf("%c ",sir[i]);
    }
    */
    TQueue queue;
    queue=initQueue(sir[0]); //initializesz coada

    for(i=1;i<n;i++) //bag elementele in coada ABCDE
        enqueue(queue,sir[i]);

    //queue=dequeue(queue);
    TStack stack=initStack(sir[0]);
    queue=dequeue(queue);

     for(i=1;i<n;i++) //bag elementele in stiva si dezaloc coada EDCBA
     {
        stack= push(stack,queue->head->data);
       //  printf("%c ",queue->head->data);
      //   printf("%c ",stack->value);
        // queue->head=queue->head->next;
        queue=dequeue(queue);



     }
     /*for(i=0;i<n;i++)
     {
         printf("%c ",stack->value);
     stack=stack->next;

     }
     */
    queue=initQueue(stack->value); //reinitializez coada

    for(i=1;i<n;i++)  //bag elementel in coada din stiva deci le introduc invers practic
    {       stack=stack->next;
           enqueue(queue,stack->value);
    }
    for(i=0;i<n;i++)
    {
        printf("%c ",queue->head->data); //afisare
        queue=dequeue(queue);
    }



    return 0;
}
