#include<stdio.h>
int main(){
    int arr1[4][4];
    int fir_dio=0 , sec_dio=0;
    for(int i=0 ; i<4 ; i++){
        for(int j=0; j<4 ; j++){
            printf("Enter the elements at position [%d][%d] : ", i,j );
            scanf("%d",&arr1[i][j]);
        }
    }
    for(int i=0; i<4 ; i++){
        printf("First diagonal Elements [%d][%d] = %d \n",i,i,arr1[i][i]);
        fir_dio=fir_dio+arr1[i][i];
    }
    for (int i=0; i<4 ; i++){
        printf("Second diagonal Element [%d][%d] = %d \n",i,3-i,arr1[i][3-i]);
        sec_dio=sec_dio+arr1[i][3-i];
    }
    printf("the summation of First Diagonal id %d\n", fir_dio );
    printf("the summation of Second Diagonal id %d", sec_dio );

    return 0;
}
