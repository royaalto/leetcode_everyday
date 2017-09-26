class Solution
{
public:
	int threeSumClosest(vector<int> &num, int target)
	{
		//corner detectiong
		if (num.size()<2)
			return -1;
		//sort is important
		sort(num.begin(),num.end());

		//use INT_MAX
		distance = INT_MAX;
		
		//该题思路还是把1.先从小到大排序2.固定首尾3.与看看和与目标的大小 小了 就移动j向大移动，大了就向小移动，注意还有正好跟target相等的情况。

		for(i=0;i<num.size()-2;i++)
		{
			j=i+1;
			k=num.size()-1;
			tmp_val = num[i]+num[j]+num[k];
			
			while(j<k)//竟然忘写了
			{
				if(target<tmp_val)
				{
					tmp_distance = tmp_val -target;
					if(tmp_distance<distance)
					{
						distance = tmp_distance;
						ret=num[i]+num[j]+num[k];

					}
					k--;

				}
			
				else if (target>tmp_val)
				{
					tmp_distance = target-tmp_val;
					if(tmp_distance < distance)
					{	
						distance = tmp_distance;
						ret=num[i]+num[j]+num[k];
					}
					j++;

				}
				//大于小于等于三种情况，=0的情况
				else
				{

					ret = num[i]+num[j]+num[k];
					return ret;
				}
			}


		}


	}




}
