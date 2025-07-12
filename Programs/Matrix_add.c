#include<stdio.h>
int main (){
    int rows, col;

  printf("Enter the size of matrix \n rows = ");
  scanf("%d",&rows);
  printf("columns=");
  scanf("%d", &col);

			if(rows==0 && col==0){printf("Rows and columns can't be zero"); return 0;}
			if(rows<=0){printf("Rows can't be zero or -ve"); return 0;}
			if(col<=0){printf("Columns can't be zero or -ve"); return 0;}

  int A[rows][col];
  int B[rows][col];
  int C[rows][col];

 printf("For matrix A : \n");
 for(int i=0;i<rows;i++){
 	for(int j=0;j<col;j++){
 	    printf("Enter element A[%d, %d] : ",i,j);
 		scanf("%d",&A[i][j]);
 		}	
	}
 
 printf("For matrix B : \n");
 for(int i=0;i<rows;i++){
 	for(int j=0;j<col;j++){
 		 printf("Enter element B[%d, %d] : ",i,j);
 		scanf("%d",&B[i][j]);
 		}	
	}

 for(int i=0;i<rows;i++){
 	for(int j=0;j<col;j++){
 		C[i][j] = A[i][j] + B[i][j];
 		}	
	}	
		
 for(int i=0;i<rows;i++){
 	for(int j=0;j<col;j++){
 		printf("%d \t",C[i][j]);
 		}
 		printf("\n");
 	}	

 return 0;
}