#include <stdio.h>
#include "mpi.h"

int main (int argc,char **argv){
        int numtasks,rank,rc;
        rc=MPI_Init(&argc,&argv);
        if(rc!=MPI_SUCCESS){
        /*printf("Error starting MPI program. Terminando. \n");*/
        MPI_Abort(MPI_COMM_WORLD,rc);
        }
        MPI_Comm_size(MPI_COMM_WORLD,&numtasks);
        MPI_Comm_rank(MPI_COMM_WORLD,&rank);
        printf("Number os task=%d My rank= %d\n", numtasks,rank);

        /*** do some work ***/
        printf("Hello World! \n");
        MPI_Finalize();
}

/* Comandos usados:
 *  Compilação :mpicc -o mpi_first mpi_first.c 
 *  Execução : mpirun -n 4 ./mpi_first
 *  mpirun -oversubscribe -n 10 ./mpi_first
*/
~                                                                                                                                                                        
~    
