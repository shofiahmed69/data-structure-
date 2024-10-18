#include<stdio.h>
#define max_size 3
int queue[max_size];
int front = -1,rear = -1;
int main(){
int choice,item;
printf("1.enqueue\n 2.dequeue\n 3.display\n 4.exit\n");
while(1){
    printf("enter your choice:");
    scanf("%d",&choice);
    switch(choice){
case 1:
    if(rear== max_size -1){
        printf("overflow and exit\n");
    }
    else{
        printf("enter element:");
        scanf("%d",&choice);
        if(front== -1){
            front = rear = 0;
        }
        else{
            rear++;
        }
        queue[rear]=item;
        printf("item inserted\n");
    }
    break;
case 2:
    if(front== -1){
        printf("underflow and exit\n");
    }
    else{
        item=queue[front];
        if(front==rear){
            front = rear = -1;
        }
        else{
            front++;
        }
        printf("item deleted\n");
    }
    break;

case 3:
    if(front== -1){
        printf("queue is empty\n");
    }
    else{
        printf("queue elements:");
        for(int i=front;i<=rear;i++){
            printf("%d",queue[i]);
        }
        printf("\n");
    }
    break;
case 4:
    printf("exit\n");
    return 0;
default:
    printf("invalid choice\n");
    }
}
}
