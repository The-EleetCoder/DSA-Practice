void bubbleSort(vector <int> &arr, int n) 
{
    //write your code here
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            int k = j+1;
            if (arr[j]>arr[k]){
                swap(arr[j],arr[k]);
            }
        }
    }
}