#include <stdio.h>
 
int main()
{   
    int loop; 
    int i;
    int j;
    int sloop;
    printf("Number = ");
	scanf("%d", &loop);
     
    for(i = 1; i <= loop; i++){
         
        sloop = loop-i;
         
        for(j = 1; j <= loop-sloop; j++ ){
           printf("%d", j);
        }
         
        for(j = 1; j <= loop; j++){
            
             printf(" ");
        }
         
      
         
        printf("\n");
    }
     
    return 0;
}
