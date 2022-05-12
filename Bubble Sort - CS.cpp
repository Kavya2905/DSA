void bubbleSort(vector<int>& arr, int n)
{   
	for(int i = 1; i < n; i++){
		//Rounds = 1 to n-1
		bool swapped = false;
		for(int j = 0; j < n-i; j++){
			//Process adjacent elements
			if(arr[j] > arr[j + 1]){
				swapped = true;
				swap(arr[j + 1], arr[j]);
			}
		}
		swapped = false;
	}
    
}
