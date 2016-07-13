#include<stdio.h>
int main(){
int c,d,n,r,i=0,j,a[10],t,temp;
scanf("%d %d",&t,&d);
while(t){
  a[i]=t%10;
  t=t/10;
  i++;
}
n=i;

for(i=0;i<n;i++){
for(j=i+1;j<=n;j++){
if(a[i]>a[j]){
  temp=a[i];
  a[i]=a[j];
  a[j]=temp;
}
}
}
c=n-d;
for(i=0;i<c;i++)
printf("%d",a[i]);
return 0;
}
