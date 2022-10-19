#include <stdio.h>
int s, v, lp;
  
int main(){

 
header();
input_nilai();

return 0;

}
void header(void){
	printf("\n");
  printf("==============Max================||\n");
  printf("=================================||\n");
  printf(" PROGRAM MENGHITUNG VOLUME KUBUS ||\n");
  printf("=================================||\n");
}
int input_nilai(void){
	printf("Masukkan panjang rusuk (cm): ");
  scanf("%d", &s);
  volume();
  program_lp();
    
    return 0;

}
int volume(int sisi){
	v=s*s*s;
	printf("Volume kubus adalah %d cm3 (sentimeter kubik)\n", v);
	  
	  return v;
}

void program_lp(int sisi){
	lp=6*s*s;
	printf("luas permukaan kubus adalah %d cm2", lp);
	
	return lp;
}
