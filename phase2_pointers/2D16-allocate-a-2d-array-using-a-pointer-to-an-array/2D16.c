#include<stdio.h>
#include<stdlib.h>
int main(){
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    
    int (*arr)[3] = malloc(rows*sizeof(*arr));
    printf("Enter array elements: ");
    for(int i=0;i<rows;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    // printf("Entered array elements are: \n");
    int sum =0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<3;j++){
            sum += arr[i][j];
            // printf("%d ",arr[i][j]);
        }
        // printf("\n");
    }
    free(arr);
    printf("Sum: %d",sum);
    
}
