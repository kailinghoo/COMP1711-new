#include <stdio.h>

int main(){       
    int arr[6] = {3,5,7,7,25,3};        
        
    printf("Duplicate elements in given array: \n");      
    for(int i = 0; i < 6; i++) {    
        for(int j = i + 1; j < 6; j++) {    
            if(arr[i] == arr[j])    
                printf("%d\n", arr[j]);    
        }    
    }    
    return 0;    
} 