#include <stdio.h>

int main()
{
    int num, i, j, temp;
    printf("input number here: ");
    scanf("%d", &num);
    temp = num;
    for(i = 0 ;i < num; i++){
  	    for(j = temp - 1; j < num; j++){
  	      printf("x");
  	    }
  	    temp--;
  	    printf("\n");
    }
  		    
    printf("num is %d\n", num);
    return 0;
}


