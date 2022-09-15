#include <stdio.h>
void main() {
int N,i, max_i, max_val;
int *p;
scanf("%d",&N);
int Arr[N];
for(i=0;i<N;i++) scanf("%d",&Arr[i]);
max_i = 0; max_val = Arr[0]; p = Arr;

for(i = 0; i < N; i++){
    if (*(p++) > max_val){
        max_val = Arr[i];
        max_i = i;
    }
}

printf("The max value is %d and is in location %d\n",max_val, max_i);
}