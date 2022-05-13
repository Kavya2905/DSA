void insertionSort(int n, vector<int> &arr){
	//int temp;
	for(int i =0; i<n; i++){
		
		int temp = arr[i];
		int j = i - 1;
		for(; j >= 0; j--){
			if(arr[j] > temp){
				arr[j + 1] = arr[j];
			}
			else{
				break;
			}
		}
		arr[j + 1] = temp;
	}
    // Write your code here.
}
