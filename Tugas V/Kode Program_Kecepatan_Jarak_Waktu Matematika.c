#include <stdio.h>
#include <math.h>

float i,s,t,v;


int main(){
	atasan();
	input_pil();
	pengerjaan();
	
	return 0;
}

	void atasan(void){
	
	printf("----program menghiitung kecepatan/waktu/jarak matematika---- \n");
	printf(" 1. menghitung kecepatan \n 2. menghitung waktu \n 3. menghitung jarak\n");
	}
	
	void input_pil(){
		printf("masukkan pilihan : ");
		scanf("%f", &i);
		
	}
	int pengerjaan(){
		
		if (i==1){
			
		program_kecepatan();
		printf("maka kecepatannya adalah %.2f", v);
		
		return v;
		
		}
		
		else if (i==2){
		program_waktu();
		printf("maka waktunya adalah %.2f", t);
			
		}
		
		else if (i==3){
		program_jarak();
		printf("maka jaraknya adalah %.2f", s);
		
		}
		
	}
	
	int program_kecepatan(){
		
			printf("program menghitung kecepatan\n");
			printf("nilai jarak : ");
			scanf("%f", &s);
			printf("nilai waktu : ");
			scanf("%f", &t);
			v=s/t;
		
		return v;
	}
	
	int program_waktu(){
			printf("program menghitung waktu\n");
			printf("nilai jarak : ");
			scanf("%f", &s);
			printf("nilai kecepatan (m/s) : ");
			scanf("%f", &v);
			t=s/v;
			
		
		return t;
	}
	
	int program_jarak(){
			printf("program menghitung jarak\n");
			printf("nilai waktu : ");
			scanf("%f", &t);
			printf("nilai kecepatan : ");
			scanf("%f", &v);
			s=v*t;
			
		return s;
	
	}
