bool possibleSol(vector<int> &stalls, int k, int mid){
	int cowCount = 1, lastPos = stalls[0];
	for(int i = 0; i < stalls.size(); i++){
		if(stalls[i] - lastPos >= mid){
			cowCount++;
			if(cowCount == k){
				return true;
			}
			lastPos = stalls[i];
		}
	}
	return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
	sort(stalls.begin(), stalls.end());
	
	int s = 0; int maxi = -1;
	for(int i = 0; i < stalls.size(); i++){
		maxi = max(maxi, stalls[i]);
	}
	int e = maxi, mid = s + (e - s)/2, ans = -1;
	while(s <= e){
		if(possibleSol(stalls, k, mid)){
			s = mid + 1;
			ans = mid;
		}
		else{
			e = mid - 1;
		}
		mid = s + (e - s)/2;
	}
	return ans;
}
