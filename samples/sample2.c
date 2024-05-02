// sample program to guess the time complexity of the program with complexity O(logn)

#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    // create a simple array and sort it
    int arr[5] = {1,2,3,4,5};
    int low = 0;
    int high = 4;
    int mid;
    while(low <= high){
        mid = (low + high) / 2;
        if(arr[mid] == a){
            printf("Element found at index %d\n",mid);
            break;
        }
        else if(arr[mid] < a){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    if(low > high){
        printf("Element not found\n");
    }
}
