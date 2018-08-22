#include <stdio.h>

int conv(int (*a)[2], int (*b)[2], char str1[6], int lt[81][4]){

int j = 2;
int k = 0;
int i,l;

if(strcmp(str1, "add")==0){
	for(i = 0; i<81; i++){
			if(a[0][0] == lt[i][j] && a[0][1] ==lt[i][j+1]){
				b[0][0] = lt[i][j-2];
				b[0][1] = lt[i][j-1]; 
			//	printf("conversion is (%d, %d) \n", lt[i][j-2], lt[i][j-1]);
			//	break;
			}
	}
}


else{
	for(i = 0; i<81; i++){
			if(a[0][0] == lt[i][k] && a[0][1] ==lt[i][k+1]){
				b[0][0] = lt[i][k+2];
				b[0][1] = lt[i][k+3]; 
				//printf("conversion is (%d, %d) \n", lt[i][k+2], lt[i][k+3]);
				//break;
			}
	}
}

return 0;

}


int cons(int (*x)[2], int (*y)[2], int z){

y[0][0] = x[0][0]*z %9;
y[0][1] = x[0][1]*z %9;

return 0;

}

int count(int x[90000][8], int z){

int i,k;

k = 0;

	for(i = 0; i <z; i++){
			if((x[i][0] != 0 || x[i][1] != 0) || (x[i][2] != 0 || x[i][3] != 0) || (x[i][4] != 0 || x[i][5] != 0) || (x[i][6] != 0 || x[i][7] != 0)){
				k+=1;
			}
	}

return k;


}

int conv2(int a[9][1][2], int (*x)[4], int (*y)[2], int z){
	
	y[0][0] = a[x[0][z]][0][0];
	y[0][1] = a[x[0][z]][0][1];

return 0;

}

int conv3(int (*v)[4], int (*x)[2],int (*y)[2], int (*z)[2], int (*u)[2]){
	x[0][0] = v[0][0] /10;
	x[0][1] = v[0][0] %10;

	y[0][0] = v[0][1] /10;
	y[0][1] = v[0][1] %10;

	z[0][0] = v[0][2] /10;
	z[0][1] = v[0][2] %10;

	u[0][0] = v[0][3] /10;
	u[0][1] = v[0][3] %10;

return 0;

}


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
int a8;
int b[1][2];
int c[1][2];
int d[1][2];
int a1[1][2];
int b1[1][2];
int c1[1][2];
int d1[1][2];
int a2[1][2];
int b2[1][2];
int c2[1][2];
int d2[1][2];
int a3[1][2];
int b3[1][2];
int c3[1][2];
int d3[1][2];
int a4[1][2];
int b4[1][2];
int c4[1][2];
int d4[1][2];
int a5[1][2];
int b5[1][2];
int c5[1][2];
int d5[1][2];
int e[9][2];
int f[9][2];
int u[9][2];
int h[9][2];
char str1[6];
char str2[6];
int p,s,m,i,j,k,l,q,q1,r,t,t4,m1,m2,m3,m4;
int h1[9][1][2];
p= 3;
s = p*p;
m = s*s;
int t1[1][4];

//What is this?
	
h1[0][0][0] = 0;
h1[0][0][1] = 0;
h1[1][0][0] = 0;
h1[1][0][1] = 1;
h1[2][0][0] = 0;
h1[2][0][1] = 2;
h1[3][0][0] = 1;
h1[3][0][1] = 0;
h1[4][0][0] = 1;
h1[4][0][1] = 1;
h1[5][0][0] = 1;
h1[5][0][1] = 2;
h1[6][0][0] = 2;
h1[6][0][1] = 0;
h1[7][0][0] = 2;
h1[7][0][1] = 1;
h1[8][0][0] = 2;
h1[8][0][1] = 2;

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

//int g[81][2];
//int g2[81][2];
int y[820][4];
int y3[90000][8];
/*
for(i = 0; i < 81; i++){
	for(j = 0; j< 2;j++){
		g[i][j] = lt[i][j];
	}
}

for(i = 0; i < 81; i++){
	for(j = 2; j< 4;j++){
		g2[i][j] = lt[i][j];
	}
}
*/
FILE *ptr;

if((ptr=fopen("point.txt", "rb")) == NULL){
        printf("failed to open file \n");
}

if(fread(y, sizeof(int), 820*4,ptr) != 820*4){
	printf("Failed to read \n");
}

fclose(ptr);

//for(i = 0; i<820;i++){
//	printf("%d %d %d %d \n", y[i][0],y[i][1],y[i][2],y[i][3]);
//}

q = 0;
q1 = 0;
m1 = 0;
m2 = 0;
m3 = 0;
m4 = 0;
t1[0][0] =0;
t1[0][1] = 0;
t1[0][2] = 0;
t1[0][3] = 0;

//for(i = 0; i< 4; i++){
//	printf("%d %d %d %d \n", y[i][0],y[i][1],y[i][2],y[i][3]);
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//printf("Enter the first vector entry by entry separated by a space: \n");
//scanf("%d %d", &d4[0][0], &d4[0][1]);

//d4[0][0] = 1;
//d4[0][1] = 8;

//int a8;
//int a9;

a8 = 2;

for(i = 0; i<820; i++){
	conv2(h1, y+i, a, 0);
	conv2(h1, y+i, b, 1);	
	conv2(h1, y+i, c, 2);
	conv2(h1, y+i, d, 3);
	
	for(j = 0; j<4; j++){
		if(y[i][j] == 3){
			t1[0][j] = 1;
			break;
		}
	}
			
	//printf("%d %d  \n", a[0][0],a[0][1]);
	//printf("%d %d  \n", b[0][0],b[0][1]);
	//printf("%d %d  \n", c[0][0],c[0][1]);
	//printf("%d %d  \n", d[0][0],d[0][1]);

	//printf(" %d %d %d %d \n", t1[0][0],t1[0][1],t1[0][2],t1[0][3]);	
	
	if(t1[0][0] ==0){
		/*int count(int x[820][4]){

int i,k;

k = 0;

	for(i = 0; i <820; i++){
			if(x[i][0] != 0 || x[i][1] != 0 || x[i][2] != 0 || x[i][3] != 0){
				k+=1;
			}
	}

return k;


}*/

		for(j = 0; j<9;j++){
			for(k = 0; k< 9; k++){
				if((j %3 == a[0][0]) && (k % 3 == a[0][1] )){
					//printf("j = %d, k = %d \n", j,k);
					a1[0][0] = j;
					a1[0][1] = k;
					conv(a1,a2,"add", lt);
					e[m1][0] = a2[0][0];
					e[m1][1] = a2[0][1];
					m1+=1;
				}
			}
		}
		
	}
	else{	
		conv(a,a1,"add",lt);
		e[0][0] = a1[0][0];
		e[0][1] = a1[0][1];
	}		
	//printf("%d \n", q);
	m1 = 0;
	
	if(t1[0][1] == 0){
		for(j = 0; j<9;j++){
			for(k = 0; k< 9; k++){
				if(j % 3== b[0][0] && k %3 == b[0][1] ){
					b1[0][0] = j;
					b1[0][1] = k;
					conv(b1,b2,"add", lt);
					f[m2][0] = b2[0][0];
					f[m2][1] = b2[0][1];
					m2+=1;
				}
			}
		}
	}
	else{	
		
		conv(b,b1,"add",lt);
		f[0][0] = b1[0][0];
		f[0][1] = b1[0][1];
	}
		
	//printf("%d \n", q);
	
	m2 = 0;
	

	if(t1[0][2] == 0){			
		for(j = 0; j<9;j++){
			for(k = 0; k< 9; k++){
				if(j % 3== c[0][0]  && k % 3== c[0][1] ){
					c1[0][0] = j;
					c1[0][1] = k;
					conv(c1,c2,"add", lt);
					u[m3][0] = c2[0][0];
					u[m3][1] = c2[0][1];
					m3+=1;
				}
			}
		}
	}
	else{
		conv(c,c1,"add",lt);
		u[0][0] = c1[0][0];
		u[0][1] = c1[0][1];
	}
	//printf("%d \n", q);
	m3 = 0;
		

	if(t1[0][3] == 0){
		for(j = 0; j<9;j++){
			for(k = 0; k< 9; k++){
				if(j %3 == d[0][0]  && k %3== d[0][1] ){
					d1[0][0] = j;
					d1[0][1] = k;
					conv(d1,d2,"add", lt);
					h[m4][0] = d2[0][0];
					h[m4][1] = d2[0][1];
					m4+=1;
				}
			}
		}
	}
	else{
		conv(d,d1,"add",lt);
		h[0][0] = d1[0][0];
		h[0][1] = d1[0][1];
	}
	//printf("%d \n", q);
	m4 = 0;	

	if(t1[0][0] ==1){
		j=0;
			for(k = 0;k<9;k++){
				for(l = 0;l<9;l++){
					for(r = 0;r<9;r++){
						/*	mult(e+j,e+j,a, lk1);
						mult(f + k,f+k,b,lk1);
						mult(u+l,u+l,c,lk1);
						mult(h+r,h+r,d,lk1);
						mult(a,d4,d3,lk1);
						conv(d3,a1, "n", lt);
						conv(b,b1, "n", lt);
						conv(c,c1, "n", lt);
						conv(d,d1, "n", lt);
						//cons(a1,a3,a8);	
						sum(a1,b1, a2);
						sum(c1,d1,c2);
						sum(a2,c2,b2);*/

						mult(e+j,f+k,a, lk1);
						//mult(f + k,f+k,b,lk1);
						mult(u+l,u+l,b,lk1);
						//mult(u+l, h+r, c,lk1);
						mult(h+r,h+r,d,lk1);
						//mult(h+r,h+r,d,lk1);
						//mult(a,d4,d3,lk1);
						conv(a,a1, "n", lt);
						conv(b,b1, "n", lt);
						//conv(c,c1, "n", lt);
						conv(d,d1, "n", lt);
						//cons(d1,d2,a8);	
						sum(a1,b1, a2);
						//sum(c1,d2,c2);
						sum(a2,d1,b2);
						if(b2[0][0] % 9 == 0 && b2[0][1] % 9 == 0){
							y3[q1][0] =e[j][0];
							y3[q1][1] = e[j][1];
							y3[q1][2] =f[k][0];
							y3[q1][3] = f[k][1];
							y3[q1][4] =u[l][0];
							y3[q1][5] = u[l][1];
							y3[q1][6] =h[r][0]; 
							y3[q1][7] = h[r][1];
							q1+=1;
						}
					}
				}
			}
	}
	

	else if(t1[0][1] ==1){
		for(j = 0; j<9;j++){
			k = 0;
				for(l = 0;l<9;l++){
					for(r = 0;r<9;r++){
					/*	mult(e+j,e+j,a, lk1);
						mult(f + k,f+k,b,lk1);
						mult(u+l,u+l,c,lk1);
						mult(h+r,h+r,d,lk1);
						mult(a,d4,d3,lk1);
						conv(d3,a1, "n", lt);
						conv(b,b1, "n", lt);
						conv(c,c1, "n", lt);
						conv(d,d1, "n", lt);
						//cons(a1,a3,a8);	
						sum(a1,b1, a2);
						sum(c1,d1,c2);
						sum(a2,c2,b2);*/

						mult(e+j,f+k,a, lk1);
						//mult(f + k,f+k,b,lk1);
						mult(u+l,u+l,b,lk1);
						//mult(u+l, h+r, c,lk1);
						mult(h+r,h+r,d,lk1);
						//mult(h+r,h+r,d,lk1);
						//mult(a,d4,d3,lk1);
						conv(a,a1, "n", lt);
						conv(b,b1, "n", lt);
						//conv(c,c1, "n", lt);
						conv(d,d1, "n", lt);
						//cons(d1,d2,a8);	
						sum(a1,b1, a2);
						//sum(c1,d2,c2);
						sum(a2,d1,b2);
						if(b2[0][0] % 9 == 0 && b2[0][1] % 9 == 0){
							y3[q1][0] =e[j][0];
							y3[q1][1] = e[j][1];
							y3[q1][2] =f[k][0];
							y3[q1][3] = f[k][1];
							y3[q1][4] =u[l][0];
							y3[q1][5] = u[l][1];
							y3[q1][6] =h[r][0]; 
							y3[q1][7] = h[r][1]; 
							q1+=1;
						}
					}
				}
		}
	}

	else if(t1[0][2] ==1){
		for(j = 0; j<9;j++){
			for(k = 0; k<9;k++){
				l=0;
					for(r = 0;r<9;r++){
						/*	mult(e+j,e+j,a, lk1);
						mult(f + k,f+k,b,lk1);
						mult(u+l,u+l,c,lk1);
						mult(h+r,h+r,d,lk1);
						mult(a,d4,d3,lk1);
						conv(d3,a1, "n", lt);
						conv(b,b1, "n", lt);
						conv(c,c1, "n", lt);
						conv(d,d1, "n", lt);
						//cons(a1,a3,a8);	
						sum(a1,b1, a2);
						sum(c1,d1,c2);
						sum(a2,c2,b2);*/

						mult(e+j,f+k,a, lk1);
						//mult(f + k,f+k,b,lk1);
						mult(u+l,u+l,b,lk1);
						//mult(u+l, h+r, c,lk1);
						mult(h+r,h+r,d,lk1);
						//mult(h+r,h+r,d,lk1);
						//mult(a,d4,d3,lk1);
						conv(a,a1, "n", lt);
						conv(b,b1, "n", lt);
						//conv(c,c1, "n", lt);
						conv(d,d1, "n", lt);
						//cons(d1,d2,a8);	
						sum(a1,b1, a2);
						//sum(c1,d2,c2);
						sum(a2,d1,b2);
						if(b2[0][0] % 9 == 0 && b2[0][1] % 9 == 0){
							y3[q1][0] = e[j][0];
							y3[q1][1] = e[j][1];
							y3[q1][2] = f[k][0];
							y3[q1][3] = f[k][1];
							y3[q1][4] = u[l][0];
							y3[q1][5] = u[l][1];
							y3[q1][6] = h[r][0]; 
							y3[q1][7] = h[r][1]; 
							q1+=1;
						}
					}
			}
		}
	}

	else if(t1[0][3] ==1){
		for(j = 0; j<9;j++){
			for(k = 0; k<9;k++){
				for(l = 0;l<9;l++){
					r=0;
						/*	mult(e+j,e+j,a, lk1);
						mult(f + k,f+k,b,lk1);
						mult(u+l,u+l,c,lk1);
						mult(h+r,h+r,d,lk1);
						mult(a,d4,d3,lk1);
						conv(d3,a1, "n", lt);
						conv(b,b1, "n", lt);
						conv(c,c1, "n", lt);
						conv(d,d1, "n", lt);
						//cons(a1,a3,a8);	
						sum(a1,b1, a2);
						sum(c1,d1,c2);
						sum(a2,c2,b2);*/

						mult(e+j,f+k,a, lk1);
						//mult(f + k,f+k,b,lk1);
						mult(u+l,u+l,b,lk1);
						//mult(u+l, h+r, c,lk1);
						mult(h+r,h+r,d,lk1);
						//mult(h+r,h+r,d,lk1);
						//mult(a,d4,d3,lk1);
						conv(a,a1, "n", lt);
						conv(b,b1, "n", lt);
						//conv(c,c1, "n", lt);
						conv(d,d1, "n", lt);
						//cons(d1,d2,a8);	
						sum(a1,b1, a2);
						//sum(c1,d2,c2);
						sum(a2,d1,b2);
						if(b2[0][0] % 9 == 0 && b2[0][1] % 9 == 0){
							y3[q1][0] = e[j][0];
							y3[q1][1] = e[j][1];
							y3[q1][2] = f[k][0];
							y3[q1][3] = f[k][1];
							y3[q1][4] = u[l][0];
							y3[q1][5] = u[l][1];
							y3[q1][6] = h[r][0]; 
							y3[q1][7] = h[r][1]; 
							q1+=1;
						}
				}
			}
		}
	}








t1[0][0] = 0;
t1[0][1] = 0;
t1[0][2] = 0;
t1[0][3] = 0;
}
//Find orthogonal vector////////////////////////////////////////////////////////////////////////////////////////
q = 0;

/*
for(i = 0; i< 5152; i++){
	for(j = i+1; j<5152; j++){
		conv3(y3+i,a1,b1,c1,d1);
		conv3(y3+j,a2,b2,c2,d2);
		mult(a1,b2,a3,lk1);
		mult(b1,a2,b3,lk1);
		mult(c1,d1,c3,lk1);
		mult(c2,d2,d3,lk1);
		conv(a3,a4, "n",lt);
		conv(b3,b4, "n",lt);
		conv(c3,c4, "n",lt);
		conv(d3,d4, "n",lt);
		cons(c4,c,2);
		cons(d4,d,2);
		sum(a4,b4,a1);
		sum(c,d,b1);
		sum(a1,b1,c1);
		if(c1[0][0] == 0 && c1[0][1] == 0){
			q+=1;
			//printf(" i = %d, j = %d \n", i,j);
		}
	}
}
			
printf("%d \n", q);
*/			
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//t4 = count(y3,q1);

//printf("%d \n", t4);

printf("q1 =  %d \n", q1);

//int y4[q1][8];

k = 0;

/*for(i = 0; i < q1-1;i++){
	a[0][0] = y3[i][0];
	a[0][1] = y3[i][1];
	b[0][0] = y3[i][2];
	b[0][1] = y3[i][3];
	c[0][0] = y3[i][4];
	c[0][1] = y3[i][5];
	d[0][0] = y3[i][6];
	d[0][1] = y3[i][7];
	conv(a,a1, "add", lt);
	conv(b,b1, "add", lt);
	conv(c,c1, "add", lt);
	conv(d,d1, "add", lt);
	for( j = i; j <q1; j++){
		a2[0][0] = y3[j][0];
		a2[0][1] = y3[j][1];
		b2[0][0] = y3[j][2];
		b2[0][1] = y3[j][3];
		c2[0][0] = y3[j][4];
		c2[0][1] = y3[j][5];
		d2[0][0] = y3[j][6];
		d2[0][1] = y3[j][7];
		conv(a2,a3, "add", lt);
		conv(b2,b3, "add", lt);
		conv(c2,c3, "add", lt);
		conv(d2,d3, "add", lt);
		mult(a1,a3,a4, lk1);
		mult(b1,b3,b4, lk1);
		mult(c1,c3,c4, lk1);
		mult(d1,d3,d4, lk1);
		conv(a4,a5, "n", lt);
		conv(b4,b5, "n", lt);
		conv(c4,c5, "n", lt);
		conv(d4,d5, "n", lt);
		sum(a5,b5,a4);
		sum(c5,d5,c4);
		sum(a4,c4,b4);
		if((b4[0][0] % 9 == 0) && (b4[0][1] % 9 == 0)){
			k+=1;
			printf("(%d %d), (%d %d), (%d %d), (%d %d) \n", a1[0][0],a1[0][1],b1[0][0],b1[0][1],c1[0][0],c1[0][1],d1[0][0],d1[0][1]);
			printf("(%d %d), (%d %d), (%d %d), (%d %d) \n", a3[0][0],a3[0][1],b3[0][0],b3[0][1],c3[0][0],c3[0][1],d3[0][0],d3[0][1]);
			printf("\n");
		}
	}
}
*/
printf("k = %d \n", k);
			
	//conv(a,a1,"add",lt[81][4]);
	
//printf("%d \n", q1);
	
	
				
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//printf("%d \n", sizeof(g[2]));
/*for(i = 0;i<81;i++){
	for(j = 0; j< 81;j++){
		for(k = 0; k<81; k++){
			for(l = 0;l<81;l++){
				mult(g+l,g+l,a, lk1);
				mult(a, g+i, b, lk1);
				conv(b, c, "n", lt);
				mult(g+j, g+l,b,lk1);
				conv(b,d, "n",lt);
				sum(c,d,e);
				sum(e,g2+k,f);
			//	printf("(%d,%d) \n", f[0][0],f[0][1]);
				if((f[0][0] != 0 % 9) && (f[0][1] != 0 % 9)){
					q += 1;
				//	printf("%d \n",q);
				}
			}
	//		printf("%d \n",q);
		//	if(q ==51){
		//		conv(g+i,a,"n",lt);
		//		conv(g+j,b, "n",lt);
		//		printf("(%d,%d) (%d,%d), (%d,%d) \n",a[0][0],a[0][1],b[0][0],b[0][1],g2[k][0],g2[k][1] );
		//	}
			q = 0;
		}
	}
}
*/			
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
for(i = 0;i<81;i++){
	for(j = 0; j< 81;j++){
		for(k = 0; k<81; k++){
			for(l = 0;l<81;l++){
				for(t = 0; t<81; t++){
				
					mult(g+l,g+l,a, lk1);
					mult(a, g+i, b, lk1);
					conv(b, c, "n", lt);
					mult(g+j, g+t,b,lk1);
					conv(b,d, "n",lt);
					mult(g+t,g+t,a,lk1);
					mult(a,g+k,b,lk1);
					sum(c,d,e);
					conv(b,c,"n",lt);
					sum(e,c,f);
				//	printf("(%d,%d) \n", f[0][0],f[0][1]);
					if((f[0][0] == 0 % 9) && (f[0][1] == 0 % 9)){
						q += 1;
					//	printf("%d \n",q);
					}
				}
			}
	//		printf("%d \n",q);
		//	if(q ==51){
		//		conv(g+i,a,"n",lt);
		//		conv(g+j,b, "n",lt);
		//		printf("(%d,%d) (%d,%d), (%d,%d) \n",a[0][0],a[0][1],b[0][0],b[0][1],g2[k][0],g2[k][1] );
		//	}
			if(q == 720){
			printf("%d \n", q);
			q = 0;
			}
		}
	}
}
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////				
/*
for(i = 0;i<81;i++){
	for(j = 0; j< 81;j++){
		for(k = 0; k<81; k++){
			for(l = 0; l< 81; l++){
					mult(g+i,g+j,a, lk1);
					mult(g+k, g+k, b, lk1);
					mult(g+k,g+k,c,lk1);
				//	printf("a \n");
					conv(a, d, "n", lt);
					conv(b, e, "n", lt);
					conv(c,f, "n",lt);
					sum(d,e,u);
					sum(u,f,h);
					//printf("(%d,%d) \n", h[0][0],h[0][1]);
					if((h[0][0] == 0 % 9) && (h[0][1] == 0 % 9)){
						q += 1;
					//	printf("%d \n",q);
					}
			}
		}
	}		
}
*/	
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//printf("%d \n", q1);
//for( i = 0; i < q1; i++){
//	printf("[(%d %d), (%d %d), (%d %d), (%d %d)] \n", y3[i][0],y3[i][1],y3[i][2],y3[i][3],y3[i][4],y3[i][5],y3[i][6],y3[i][7]);
//}

return 0;

}
