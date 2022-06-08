#include<stdio.h>


void comparelikecaveman(char*s1 , char*s2){
	
	int count = 0;
	
	
	while (*s1 != '\0' || *s2 != '\0'){
		if(*s1==*s2){
			s1++;
			s2++;
		}
		
	   else if ((*s1 == '\0' && *s2 != '\0')|| (*s1 != '\0' && *s2 == '\0')|| *s1 != *s2) {
	   	
        	count = 1;
        	
            printf("Uequal Strings\n");
            break;
        }
	}
	if (count == 0){
		printf("equal");
		
	}

}





int main(){
	
	char string1[10] = "string";
	char string2[10] = "stringlen";
	
	
	comparelikecaveman(string1,string2);
	
	return 0;
	
}
