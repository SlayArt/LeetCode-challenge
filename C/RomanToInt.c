int roman_value(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int romanToInt(char* s) {
    int res = 0;

    for (int i = 0; i < strlen(s) - 1; i++) {
        if (roman_value(s[i])>roman_value(s[i+1])) {
            res += roman_value(s[i]);
        } else if (roman_value(s[i])<roman_value(s[i+1])) {
            res -= roman_value(s[i]);
        } else {
            res += roman_value(s[i]);
        }
    }
    res += roman_value(s[strlen(s)-1]);
    return res;
}