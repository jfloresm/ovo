#include <stdio.h>

int mult(int **x, int **y, int z[2][2]){
	int i,j,k;
	k = 0;
	for(i = 0; i<2; i++){
		for(j = 0; j<2; j++){		
			z[i][j] = x[i][k]*y[k][j]+x[i][k+1]*y[k+1][j];
		}
	}

return 0;

}

int count(int x[820][4]){

int i,k;

k = 0;

	for(i = 0; i <820; i++){
			if(x[i][0] != 0 || x[i][1] != 0 || x[i][2] != 0 || x[i][3] != 0){
				k+=1;
			}
	}

return k;


}

int zero(int (*x)[4]){
	x[0][0] = 0;
	x[0][1] = 0;
	x[0][2] = 0;
	x[0][3] = 0;

return 0;

}

int mat(int x,int y,int z,int u, int a[60000]){

int l,k,i;

k = -1;

l = x*1000+y*100+z*10+u;

for(i = 0; i<60000; i++){
	if(a[i] == l){
		k = i;
		break;
	}
}

if(k >= 0){
	return 1;
}

else{
	return 0;
}

}


int comp(int ***a, int b[2][2]){
	int i,k;
	k = 0;
	for(i = 0; i< 9; i++){
		if(a[i][0][0] == b[0][0] % 3&& a[i][0][1] == b[0][1] %3 && a[i][1][0] == b[1][0] %3 && a[i][1][1] == b[1][1] %3){
			return i;
			k+=1;
			break;
		}
	
	}

	if(k != 1){
		printf("ERROR, (%d %d %d %d) \n", b[0][0],b[0][1],b[1][0],b[1][1]);
	}
}


int sum1(int **x, int **y, int z[2][2]){

z[0][0] = x[0][0] + y[0][0];
z[0][1] = x[0][1] + y[0][1];
z[1][0] = x[1][0] + y[1][0];
z[1][1] = x[1][1] + y[1][1];


return 0;

}

int sum2(int x[2][2], int y[2][2], int z[2][2]){

z[0][0] = x[0][0] + y[0][0];
z[0][1] = x[0][1] + y[0][1];
z[1][0] = x[1][0] + y[1][0];
z[1][1] = x[1][1] + y[1][1];


return 0;

}

int sum3(int (*x)[4], int (*y)[4], int z[2][2]){

z[0][0] = x[0][0] + y[0][0];
z[0][1] = x[0][1] + y[0][1];
z[1][0] = x[0][2] + y[0][2];
z[1][1] = x[0][3] + y[0][3];


return 0;

}

int main(){

int i,j,k,l,m,n,p,q,r,t,s,k1,k2;

int prod[81][3];
int c1[2][2];

int ***lk1 = (int ***)malloc(9*sizeof(int**));

for(i = 0; i <9; i++){
	lk1[i] = (int **)malloc(2*sizeof(int *));
		for(j = 0; j<2;j++){
			lk1[i][j] = (int *)malloc(2*sizeof(int));
		}
}

lk1[0][0][0] = 0;
lk1[0][0][1] = 0;
lk1[0][1][0] = 0;
lk1[0][1][1] = 0;

lk1[1][0][0] = 0;
lk1[1][0][1] = 1;
lk1[1][1][0] = 1;
lk1[1][1][1] = 2;

lk1[2][0][0] = 0;
lk1[2][0][1] = 2;
lk1[2][1][0] = 2;
lk1[2][1][1] = 1;

lk1[3][0][0] = 1;
lk1[3][0][1] = 0;
lk1[3][1][0] = 0;
lk1[3][1][1] = 1;

lk1[4][0][0] = 1;
lk1[4][0][1] = 1;
lk1[4][1][0] = 1;
lk1[4][1][1] = 0;

lk1[5][0][0] = 1;
lk1[5][0][1] = 2;
lk1[5][1][0] = 2;
lk1[5][1][1] = 2;

lk1[6][0][0] = 2;
lk1[6][0][1] = 0;
lk1[6][1][0] = 0;
lk1[6][1][1] = 2;

lk1[7][0][0] = 2;
lk1[7][0][1] = 1;
lk1[7][1][0] = 1;
lk1[7][1][1] = 1;

lk1[8][0][0] = 2;
lk1[8][0][1] = 2;
lk1[8][1][0] = 2;
lk1[8][1][1] = 0;

for(i = 0; i<9;i++){
		for(j = 0; j<9;j++){
			/*lk1[i][0][0] = a1[0][0];
			lk1[i][0][1] = a1[0][1];
			lk1[i][1][0] = a1[1][0];
			lk1[i][1][1] = a1[1][1];

			lk1[j][0][0] = b1[0][0];
			lk1[j][0][1] = b1[0][1];
			lk1[j][1][0] = b1[1][0];
			lk1[j][1][1] = b1[1][1];*/
	
			mult(lk1[i],lk1[j], c1);
			k2 = comp(lk1, c1);
			prod[i][0] = i;
			prod[i][1] = j;
			prod[i][2] = k2;
		}
}
			
			
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int a[2][2];
int b[2][2];
int c[2][2];
int d[2][2];
int y[6561][4];
int z[9][4];
int y1[60000];
int y2[820][4];
int inv[9][2];

inv[0][0] = 0;
inv[0][1] = 0;
inv[1][0] = 1;
inv[1][1] = 4;
inv[2][0] = 2;
inv[2][1] = 8;
inv[3][0] = 3;
inv[3][1] = 3;
inv[4][0] = 4;
inv[4][1] = 1;
inv[5][0] = 5;
inv[5][1] = 7;
inv[6][0] = 6;
inv[6][1] = 6;
inv[7][0] = 7;
inv[7][1] = 5;
inv[8][0] = 8;
inv[8][1] = 2;




for(i = 0; i <60000; i++){
	y1[i] = 0;
}


m = 0;

for(i = 0;i<9;i++){
	for(j = 0;j<9;j++){
		for(k = 0;k<9;k++){
			for(l = 0;l<9;l++){
				y[m][0] = i;
				y[m][1] = j;
				y[m][2] = k;
				y[m][3] = l;
				m +=1;
			}
		}
	}
}

//span of a point

s = 0;				
for(i = 0; i<9;i++){
	for(j = 0; j<9;j++){
		for(k = 0; k<9;k++){
			for(l = 0; l<9;l++){	
				if(mat(i,j,k,l,y1)==0){	
					for(q = 1; q<9;q++){
						mult(lk1[i],lk1[q],a);
						mult(lk1[j],lk1[q],b);
						mult(lk1[k],lk1[q],c);
						mult(lk1[l],lk1[q],d);
				 
				
						z[q][0] = comp(lk1,a);
						z[q][1] = comp(lk1,b);
						z[q][2] = comp(lk1,c);
						z[q][3] = comp(lk1,d);
					
						if(q != 3 ){
							zero(y+(z[q][0]*729+z[q][1]*81+z[q][2]*9+z[q][3]));
						}			

						y1[s] = z[q][0]*1000 + z[q][1]*100+ z[q][2]*10 + z[q][3]; 
						s += 1;		
					}
				}
			}
		}
	}
}



k1 = 0;

for(i= 0; i<6561; i++){
	if(y[i][0] != 0 || y[i][1] != 0 || y[i][2] != 0 || y[i][3] != 0){
		y2[k1][0]=y[i][0];
		y2[k1][1]=y[i][1];		
		y2[k1][2]=y[i][2];
		y2[k1][3]=y[i][3];
		k1+=1;
	} 
}

/*
free(a); 
free(b);
free(c);
free(d);
free(y);
free(y1);
free(z);
*/
//normalizing the vectors so the first entry is a 1. 
for(i = 0; i< 820; i++){
	if(y2[i][0] != 3 && y2[i][1] != 3 && y2[i][2] != 3 && y2[i][3] != 3){
		for(j= 0; j<4; j++){
			if(y2[i][j] !=0){
				k = inv[y2[i][j]][1];
				break;
			}
		}
		for(j = 0; j<4; j++){
			mult(lk1[y2[i][j]], lk1[k],a);
			y2[i][j] = comp(lk1,a);
		}
	}
}

//free(a);

//int y3[820][4];

r = count(y2);

printf("%d \n",r);

/*for(i = 0; i<820;i++){
	printf("%d %d %d %d \n", y2[i][0],y2[i][1],y2[i][2],y2[i][3]);
}
*/

FILE *f;

if((f=fopen("point.txt", "wb")) == NULL){
	printf("failed to open file \n");
}

if(fwrite(y2,sizeof(int), 820*4, f) != 820*4){
	printf("Error in writing \n");
}

fclose(f);

/*
if((f=fopen("point.txt", "rb")) == NULL){
        printf("failed to open file \n");
}

if(fread(y3, sizeof(int), 820*4,f) != 820*4){
	printf("Failed to read \n");
}

fclose(f);
*/
for(i = 0; i < 820; i++){
	printf("%d %d %d %d \n", y2[i][0], y2[i][1], y2[i][2], y2[i][3]);
}



return 0;

}
