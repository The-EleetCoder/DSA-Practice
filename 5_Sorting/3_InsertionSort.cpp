void insertionSort(int arr[], int n)
{
    //write your code here
    for (int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}