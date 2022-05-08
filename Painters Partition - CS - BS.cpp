bool possibleSol(vector<int> &boards, int k, int mid){
	int painter = 1, boardLen = 0;
	for(int i = 0; i < boards.size(); i++){
		if(boardLen + boards[i] <= mid){
			boardLen += boards[i];
		}
		
		else {
			painter++;
			if(boards[i] > mid || painter > k){
			return false;
			}
			boardLen = boards[i];
		}
	}
	return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
	int s = 0, sum = 0, ans = -1;
	for(int i; i < boards.size(); i++){
		sum += boards[i];
	}
	int e = sum;
	int mid = s + (e - s)/2;
	
	while(s <= e){
		if(possibleSol(boards, k, mid)){
		ans = mid;
		e = mid - 1;
		}
		else{
			s = mid + 1;
		}
		mid = s + (e - s)/2;
	}
	return ans;
	
}
