#include<stdio.h>
#define max 6
int queue[max]; //array declaration
int front=-1;
int rear=-1;

void enqueue(int element){ //function to insert element
    if(front==-1 && rear==-1){ //condition to check queue is empty
    front=0;
    rear=0;
    queue[rear]=element;
    }
    else if((rear+1)%max==front){  //condition to check queue is full
        printf("Queue is overflow");
    }
    else{
        rear=(rear+1)%max; //rear increment
        queue[rear]=element; //assign value at rear
    }
}
int dequeue(){
    if((front==-1)&&rear==-1){  //condition to check queue is empty
        printf("\nQueue is underflow");
    }
    else if(front==rear){
        printf("\nThe dequeued element is %d",queue[front]);
        front=-1;
        rear=-1;
    }else{
        printf("\nThe dequeued element is %d",queue[front]);
        front=(front+1)%max;
    }
}
void display(){  //function to display the elements in the queue
    int i=front;
    if(front==-1 && rear==-1){
        printf("\nQueue is Empty");
    }else{
        printf("\nElements in the queue are: \n");
        while(i<=rear){
            printf("|%d|\n",queue[i]);
            i=(i+1)%max;
        }
    }
}

int main(){
    int choice=1,x;
    char a;  //variable decleration

    while(choice<4 && choice!=0){
        printf("\n1.Insert an Element");
        printf("\n2.Delete an Element");
        printf("\n3.Display Element/Elements");
        printf("\n4.Exit\n");
        printf("\nEnter your choice: \n");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                printf("\nEnter the element to be inserted: \n");
                scanf("%d",&x);
                enqueue(x);
                break;
            case 2:
                dequeue();
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid Choice\n");
        }
    }
}