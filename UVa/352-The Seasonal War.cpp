#include<stdio.h>

int nRow, image[26][26];

void floodFill(int x, int y)
{
	image[x][y] = -1;

	if (x-1 >= 0 && y-1 >= 0 && image[x-1][y-1] == 1)
		floodFill(x-1, y-1);

	if(x-1>=0 && image[x-1][y]==1)
		floodFill(x-1,y);

	if(x-1>=0 && y+1<nRow && image[x-1][y+1]==1)
		floodFill(x-1,y+1);

	if(y-1>=0 && image[x][y-1] == 1 )
		floodFill(x,y-1);

    if(y+1<nRow && image[x][y+1]==1)
		floodFill(x,y+1);

	if(x+1<nRow && y-1>=0 && image[x+1][y-1] == 1)
		floodFill(x+1, y-1);

	if(x+1<nRow && image[x+1][y] == 1)
		floodFill(x+1, y);

	if(x+1<nRow && y+1<nRow && image[x+1][y+1] == 1)
		floodFill(x+1, y+1);

}
int main()
{
	int i,j, testCase = 0, nEagle;
	char text[26];

	while(scanf("%d",&nRow)==1)
	{
		testCase++;

		for(i=0;i<nRow;i++){
           scanf("%s", text);

			for(j=0;j<nRow;j++)
				image[i][j]=text[j]-'0';
		}

		nEagle=0;

		for(i=0;i<nRow;i++)
		{
			for(j=0;j<nRow;j++)
			{
				if(image[i][j]==1)
				{
					nEagle++;
					floodFill(i,j);
				}
			}
		}
		printf("Image number %d contains %d war eagles.\n", testCase ,nEagle);
	}
	return 0;
}
