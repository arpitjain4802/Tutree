void rotate(int arr[], int d, int n)
{
	while(d--)
	{
	    int var=arr[0];
	    for(int i=0;i<n-1;i++)
	    	arr[i]=arr[i+1];

	    arr[n-1]=var;
	} 
}
