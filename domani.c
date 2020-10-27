#include <stdio.h>

main() {
    int g, m, a;

    printf("Inserisci il numero del giorno, mese, anno:\n");
    scanf("%d %d %d", &g, &m, &a);

    if(g == 30 || g == 31){
    	 	if(g == 31 && m == 12 ) {
       		 	g = 1;
        		m = 1;
        		++a;
        		printf("%d %d %d\n", g, m, a);   
				goto fine;  	
    		}
        g = 1;
        ++m;
        printf("%d %d %d\n", g, m, a);
        goto fine;
    } else {
    	
    	if(m == 2){
    	if(((a % 4 == 0)&&(a % 100 !=0))||(a % 400 == 0)){
    		//bisestile
				if(g == 29){
                    g = 1;
                    ++m;
                    printf("%d %d %d\n", g, m, a);
                    goto fine;
                } else {
                        ++g;
                        printf("%d %d %d\n", g, m, a);
                        goto fine;
                } 
		}else {
			//non bisestile
			if(g != 28){

                        
                                                ++g;
                        printf("%d %d %d\n", g, m, a);
                        goto fine;
            } else {
				                        g = 1;
                        ++m;
                        printf("%d %d %d\n", g, m, a);
                        goto fine;
            }
		}
	}
        ++g;
        printf("%d %d %d\n", g, m, a);
    }
    
	fine:
	printf("");
	       
}
