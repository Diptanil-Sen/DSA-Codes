#include<stdio.h>
#define max 20
int q[max];
int front=-1;
int rear=-1;
void ins(int);
int del();
void display();
int isempty();
int isfull();
int main(){
    int ch,item,x;
    char a;
    printf("\n \t Queue Implementation");
    printf("\n \t --------------------");
    printf("\n\t1.Insert");
    printf("\n\t2.Delete");
    printf("\n\t3.Display");
    printf("\n\t4.IsEmpty");
    printf("\n\t5.IsFull");
    do{
        printf("\n \t Enter your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
             printf("Enter the element to be inserted: \n");
             scanf("%d",&item);
             ins(item);
             break;
            case 2:
             x=del();
             printf("The element deleted from the queue is: %d",x);
             break;
            case 3:
             display();
             break;
            case 4:
             x=isempty();
             if(x==1)
             printf("Queue is Empty");
             else
             printf("Queue is not Empty");
             break;
            case 5:
             x=isfull();
             if(x==1)
             printf("Queue is Full");
             else
             printf("Queue is not full");
             break;
            default:
             printf("Invalid Choice\n");
        }
        printf("\n Do you want to continue? y/n: ");
        scanf(" %c",&a);
    }
    while((a=='y')||(a=='Y'));
}

void ins(int x){     //Insert Function
    if(rear==max-1)
    printf("Queue is Overflow \n");
    else if(rear==-1)
    {
        front=0;rear=0;
        q[rear]=x;
    }else{
        rear++;
        q[rear]=x;
    }
}
int del(){          //Delete Function
    int x;
    if(front==-1)
    printf("Queue is Underflow");
    else if(front==rear && front!=-1){
        x=q[front];
        front=-1;
        rear=-1;
        return(x);
    }else{
        x=q[front];
        front++;
        return(x);
    }
}
void display(){      //Display function
    if(rear==-1)
    printf("Queue is empty");
    else{
        for(int i=front;i<=rear;i++)
        printf("|%d|\n",q[i]);
    }
}
int isempty(){      //isempty function
    if(front==-1)
    return 1;
    else
    return 0;
}
int isfull(){      //isfull function
    if(rear==max-1)
    return 1;
    else
    return 0;
}