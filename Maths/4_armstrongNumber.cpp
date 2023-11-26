bool checkArmstrong(int n){
	int num = n;
	int sum = 0;
	int numberOfDigits = 0;
	while (num) {
    	num /= 10;
        numberOfDigits++;
    }
	num = n;
	while (num){
		int digit = num % 10;
		sum += pow(digit,numberOfDigits);
		num /= 10;
	}
	if (sum == n) return true;
	return false; 
}