#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int i,j,k,num,m,n,p;
    int A[i][j];
    printf ("Please enter matrix dimensions\n");
    scanf("%d",&i);
    scanf("%d",&j);
    printf ("Please enter vector size\n");
    scanf("%d",&k);
     int* X = malloc (k * sizeof(int));
     int* answer = malloc (k * sizeof(int));
    if (j!=k){
        printf ("We can't do the multiplication!\n");
    }
    else {
        printf ("Please enter matrix\n");
        for ( n=0 ; n<i ; n++){
            for ( m=0; m<j; m++){
                scanf("%d", &A[n][m]);
            }
        }
        printf ("Please enter vector\n");
        for ( p=0 ; p<k ; p++){
            scanf("%d", &X[p]);

        }

    #pragma omp parallel private(i,j,k,m,n) shared(A,X,answer)
    {
       // printf ("hello from thread %d\n" , omp_get_thread_num());
/*        for ( m=0 ; m<i ; m++){
            for ( n=0 ;n<j; n++){
                answer[n]+=X[n]*A[m][n];
            }
        }
        printf ("Done multiplication answer is %d\n",answer);*/
    }

    }
}
