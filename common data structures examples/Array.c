#include<stdio.h>

int main(){
    int arr[5] = {5,4,3,2,1};
    arr[2]=arr[2]+1;
    for(int i = 0; i < 5; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}