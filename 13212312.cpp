char* max_word(char* s){
	
	int a = strlen(s + 1);

    char copy[a];
    char delim[2];
    char* token;
    char max_word[a];
 
    strcpy(copy, s);
    strcpy(delim, " ");
 
    for(token = strtok(copy, delim);token != 0;token = strtok(0, delim)){
        if(strlen(token) >= strlen(max_word))
            strcpy(max_word, token);
    }

    delete [] copy;
    delete [] delim;
 
    return max_word;
}
