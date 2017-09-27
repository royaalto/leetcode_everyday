class Solution
{
public:
	vector<vector<int>> fourSum(vector<int> &num, int target)	
	{

		//corner detection
		if (num.size()<4)
			return -1;
		//sort the vector
		sort(num.begin(),num.end());
		//define a vector to return value
		vector<int> ret;
		
		//自己做的时候少了去重复的,我错了 每个数ijk跟前面的比，l跟后面的比
		for(i=0;i<num.size()-4;i++)
		{
			
			if(num[i]==num[i-1])
				continue;
			for(j=i+1;j<num.size()-3;j++)
			{
				if(num[j]==num[j]-1)
					continue;				
				k=j+1;
				l=num.size()-1;
				while(k<l)
				{
					tmp_val = num[i]+num[j]+num[k]+num[l];
					if(tmp_val == target)
					{
						ret.pushback(num[i]);
						ret.pushback(num[j]);
						ret.pushback(num[k]);
						ret.pushback(num[l]);

						//skip the duplication solution
						do{++k;}
						while(k<l && num[k] == num[k-1]);
						do{--l;}
						while(k<l && num[l] == num[l+1])

					}
					else if (tmp_val>target)
						l--;
					else
						k++;

				}

			}
		
		}
		return ret;

	}







}
