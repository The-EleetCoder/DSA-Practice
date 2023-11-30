bool palindrome(string& str, int s, int e){
    if (s>=e) return true;
    if (str[s]!=str[e]){
        return false;
    }
    palindrome(str, s+1, e-1);
}

bool isPalindrome(string& str) {
    // Write your code here.
    int start = 0;
    int end = str.length()-1;
    return palindrome(str, start, end);
}
