    #pragma omp target data map (to: pA[0:N*N],pB[0:N*N]) map (tofrom: pC[0:N*N])
    #pragma omp target
    #pragma omp teams distribute parallel for collapse(2) private(i,j,k)
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            for(k=0;k<N;k++)
            {
                pC(i,j)+=pA(i,k)*pB(k,j);
            }
        }
    }