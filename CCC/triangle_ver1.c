#include <stdio.h>
#include <math.h>
int main(){
  int x[3],y[3];
  int r;
  int i;
  printf("pls input r :");
  scanf("%d",&r);
  for(i=0;i<3;i++){
  	printf("pls input x%d :",i+1);
  	scanf("%d",&x[i]);
  	printf("pls input y%d :",i+1);
  	scanf("%d",&y[i]);
  }
  float A[3];
  float Amax=0;
  for(i=0;i<3;i++){
  	A[i]=sqrt(pow(x[i],2)+pow(y[i],2));
  	printf("%f\n",A[i]);
  	if(Amax<=A[i])
    Amax=A[i];
    printf("Amax :%f\n",Amax);
  }
  if(Amax<=r)
  	printf("triangle in circle\n");
  else printf(" circle in triangle\n");
  float Areatriangle,Areacircle;
  Areatriangle=0.5*fabs((x[0]*(y[1]-y[2])+x[1]*(y[2]-y[0])+x[2]*(y[0]-y[1])));
  Areacircle=3.14*pow(r,2);
  float diff=fabs(Areacircle-Areatriangle);
  printf("%.2f\n",Areatriangle);
  printf("%.2f\n",Areacircle);
  printf("diff :%.2f",diff);
}
