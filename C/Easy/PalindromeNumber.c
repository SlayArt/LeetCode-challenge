bool isPalindrome(int x) {

    long long reversed = 0;
    long long original = x;

    while (x > 0) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }

    return (original == reversed);
}
