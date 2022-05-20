vector<int> reverse(vector<int> v){
	int s =0;
	int e = v.size()-1;
	while(s<=e){
		swap(v[s++], v[e--]);
	}
	return v;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
	
	vector<int> ans;
	int i = n - 1;
	int j = m - 1;
	int carry = 0;
	
	//Case - 1
	while(i >= 0 && j >= 0){
		int val1 = a[i];
		int val2 = b[j];
		
		int sum = val1 + val2 + carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		i--;
		j--;
	}
	
	//Case 2
	while(i >= 0){
		//int val1 = a[i];
		//int val2 = b[j];
		int sum = a[i] + carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		i--;
	}
	
	//Case 3
	while(j >= 0){
		//int val2 = b[j];
		//int val2 = b[j];
		int sum = b[j] + carry;
		carry = sum/10;
		int value = sum%10;
		ans.push_back(value);
		j--;
	}
	
	//Case 4
	while(carry != 0){
		//int val1 = a[i];
		//int val2 = b[j];
		int sum = carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
	}
	
	return reverse(ans);
}
