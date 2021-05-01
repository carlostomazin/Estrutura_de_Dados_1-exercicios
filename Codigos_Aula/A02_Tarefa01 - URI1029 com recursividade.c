//22031019		1029	Fibonacci, Quantas Chamadas?	Accepted	C	0.057	27/03/2021 11:59:33
#include <stdio.h>
int call;

int fibonacci (int num){
    if (num <= 1){
        return num;
    }else{
        call+=2;
        return(fibonacci(num-1) + fibonacci(num-2));
    }
}

int main(){

    int n, i, x, res;
    
    scanf("%d", &n);

    for (i = 0; i < n; ++i){
        call = 0;
        scanf("%d", &x);
        res = fibonacci(x);
        printf("fib(%d) = %d calls = %d\n", x, call, res);
    }
	return 0;
}