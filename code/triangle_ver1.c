#include <stdio.h>
#include <math.h>
float length(int x,int y);
void main(){
  int x[3],y[3];
  int r;
  int i;
  float A[3];
  int check=0;
  float areatriangle,areacircle;
  float difference;
  printf("Enter radius :");
  scanf("%d",&r);
  for(i=0;i<3;i++){
  	printf("Enter the x%d coordinate value :",i+1);
  	scanf("%d",&x[i]);
  	printf("Enter the y%d coordinate value :",i+1);
  	scanf("%d",&y[i]);
  	A[i]=length(x[i],y[i]);
  }
  for(i=0;i<3;i++) {
  	if(A[i]<=r){
  		check++;
	  }else check--;
  }
  areatriangle=0.5*fabs(x[0]*(y[1]-y[2])+x[1]*(y[2]-y[0])+x[2]*(y[0]-y[1]));
  areacircle=M_PI*pow(r,2);
  difference=fabs(areacircle-areatriangle);

  if(check==3){
  	printf("Triangle in a circle and ");
  }else if(check==-3){
  	printf("Circle in a triangle and ");
  }else printf("Overlapping triangle and circle , ");
  printf("difference is %.2f",difference);
}
float length(int x,int y){
	float length=sqrt(pow(x,2)+pow(y,2));
	return length;
}
