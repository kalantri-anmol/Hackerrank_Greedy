int getMinimumCost(int k, vector<int> c){
	long min_cost=0;temp_cost=0;previous_purchase = 0;
	if(k>=c.size()){
		for(unsigned i=0;i<c.size();i++){
			min_cost += c[i];
		}
	}
	else{
		sort(c.rbegin(),c.rend());
		for(unsigned i=0;i<c.size();i++){
			if(temp_cost == k){
				temp_cost =0;
				previous_purchase++;
			}
			min_cost += (previous_purchase + 1) * c[i];
			temp_cost++;
		}
	}
	return min_cost;
}