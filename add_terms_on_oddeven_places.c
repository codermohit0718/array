#include<stdio.h>
int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int sum = 0,sum_1 =0,sum_2=0;
    for(int i=0;i<8;i++){
        if(i%2==0){
        sum_1 = sum_1 + arr[i]; 
        }
        else{
            sum_2 = sum_2 + arr[i];
        }
    }
    printf("the difference between there sum is:%d\n",sum_2-sum_1);
    return 0;
}