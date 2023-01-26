
/* 
30.11.2019 Fatmanur Baş
BLM1011
Bilgisayar Bilimlerine Giriş 2. Ödev | Introduction to Computer Science Second Homework
question:  Compress a matrix to an array and decompress the array to first matrix and find compression ratio
*/

#include <stdio.h>
int main()
{
    int row,column,i,j,same=1,q=0,k=0,z,count,MX[514][514],MB[926];
    float ratio;
    printf("Enter row and column numbers\n");
    scanf("%d%d",&row,&column);
  
    printf("Enter the matrix\n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++)
        scanf("%d",&MX[i][j]);
    }
    i=0;
    j=1;
    z=0;
    while(i<=row && z<=row){
        if(j<column){
            if(MX[i][k]==MX[z][j]){
            same=same+1;
            j=j+1;}
            else{
                MB[q]=same;
                MB[q+1]=MX[i][k];
                q=q+2;
                k=j;
                j=j+1;
                same=1;
                if(z>i)
                i=z;
            }
        }
        else{
            j=0;
            z=z+1;
        }
    }
    k=0;
    j=0;
    printf("Turning into an array\n");
    for(i=0;i<=q;i++)
    printf("%d",MB[i]);
    for(i=0;i<=q;i=i+2){
        count=MB[i];
        while(count!=0){
            if(k==row){
                k=0;
                j=j+1;
                MX[j][k]=MB[i+1];
            }else{
                MX[j][k]=MB[i+1];
                k=k+1;
                count=count-1;}
        }
    }
	printf("new matrix\n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++)
        printf("%d\n",MX[i][j]);
	}printf("calculating compression ratio\n");
    ratio=1-(float)q/(row*column);
    printf("%f\n",ratio);
    return 0;
}
