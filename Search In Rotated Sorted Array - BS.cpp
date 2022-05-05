int getPivot(vector<int>& arr, int n){
	int s = 0; 
	int e = n-1;
	int mid = s + (e-s)/2;
	
	while(s < e){
		if(arr[mid] >= arr[0]){
			s = mid + 1;
		}
		else{
			e = mid;
		}
		mid = s + (e-s)/2;
	}
	return mid;
}

int binarySearch(vector<int>& arr, int start, int end, int k){
	int s = start;
	int e = end;
	int mid = s + (e-s)/2;
	
	while(s <= e){
		if(arr[mid] == k){
			return mid;
		}
		else if(arr[mid] > k){
			e = mid - 1;
		}
		else if(arr[mid] < k){
			s = mid + 1;
		}
		mid = s + (e-s)/2;
	}
	return -1;
	
}
int findPosition(vector<int>& arr, int n, int k)
{
	int pivot = getPivot(arr, n);
	
	if(k <= arr[n-1] && k >= arr[pivot] ){
		return binarySearch(arr, pivot, n-1, k);
	}
	else{
		return binarySearch(arr, 0, pivot-1, k);
	}
   
	
}

