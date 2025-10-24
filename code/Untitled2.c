#include <stdio.h>
void main(){
	int A[10][10];
	int A0[10][10],A1[10][10],A2[10][10];
	int B[10];
	int i,j;
	int row_1=0,row_2=0,column_1=0,column_2=0;
	for(i=0;i<10;i++){
		B[i]=i;
		for(j=0;j<10;j++){
			if(i==9){
			A[9][j]=0;
		}else A[i][j]=i+1;

		}
	}
   for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			A0[i][j]=0;
			A1[i][j]=0;
			A2[i][j]=0;
			if(A[i][j]==0)
			A0[0][0]=A[i][j];
			else if(A[i][j]%2==1){
				A1[row_1][column_1++]=A[i][j];
				if(column_1==10){
					row_1++;
					column_1=0;
				}
				A[i][j]=0;

			}else if(A[i][j]%2==0){
				A2[row_2][column_2++]=A[i][j];
				if(column_2==10){
				column_2=0;
				row_2++;
				}
                	A[i][j]=0;
			}
			//av
		}
	}
	for(i=0;i<10;i++){
			if(B[i]==0)
			A0[0][0]=B[i];
			else if(B[i]%2==1){
				A1[row_1][column_1++]=B[i];
				if(column_1==10){
					row_1++;
					column_1=0;
				}
				B[i]=0;
			}else if(B[i]%2==0){
				A2[row_2][column_2++]=B[i];
				if(column_2==10){
				column_2=0;
				row_2++;
				}
                	B[i]=0;
			}
	}
for(i=0;i<10;i++){
	for(j=0;j<10;j++){
		printf("%d ",A2[i][j]);
	}
	printf("\n");
}
}

