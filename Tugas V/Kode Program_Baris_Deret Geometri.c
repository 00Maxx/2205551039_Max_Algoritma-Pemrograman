#include <stdio.h>
#include <math.h>

int a,i,r,n,un,sn;
int atasan();
int baris_geometri();
void input_pil();


int main(){
	
	atasan();
	input_pil();
	baris_geometri();
	
	return 0;
}

		int atasan(){
			printf("||===============================||\n");
			printf("||  Program Menghitung Geometri  ||\n");
			printf("||===============================||\n");
			printf("|| 1. Menghitung Barisan Geometri||\n");
			printf("|| 2. Menghitung Deret Geometri  ||\n");
			printf("||===============================||\n");
			
			return 0;
		}

	
		void input_pil(){
			
			printf("\n");
			printf("Masukan pilihan : ");
			scanf ("%d", &i);
		
		}
		
		int baris_geometri(){
			
		
			if(i==1){
				
			program_un();
				
				printf("Maka Jumlah Suku ke-n adalah %d", un);
				
			 return 0;
			}
			
			else if(i==2){
				
				program_sn();
						
					if(r<1){
						
						printf("Maka Deret Geometrinya adalah %d", sn);
						
						return sn;
					}
					
					else if(r>1){
						
						sn=a*(pow(r,n)-1)/(r-1); 
						
						printf("Maka Deret Geometrinya adalah %d", sn);
						
						return sn;
					}
				
			}
		}
		
		int program_un(){
		
		printf("Program Menghitung Baris Geometri\n");
		printf("Masukan Nilai Suku Pertama: ");
		scanf ("%d", &a);
		printf("Masukan Nilai Rasio: ");
		scanf ("%d", &r);
		printf("Masukan Nilai Suku ke-n: ");
		scanf ("%d", &n);
		un=pow (r,(n-1))*a;
		
		return un;
		}
		
		int program_sn(){
			
		printf("Program Menghitung Deret Geometri\n");
		printf("Masukan Nilai Suku Pertama: ");
		scanf ("%d", &a);
		printf("Masukan Nilai Rasio: ");
		scanf ("%d", &r);
		printf("Masukan Nilai Suku ke-n: ");
		scanf ("%d", &n);
		sn=a*(1-pow(r,n))/(1-r);
		
		return sn;
		
		}
