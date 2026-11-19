#include <stdio.h>

int main() {
    int r1,r2,c1,c2;

    printf("Enter rows and columns of 1st matrix:");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of 2st matrix:");
    scanf("%d %d", &r2, &c2);

    if(c1!=r2){
        printf("Product cant be done");
    }
    int a[r1][c1], b[r2][c2],prod[r1][c2];



    printf("enter elements of 1st matrix \n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j <c1; j++) {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter elements of 2nd matrix \n");
    for (int i = 0; i <r2; i++) {
        for (int j = 0; j <c2; j++) {
            scanf("%d",&b[i][j]);
        }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
         prod[i][j]=0;
         for(int k=0;k<c1;k++){
            prod[i][j]+=a[i][k]*b[k][j];
         }

    }
}

printf("Product of two matrices is \n");
 for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
         printf("%d ",prod[i][j]);
        }
     printf("\n");
 }







}


