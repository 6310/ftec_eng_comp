#include <stdio.h>


main(void){
	int a;
	
	//Sweet dreams are made of this
	/*char vetor[30]={"Sweet dreams are made of this"};
	for(int i=0;i<30;i++){
		if(vetor[i]!=0x20)
		printf("%X ",vetor[i]);
		if(vetor[i]==0x20)
			printf("\n");
	}  */
		
	char xaxa=0;
	for(int i=0;i<3000;i++){
		printf("%C ",xaxa);
		xaxa +=1;
	}
	
	
	
}
