// bubble sort algorithm

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    scanf("%d",&a);
    // create a simple array and sort it
    int arr[5] = {5,4,3,2,1};
    for(int i = 0; i < 5; i++){
        for(int j = i+1; j < 5; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < 5; i++){
        printf("%d ",arr[i]);
    }
}