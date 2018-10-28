#include<stdlib.h>

int w_len(char *str){
  int len = 0;

  int i;
  for(i=0; str[i] != '\0'; i++){
      len++;
  }
  return len;
}

//Returns how much chars have been replaced
int w_sreplace(char *str,char search_c, char rep_c){
  int i;
  int ret=0;

  for(i=0; i < w_len(str); i++){
    if(str[i] == search_c){
      str[i] = rep_c;
      ret++;
    }
  }
  return ret;
}

char *w_scopy(char *dest, char *src){
  int i;
  for(i=0; i < w_len(src); i++){
    dest[i] = src[i];
  }
  dest[i] = '\0';
  return dest;
}

//Cut the first n indexes of
char *w_scut_front(char* str, int cut_len){
	int len_of_str = w_len(str);
	len_of_str = len_of_str - cut_len;
	
	char *new_str = (char *) malloc(sizeof(char) * (len_of_str + 1));
	
	int i;
	for(i=0; i < len_of_str; i++){
		new_str[i]=str[cut_len+i];
	}	
	new_str[i]='\0';
	
	return new_str;
}
