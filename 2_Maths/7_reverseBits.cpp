long reverseBits(long n) {
    long long num = 0; // Initialize the variable to store the reversed bits.

    for (int i = 0; i < 32; i++) {
      long long ans = n & 1; // Get the last bit of n.

      long long reverse = ans << (31 - i); // Shift the bit to its reversed position.

      num = num | reverse; // Set the corresponding bit in the result.

      n = n >> 1; // Move to the next bit in n.
    }

    return num; // Return the reversed bits.
}