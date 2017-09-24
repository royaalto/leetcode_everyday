class solution
{
public:
	void merge(int A[], int m, int B[], int n)
	{
		int i= m+n-1;//bigA
		int j= m-1;//A
		int k= n-1;//B

		while(i>0)
		{
			if(j>=0&&k>=0)
			{			
				if(B[k]>A[j])
				{
					A[i]=B[k];
					i--;
					k--;
				}
				else
				{
					A[i]=A[j];
					i--;
					j--;
				}
			}
			else if(j>=0)
			{
				A[i]=A[j];
				j--;	
			
			}
			else if(k>=0)
			{
				A[i]=B[k];
				k--;			
			}
		}
	}


}
