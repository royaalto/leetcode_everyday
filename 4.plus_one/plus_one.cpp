class{
	public:
		vector<int> plusone(vector<int>$digits)
		{
			n=digits.size();
			for(int i=n-1;i>=0;i-- )
			{
				if(digits[i]==9)
				{
					digits[i]=0;				
				}
				else
				{
					digits[n]+=1;					
					return digits[i]+1;
				}
			if (digits.front==0)
				{
					digit.insert(digit.begin(),1);
					return digits;
							
				}			
			}
		}



}
