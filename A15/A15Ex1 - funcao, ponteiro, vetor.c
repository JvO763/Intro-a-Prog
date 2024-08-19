#include <stdio.h>

int main(){
int *vetora, *vetorb, *vetorr, y, va[5], vb[5], vr[5],k;
y=5;
vetora=&va;
vetorb=&vb;
vetorr=&vr;

for(k=0;k<y;k++){
	*(vetora+k)=3*k;
	*(vetorb+k)=2*k;
	printf("\n%d %d", va[k], vb[k]);
	
};

soma_vetor(vetora, vetorb, vetorr, y);

for(k=0;k<y;k++){
	printf("\n%d", vr[k]);
	
	};

}

void soma_vetor(int *vetor1, int *vetor2, int *vetor_res, int n){
	int x;
	for(x=0;x<n;x++){
	*(vetor_res+x)=(*(vetor1+x))+(*(vetor2+x));
	
	
	};
}
