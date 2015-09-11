void expand(char s1[],char s2[]){
	char cb,ce;
	int i=0,j=0;
	while(s1[i]!='\0'){
		if(s1[i]!='-'){
			cb = s1[i];
			if(s1[++i]=='-'){
				ce = s1[++i];
				for (; cb < ce; s2[j++]=cb++);
			}
			else
				s2[j++] = cb;
		}
		else
			s2[j++] = s1[i++];
	}
}
