#include<stdio.h>


int main(){

int N,M;
int X;
scanf("%d%d",&N,&M);

for(int i=1, j=1; i<=N , j<=M; i++,j++){
    if(N % i == 0 && M % j == 0){
       X = i;
    }
}

printf("%d\n",X);

    return 0;
}