class pascal
{
	public:
		vector<vector<int> > generate(int numRows)
		{
			int Rnum = numRows;
			vector<vector<int>> val;
			val.resize(numRows);
			for(int i=0; i < numRows; i++ )
			{	
				val[i].resize(i+1);
				val[i][0]=1;
				val[i][val.size()-1]=1;
				
				for(j=1;j<numRows-1;j++)
				{
					val[i][j]=val[i-1][j-1]+vak[i-1][j];				
				}
			}
			return val;		
		}


}
