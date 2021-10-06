int average(int array[], int n){
	
	int sum=0;
	int i;
	int average;
	for(i=0;i<n;i++){
		sum = sum + array[i];
	}
	average = (sum/n);
	return average;
}
