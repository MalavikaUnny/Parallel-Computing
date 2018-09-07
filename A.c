#include<mpi.h>
#include<stdio.h>
int main(int argc, char** argv){
	MPI_Init(NULL,NULL);
	int numb_of_proc;
	int rank_of_proc;
	MPI_Comm_size(MPI_COMM_WORLD, &numb_of_proc);
	MPI_Comm_rank(MPI_COMM_WORLD, &rank_of_proc);
	printf("This is from process %d of %d processes\n",rank_of_proc,numb_of_proc);
	MPI_Finalize();
}

