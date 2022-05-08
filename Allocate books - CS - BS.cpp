bool possibleSol(vector<int> arr, int n, int m, int mid){
	int studentCount = 1;
	int pagNum = 0;
	
	for(int i = 0; i < n; i++){
		if(pagNum + arr[i] <= mid){
			pagNum += arr[i];
		}
		else{
			studentCount++;
			if(studentCount > m || arr[i] > mid){
				return false;
			}
			pagNum = arr[i];
		}	
	}
	return true;
}
int allocateBooks(vector<int> arr, int n, int m) {
    // Write your code here.
	int s = 0, sum = 0, ans = -1;
	for(int i = 0; i<n; i++){
		sum += arr[i];
	}
	int e = sum;
	int mid = s + (e-s)/2;
	
	while(s <= e){
		if(possibleSol(arr, n, m, mid)){
			ans = mid;
			e = mid - 1;
		}
		else{
			s = mid + 1;
		}
		mid = s + (e-s)/2;
	}
	
	return ans;
}
