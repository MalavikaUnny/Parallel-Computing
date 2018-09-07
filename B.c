#include <stdio.h>
#include <mpi.h>
int main(int argc, char** argv){
   int id,ierr,num_proc,no;
   MPI_Status status;  
   ierr = MPI_Init(&argc, &argv);
   ierr = MPI_Comm_rank(MPI_COMM_WORLD, &id);
   ierr = MPI_Comm_size(MPI_COMM_WORLD, &num_proc);
   if(id == 0) {
	scanf("%d",&no);
	MPI_Send(&no,1,MPI_INT,1,1,MPI_COMM_WORLD);      
   }

   else {
	MPI_Recv(&id,1,MPI_INT,0,1,MPI_COMM_WORLD,&status);
	printf("Slave received value %d\n",id);
   }
   ierr = MPI_Finalize();
}

