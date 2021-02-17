#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>

//limite compris entre 40 et 50
double complex_rec = 0;
int complex_iter = 0;

double fibo(int n){
 if ((n==0) || (n==1))
      return 1;
 else{
     complex_rec = complex_rec +2;
     return fibo(n-1)+fibo(n-2);
 }
}

double fiboIter (int n){
    double f=1, f1=1, f2=1;
    int i;

    for (i = 2; i<=n; i++){
        complex_iter++;
        f2 = f1;
        f1 = f;
        f = f1 + f2;
    }
    //if (n>=2) compex_iter = compex_iter + (n-2-1)
    return f;
}

int main (void)
{
    clock_t start, end;
    double temp_rec, temp_rec1;
    int n;
    double x1, x2;
    printf("Donnez un nombre pour n ? ");
    scanf("%d",&n);
    start = clock();
    x1 = fibo(n);
    end = clock();
    temp_rec = (end - start)/(double)CLOCKS_PER_SEC;
    //printf("%lf\n",temp_rec)
    //start = clock();
    x2 = fiboIter(n);
    //end = clock();
    //temp_rec1 = (end - start)/(double)CLOCKS_PER_SEC;
    printf("Version recursive: resultat = %1.0lf\n",x1);
    printf("%d\n",complex_iter);
    printf("%.2lf\n",complex_rec);
    printf("Version iterative: resultat = %1.0lf\n",x2);

    return 0;
}
