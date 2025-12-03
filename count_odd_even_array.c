//Count how many even and odd elements are in the array.
#include<stdio.h>
int main(){
    int i,count_even=0,count_odd = 0;
    int arr[8] = {11,12,13,14,15,16,17,18};
    for(i=0;i<8;i++){
        if(arr[i]%2 == 0){
            count_even++;
        }else{
            count_odd++;
        }
    }
    printf("number of even numbers are:%d\n",count_even);
    printf("number of odd numbers are:%d\n",count_odd);
    return 0;
}