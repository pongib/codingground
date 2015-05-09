#include <stdio.h>

int main(){
    int i,j,num,temp;
    printf("Input text here: ");
    scanf("%d", &num);
    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            if(i == (num-1)/2 && j == (num-1)/2)
                printf(" ");
            else 
                printf("*");
        }
        printf("\n");
    }
    
    return 0;
}