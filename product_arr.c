#include<stdio.h>
int main(){
    int arr[5] = {1,2,4,3,5};
    int i,product = 1;
    for(i=1;i<=5;i++){
        product = product * i;
    }
        printf("the product is %d",product);
    
        return 0;
}