#include <stdio.h>

int a[20],n;

void insertionsort();
void display();

void main(){
    int i;
    printf("\nEnter the size of the array\n");
    scanf("%d",&n);
    printf("\nEnter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    insertionsort();
    display();
}

void insertionsort(){
    int i,j,key;
    for ( i = 0; i <n; i++){
        key = a[i];
        j = i-1;
        while(j>=0 && key < a[j]){
            a[j+1] = a[j];
            j--;
       }
       a[j+1] = key;
    }   
}

void display(){
    int i;
    for(i = 0;i<n;i++){
        printf("\t%d\t",a[i]);
    }
    printf("\n");
}
