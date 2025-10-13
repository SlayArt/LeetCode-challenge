char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return strdup("");
    
    int len = strlen(strs[0]);
    char *c = (char*)malloc((len + 1)*sizeof(char));
    int x = 0;
    for (int i = 0; strs[0][i] != '\0'; i++) {
        char y = strs[0][i];
        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] == '\0' || strs[j][i] != y) {
                c[x] = '\0';
                return c;
            }
        }
        c[x++] = y;
    }
    c[x] = '\0';
    return c;

}