class{
	pubulic:
	int removeDuplicate2(int A[],int n){
			if (n<2){
				return n;			
			}			
			index=2;			
			for(int i=2, i<n, i++)
			{
				if(A[index-2]!=A[i])
				{
					A[index++]=A[index-2];				
				}
			}
			return index+1;
	}
}
