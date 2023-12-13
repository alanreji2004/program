#include <stdio.h>

int a[20],n;

void selectionsort();
void display();

void main(){
    int i;
    printf("\nEnter the size of the array\n");
    scanf("%d",&n);
    printf("\nEnter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    selectionsort();
    display();
}

void selectionsort(){
    int i,j,min,temp;
    for(i=0;i<n-1;i++){
        min = i;
        for(j=i+1;j<i-1;j++){
            if(a[j] < a[min]){
                min = j;
            }
        }
    temp = a[min];
    a[min] = a[i];
    a[i] = temp;
    }
}

void display(){
    int i;
    for(i=0;i<n;i++){
        printf("\t%d\t",a[i]);
    }
    printf("\n");
}
