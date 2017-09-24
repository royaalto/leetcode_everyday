class Solution
{
pubulic:
	vector<int> twoSum(vector<int> &number， int target)
	{

		vector<int> ret;
		if(number.size() <=1)
			return ret;//就是情况比较极端
		unordered_map<int,int> myMap;
	
		for (i=0; i<number.size(); i++)
		{
			myMap[number[i]]=i;
		}
		
		for(int i=0; i<number.size; i++)
		{
			int rest_val = target - number[i];
			if(myMap.find(rest_val)!=mymap.end)//用了map.find 函数， 还有map.end函数
					
			{

				int index = myMap[number[i]];//如果找到了 把他的号码找出来
				if (index==i)
					continue;//同一个数的话就继续找
				
				if(index<i)
				{
					ret.pushback(index+1);
					ret.pushback(i+1);
					return ret;
				}
				else
				{
					
					ret.pushback(i+1);
					ret.pushback(index+1);
					return ret;
				}
				
			}

		}

	}
	


}
