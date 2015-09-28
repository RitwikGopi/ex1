int strindex(char s[],char t[]){
	int r = -1;
	int i,j,k = 0;
	for(i = 0; s[i] != '\0'; i++){
		for(j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++,k++);
		if( t[k] == '\0' && k > 0)
			r = i;
	}
	return r;
}
