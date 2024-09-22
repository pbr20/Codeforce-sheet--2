#include<stdio.h>

int main(){

int T;
long long int A = 1;

scanf("%d",&T);

int N[T];

for(int i=0; i<T; i++){
    scanf("%d",&N[i]);
}

for(int i=0; i<T; i++){
    for(int j=1; j<=N[i]; j++){
            A = A * j;
    }
    printf("%lld\n",A);
    A =1;
}


    return 0;
}