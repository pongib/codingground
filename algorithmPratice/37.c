#include <stdio.h>

int main(){
    int i,j,k,num,temp,temp2;
    printf("Input text here: ");
    scanf("%d", &num);
    temp = 2*(num-1)+1;
    temp2 = 0;
    for(i=0;i<num;i++){
        for(k=temp2; k<num-1; k++){
            printf("  ");
        }
        temp2++;
        for(j=temp-1;j<2*(num-1)+1;j++){
          printf("*");
        }
        temp-=2;
        printf("\n");
    }
    
    return 0;
}