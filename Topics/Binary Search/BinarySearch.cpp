
// Basic implementation

int arr[1000001];
ll low , high , mid;
low = 0 , high = 1000000; 

while (low <= high)
{
	mid = (low+high)/ 2;
	if (arr[mid] == key)
	{
		cout << "found" << endl;
		break;
	}
	else if (arr[mid] > key)
	{
		high = mid - 1;
	}
	else low = mid + 1;
}



// start + (end-start)/2 = (start + end) / 2



//find the index of the first element == value in a sorted array

int Binary_Serach_find_first(int start, int end, int val) 
{
	while(start < end) 
	{
		int mid = start + (end-start)/2;
		if(f(mid) < val)		start= mid+1;
		else if(f(mid) > val)	end  = mid-1;
		else					end  = mid;
	}
	return start;
}



//find the index of the last element == value in a sorted array

int Binary_Serach_find_Last(int start, int end, int val) 
{
	while(start < end) 
	{
		int mid = start + (end-start)/2;
		if(f(mid) < val)		start= mid+1;
		else if(f(mid) > val)	end  = mid-1;
		else					start= mid;
	}
	return start;
}


