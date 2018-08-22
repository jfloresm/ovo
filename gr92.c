#include <stdio.h>

//Add vectors in sum notation and multiply vectors in p-adic notation in GR(9,2) where xi satisfies the monic irreducible
//x^2 +4x+8

int mult(int (*x)[2], int (*y)[2], int (*z)[2], int *** a){
	
	int i,j;

	int w[1][2];

	if(x[0][0] == 8 || x[0][1] == 8 || y[0][1] == 8 || y[0][0] == 8){

		if(x[0][0] == 8 && x[0][1] != 8 && y[0][1] != 8 && y[0][0] != 8){
		
			z[0][0] = 8;
			z[0][1] = (x[0][1] + y[0][0]) % 8;
		} 

		else if(x[0][1] == 8 && x[0][0] != 8 && y[0][1] != 8 && y[0][0] != 8){
		
			z[0][0] = (x[0][0] + y[0][0]) % 8;
			z[0][1] = (x[0][0] + y[0][1]) % 8;
		} 
	
	
		else if(y[0][1] == 8  && x[0][1] != 8 && x[0][0] != 8 && y[0][0] != 8){
		
			z[0][0] = (x[0][0] + y[0][0]) % 8;
			z[0][1] = (x[0][1] + y[0][0]) % 8;
		} 

	  	else if(y[0][0] == 8 && x[0][1] != 8 && y[0][1] != 8 && x[0][0] != 8){
		
			z[0][0] = 8;
			z[0][1] = (x[0][0] + y[0][1]) % 8;
		}
	
		else if((y[0][0] ==8 && y[0][1] ==8) || (x[0][0] == 8 && x[0][1] == 8)){

			z[0][0] = 8;
			z[0][1] = 8;
		}
		
		else if((x[0][0] == 8 && x[0][1] != 8 && y[0][0] != 8 && y[0][1] == 8)){
			
			z[0][0] = 8;
			z[0][1] = (x[0][1] + y[0][0]) % 8;
		}

		else if((x[0][0] != 8 && x[0][1] == 8 && y[0][0] == 8 && y[0][1] != 8)){
	
			z[0][0] = 8; 
			z[0][1] = (x[0][0] + y[0][1]) % 8;
		}

		else if((x[0][0] != 8 && y[0][0] != 8 && x[0][1] == 8 && y[0][1] == 8)){
	
			z[0][0] = (x[0][0] + y[0][0]) % 8;
			z[0][1] = 8;
		}

		else if((x[0][1] != 8 && y[0][1] != 8 && x[0][0] == 8 && y[0][0] == 8)){
			
			z[0][0] = 8;
			z[0][1] = 8;
		} 
		else if((x[0][1] == 8 && y[0][1] == 8 && x[0][0] == 8 && y[0][0] == 8)){
			z[0][0] = 8;
			z[0][1] = 8;
		}
	}
	
	else{

		z[0][0] = (x[0][0] + y[0][0]) % 8;
	
		w[0][0] = (x[0][0] + y[0][1]) % 8;
	
		w[0][1] = (x[0][1] + y[0][0]) % 8;
	
		for(i=0; i<9;i++){
			for(j = 0; j< 5; j++){
	 			if((a[i][j][0] == w[0][0] && a[i][j][1] == w[0][1]) || (a[i][j][0] == w[0][1] && a[i][j][1]==w[0][0])){
					z[0][1] = i;
				}
			}
		}
	
	}

	return 0;

}


int sum(int (*x)[2], int (*y)[2], int (*z)[2]){
	z[0][0] = (x[0][0]+y[0][0]) % 9;
	z[0][1] = (x[0][1]+y[0][1]) % 9;

	return 0;
}



int main(){

int a[1][2];
int b[1][2];
int c[1][2];
int d[1][2];
char str1[6];
char str2[6];
int p,s,m,i,j,k,l;

p = 3;
s = p*p;
m = s*s;
	
int ***lk1 = (int ***)malloc(9*sizeof(int**));

for(i = 0; i < 9 ; i++){
	if(i ==0 || i == 1 || i == 5 || i == 7 || i ==8){ 
		lk1[i] = (int **)malloc(5*sizeof(int *));
		for(j = 0; j<5;j++){
			lk1[i][j] = (int *)malloc(2*sizeof(int));
		}
	}
	else if(i == 2 || i == 4){
		lk1[i] = (int **)malloc(5*sizeof(int *));
		for(j = 0; j<5;j++){
			lk1[i][j] = (int *)malloc(2*sizeof(int));
		}
	}

	else{
		lk1[i] = (int **)malloc(5*sizeof(int *));
		for(j = 0; j<5;j++){
			lk1[i][j] = (int *)malloc(2*sizeof(int));
		}
	}

}
//Matrix declaration, first dimension is an integer between 0 and 8 which represents
//the power of xi left over after adding the powers of xi (8 represents 0 which is 
//not a power of xi).

lk1[0][0][0] = 1;
lk1[0][0][1] = 2;
lk1[0][1][0] = 3;
lk1[0][1][1] = 6;
lk1[0][2][0] = 4;
lk1[0][2][1] = 4;
lk1[0][3][0] = 5;
lk1[0][3][1] = 7;
lk1[0][4][0] = 11;
lk1[0][4][1] = 11;


lk1[1][0][0] = 2;
lk1[1][0][1] = 3;
lk1[1][1][0] = 4;
lk1[1][1][1] = 7;
lk1[1][2][0] = 5;
lk1[1][2][1] = 5;
lk1[1][3][0] = 6;
lk1[1][3][1] = 0;
lk1[1][4][0] = 11;
lk1[1][4][1] = 11;


lk1[2][0][0] = 1;
lk1[2][0][1] = 7;
lk1[2][1][0] = 3;
lk1[2][1][1] = 4;
lk1[2][2][0] = 5;
lk1[2][2][1] = 0;
lk1[2][3][0] = 6;
lk1[2][3][1] = 6;
lk1[2][4][0] = 11;
lk1[2][4][1] = 11;


lk1[3][0][0] = 1;
lk1[3][0][1] = 6;
lk1[3][1][0] = 2;
lk1[3][1][1] = 0;
lk1[3][2][0] = 3;
lk1[3][2][1] = 4;
lk1[3][3][0] = 4;
lk1[3][3][1] = 5;
lk1[3][4][0] = 7;
lk1[3][4][1] = 7;


lk1[4][0][0] = 1;
lk1[4][0][1] = 3;
lk1[4][1][0] = 2;
lk1[4][1][1] = 7;
lk1[4][2][0] = 5;
lk1[4][2][1] = 6;
lk1[4][3][0] = 0;
lk1[4][3][1] = 0;
lk1[4][4][0] = 11;
lk1[4][4][1] = 11;


lk1[5][0][0] = 1;
lk1[5][0][1] = 1;
lk1[5][1][0] = 2;
lk1[5][1][1] = 4;
lk1[5][2][0] = 3;
lk1[5][2][1] = 0;
lk1[5][3][0] = 6;
lk1[5][3][1] = 7;
lk1[5][4][0] = 11;
lk1[5][4][1] = 11;


lk1[6][0][0] = 1;
lk1[6][0][1] = 4;
lk1[6][1][0] = 2;
lk1[6][1][1] = 2;
lk1[6][2][0] = 2;
lk1[6][2][1] = 7;
lk1[6][3][0] = 3;
lk1[6][3][1] = 5;
lk1[6][4][0] = 7;
lk1[6][4][1] = 0;


lk1[7][0][0] = 1;
lk1[7][0][1] = 0;
lk1[7][1][0] = 2;
lk1[7][1][1] = 5;
lk1[7][2][0] = 3;
lk1[7][2][1] = 3;
lk1[7][3][0] = 4;
lk1[7][3][1] = 6;
lk1[7][4][0] = 11;
lk1[7][4][1] = 11;


lk1[8][0][0] = 1;
lk1[8][0][1] = 5;
lk1[8][1][0] = 2;
lk1[8][1][1] = 6;
lk1[8][2][0] = 3;
lk1[8][2][1] = 7;
lk1[8][3][0] = 4;
lk1[8][3][1] = 0;
lk1[8][4][0] = 11;
lk1[8][4][1] = 11;

int lt[81][4];

FILE *file;
file = fopen("lt.txt","r");

if(file == NULL){
	printf("unable to open file \n");
}

for(i = 0; i < 81; i++){
	for(j = 0; j < 4 ; j++){

		if(!fscanf(file, "%d", &lt[i][j])){
			break;
		}
	}
}

fclose(file); 

printf("Enter the first vector entry by entry separated by a space: \n");
scanf("%d %d", &a[0][0], &a[0][1]);

printf("Enter the second vector entry by entry separated by a space: \n");
scanf("%d %d", &b[0][0], &b[0][1]);

printf("Enter operation (either sum or mult): \n");
scanf("%s", &str1);


if(strcmp(str1, "sum")==0){
	sum(a,b,c);
	printf("the sum is (%d, %d) \n", c[0][0], c[0][1]);
}

else{
	mult(a,b,c,lk1);
	printf("the product is (%d, %d) \n", c[0][0], c[0][1]);
}

printf("Continue? (y/n): \n");
scanf("%s", &str2);

if(strcmp(str2,"y")==0){	
	
	printf("Enter the first vector entry by entry separated by a space: \n");
	scanf("%d %d", &a[0][0], &a[0][1]);

	printf("Enter the second vector entry by entry separated by a space: \n");
	scanf("%d %d", &b[0][0], &b[0][1]);

	printf("Enter operation (either sum or mult): \n");
	scanf("%s", &str1);

	if(strcmp(str1, "sum")==0){
		sum(a,b,c);
		printf("the sum is (%d, %d) \n", c[0][0], c[0][1]);
	}

	else{
		mult(a,b,c,lk1);
		printf("the product is (%d, %d) \n", c[0][0], c[0][1]);
	}


	printf("Continue? (y/n): \n");
	scanf("%s", &str2);
}

else{
	printf("Done \n");
}


//mult(a,b,c,lk1);






return 0;



}
