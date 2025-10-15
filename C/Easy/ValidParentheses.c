bool isValid(char* s) {
    int len = strlen(s);

    char *stack = malloc(sizeof(char)*(len+1));
    int idx = 0;

    for (int i = 0; i < len; i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            stack[idx++] = s[i];
        } else {
            if (idx == 0) return false;

            if ((s[i] == ')' && stack[idx-1] == '(') ||
               (s[i] == ']' && stack[idx-1] == '[') ||
               (s[i] == '}' && stack[idx-1] == '{')) {
                
                idx--;
            } else return false;
        }
    }
    if (idx == 0) return true;
    return false;
}
