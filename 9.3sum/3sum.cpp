class Solution
{
pubulic:
	vector<vector<int>> threeSum(vector<int> &num)
	{
		//检查一下该数组，如果长度小于3 直接就返回
		vector<vector<int>> ret;
		if (num.size<=3)
			return ret;
		//第一步要sort 这个数组,直接sort就是从小到大
		sort(num.begin(),num.end);
		//第二部 定义一个从头开始的指针，定义他后面的指针开始移动，再定义一个最后的指针指向最后一个元素,该算法的意义在于固定第一，第三个元素，移动中间一个，然后更新第一，第三 再移动第二个
		for(i=0,i<num.size()-2,i++)
		{
			j=i+1;
			k=num.size()-1;
			while(j<k)
			{
				
				vec<int> index;//设置一个可以返回的数组
				if(num[i]+num[j]+num[k]==0)
				{
					index.pushback(num[i]);	
					index.pushback(num[j]);
					index.pushback(num[k]);
					j++;
					k--;
				}
				
				else if(num[i]+num[j]+num[k] < 0)//数组是用升序排列的所以如果小于0就增大，可以更快速的像数组靠拢
					j++;
				else
					k--;
			}
			//去重复用
			while(i<num.size()&& num[i]==num[i+1])
				i++;
					
					
		}
		return ret;
	}
	
	


}
