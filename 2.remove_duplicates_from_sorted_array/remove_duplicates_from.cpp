class solution{

pubulic:
	int removeDuplicates(int A[],int n){
		int index=0;		
		for(int i=1, i<n,i++){
			if(A[index]!=A[i]){
				A[++index]=A[i];
			}

		
		}	
	return index+1}

}
