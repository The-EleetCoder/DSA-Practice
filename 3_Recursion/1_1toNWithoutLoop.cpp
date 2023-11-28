vector<int> printNos(int x) {
    if (x == 1) {
        vector<int> arr;
        arr.push_back(x);
        return arr; // return the vector
    }

    vector<int> arr = printNos(x - 1); // recursively call the function

    arr.push_back(x); // add the current number to the vector
    return arr; // return the updated vector
}