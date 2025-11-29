#include<stdio.h>
int main(){
    int arr[5] = {11,34,56,24,35};
    int max = 11;
    for(int i=0;i<=5;i++){
        if(max<arr[i]){
            max = arr[i];
           
        }
    }
     printf("the greatest number is:%d",max);
     return 0;

}
