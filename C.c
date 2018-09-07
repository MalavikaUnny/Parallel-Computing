#include<mpi.h>
#include<stdio.h>
void main(int argc,char** argv){
	int id,num_proc,no;
	MPI_Init(&argc,&argv);
	MPI_Status status;
	MPI_Comm_rank(MPI_COMM_WORLD,&id);
	MPI_Comm_size(MPI_COMM_WORLD,&num_proc);
	if(id==0){
		scanf("%d",&no);
	}
	
	MPI_Bcast(&no,1,MPI_INT,0,MPI_COMM_WORLD);
	printf("\n %d is the value received by slave %d\n",no,id);
	MPI_Finalize();
	
}
