#include <stdio.h>
void main(){
	int A[10][10];
	int A0[10][10],A1[10][10],A2[10][10];
	int B[10];
	int i,j,num=3;//num is number ragne 1-9
	//
	for(i=0;i<10;i++){
		B[i]=i;
		for(j=0;j<10;j++){
			if(i==9){
			A[9][j]=0;
		}else A[i][j]=j;
		}
	}
   for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			A0[i][j]=0;
			A1[i][j]=0;
			A2[i][j]=0;
			if(A[i][j]==0)
			A0[i][j]=A[i][j];
			else if(A[i][j]%2==1){
				A1[j-1][i]=A[i][j];
				A[i][j]=0;
			}else if(A[i][j]%2==0){
				A2[j-1][j]=A[i][j];
				A[i][j]=0;
			}
			printf("%d ",A1[i][j]);
			//av
		}
		printf("\n");
	}
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(B[i]==0)
			A0[i][j]=B[i];
			else if(B[i]%2==1){
				A1[i][j]=B[i];
				B[i]=0;
			}else if(B[i]%2==0){
				A2[i][j]=B[i];
				B[i]=0;
			}
			//printf("%d ",A1[i][j]);
		}
		//printf("\n");
	}
}
