#include <stdio.h>

int main(){
    int i,j,num,temp;
    printf("Input text here: ");
    scanf("%d", &num);
    for(i=0;i<num;i++){
       
        for(j=0;j<num;j++){
            if(i%2 == 0){
                if(j%2 == 0)
                    printf("*");
                else 
                    printf(" ");
            }else {
                if(j%2 == 0)
                    printf(" ");
                else 
                    printf("*");
            }
        }
        printf("\n");
    }
    
    return 0;
}