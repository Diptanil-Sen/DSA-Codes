#include<stdio.h>
#define MAX 5
int stk[MAX];
int top=-1;
    int isFull(){
        if(top==MAX-1)
        return 1;
        else
        return 0;
    }
    int isEmpty(){
        if(top==-1)
        return 1;
        else
        return 0;
    }
    void peek(){
        if (isEmpty())
        printf("\n Stack is Empty");
        else
        printf("|%d|",stk[top]);
    }
    void push(int item){
        if (isFull())
        printf("\n Stack Underflow");
        else{
            top++;
            stk[top]=item;
        }
    }
    void pop(){
        if (isEmpty())
        printf("\nStack Underflow");
        else{
            printf("\n Popped Element: %d",stk[top]);
            top--;
        }
    }
    void display(){
        if (isEmpty())
        printf("\nStack Underflow");
        else{
            for(int i=0;i<=top;i++)
            printf("|%d|\n",stk[i]);
        }
    }

    int main(){
        int value,choice;
        while(1)
        {
            printf("\n ");
            printf("\n 1.Check if stack is full");
            printf("\n 2.Check if stack is empty");
            printf("\n 3.Peek");
            printf("\n 4.Push element into the stack");
            printf("\n 5.Pop a element from the stack");
            printf("\n 6.Display stack");
            printf("\n 7.Exit");
            printf("\n Enter your choice: \n");
            scanf("%d",&choice);

            switch(choice)
            {
                case 1:
                    if(isFull()==1)
                    printf("\nStack is Full");
                    else
                    printf("\nStack is not full");
                    break;
                case 2:
                    if(isEmpty()==1)
                    printf("\nStack is Empty");
                    else
                    printf("\nStack is not empty");
                    break;
                case 3:
                    peek();
                    break;
                case 4:
                    printf("\nEnter the element to be pushed into the stack: ");
                    scanf("%d",&value);
                    push(value);
                    break;
                case 5:
                    pop();
                    break;
                case 6:
                    display();
                    break;
                case 7:
                    return 0;
                defualt:
                    printf("Invalid Input");
            }
        }
    }