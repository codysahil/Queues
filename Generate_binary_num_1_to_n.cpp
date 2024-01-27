vector<string> generate(int N)
{
	// Your code here
	queue<string> q;
	vector<string> ans;

	q.push("1");
	for(int i = 0; i<N; i++){
	    string binarynum = q.front();
	    q.pop();
	    
	    ans.push_back(binarynum);
	    q.push(binarynum + "0");
	    q.push(binarynum + "1");

	}
	return ans;
	
}
